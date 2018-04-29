# My-CodeBlocks-Static-Library

A Static Library in CodeBlocks (in C) with few data type conversion functions and some QBASIC function (string handling).

This repo contains functions which I use in my C/C++ codes/projects.

### Development
I used **Code::Blocks 17.12** as IDE and compiler on Windows 10.

### Installing/Cloning
To clone it on your local machine,
- Clone this repository to your local machine.
```shell
git clone https://github.com/OjeshManandhar/QBASIC-func-through-C
```
- Go inside the directory where you placed the cloned repo
- Build the project
- Link the *.a* file created after building
  + Goto *Settings* tab on navigation bar then *Compiler...*
  + Goto *Linker settings* tab in *Global compiler settings*
  + Click *add* and browse to the Project folder
  + The *.a* file is inside *bin\Debug\\*
- Add *QBASIC_func_C.h* in **Code::Blocks** header folder
  + Goto the directory where you installed **Code::Blocks**
  + Open *CodeBlocks* folder
  + Open *MinGW* folder
  + Open *include* folder
  + Copy *QBASIC_func_C.h* from the cloned folder and paste it here
- Then just include *QBASIC_func_C.h* anytime you want to use these function in your code
```C
#include <QBASIC_func_C.h>
```
  
### Further Improvements
If you're interested, feel free to fork and submit PR.
- More conversion codes
- Easier algorithm for conversion and other functions
  
### License
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
