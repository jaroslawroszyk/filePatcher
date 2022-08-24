# filePatcher
First encounter with file patchers

# What is that?
 

## How to use
First write a simple hello world.
Like:
```
#include <iostream>
int main() { std::cout << "Hello Wolrd"; }
```
And compile it
```
g++ hello.cpp -o hello 
```
And run executable - in my case it's `./hello`
Put this executable file into program like `HxD` and 

Place this executable in a program like `HxD` and find the first word in it from the previous program (my name is" hello ") and click in front of the second word you want to replace.
as you can see below:

[exmaple](jaroslawroszyk.github.com/filePatcher/blob/main/exampleHexEd.jpgraw=true)

in my case I will copy the offset "77" (you can see it in the program)

next only compie the secound program `patcher.cpp` and run it 
