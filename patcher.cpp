#include <iostream>
#include <fstream>
#include <cstring>

auto patchBytes(std::fstream * fs, int offset, const char* bytes) -> void
{
  fs->seekg(offset,std::ios::beg);
  fs->write(bytes, std::strlen(bytes));
}

auto readBytes(std::fstream* fs,int offset,int len) -> void
{
  fs->seekg(offset,std::ios::beg);
  char* buffer = new char[len + 1];
  buffer[len] = '\0';

  fs->read(buffer,len);
  std::cout << buffer << std::endl;

  delete[] buffer;
}

auto main() -> int
{
  int offset = 0x0000200A;
  std::fstream fileStream("hello",std::ios::in | std::ios::out | std::ios::binary);
  std::cout << "Orginal: ";
  readBytes(&fileStream,offset, 5);

//  const char* newStr = "\x50\x61\x74\x63\x68";
  auto newStr = "Done xD";
  patchBytes(&fileStream,offset ,newStr);
  std::cout << "Patched: ";
  readBytes(&fileStream,  offset, 5);

  fileStream.close();
}
