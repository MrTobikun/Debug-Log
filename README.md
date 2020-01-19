# Debug Log
Cross-platform output debugging information to a file with C++ language features

Tested on compilers:
- GCC
- Clang
- MSVC

> In newer versions MSVC before build, reports that freopen function is unsafe
> Solved by writing to preprocessor `_CRT_SECURE_NO_WARNINGS`


Tested on platforms:
- Linux
- Windows

## Examples
Output line:
```
DEBUG_TO_FILE("START TEST:\r\n");
```
Format output numbers:
```
DEBUG_TO_FILE_FORMAT("Hex_Value = %x Dec_Value = %d\r\n", value, value);
```
Output line with pointer
```
DEBUG_TO_FILE_FORMAT("Debug_Str = %s\r\n", str);
```
## Usage in your project
Include header and use functions

## Source
This code is a modification of another repository:
https://github.com/XShar/Debug_info_for_windows
