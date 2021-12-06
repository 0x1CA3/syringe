<h1 align="center">
	<img src="https://www.pngrepo.com/png/270132/512/health-clinic-syringe.png" width="200px"><br>
    syringe - A DLL & Code Injection C++ library for Windows.
</h1>
<p align="center">
    syringe is a DLL & Code Injection C++ library for Windows that contains
    different techniques to assist in injecting code/DLLs into remote process. Syringe
    also contains various techniques for execution shellcode.
</p>

<p align="center">
	<a href="https://deno.land" target="_blank">
    	<img src="https://img.shields.io/badge/Version-1.0.0-7DCDE3?style=for-the-badge" alt="Version">
</p>

## Features
Injection Techniques |
------------------------ |
APC Code Injection |
Classic DLL Injection |
DLL Injection via Thread Hijacking |

Shellcode Execution Techniques |
------------------------------ |
Shellcode Execution (ASM) |
Classic Shellcode Execution |
Shellcode Execution via RemoteThread |
Shellcode Execution via Windows Fibers |
Regular Shellcode Execution (No Windows API) |

## Information
- How to use DLL/Code Injection functions:
  * Classic DLL Injection ```void Execute(int pid, wchar_t p_dll);```
  * DLL via Thread Hijacking ```void Execute(int pid, char *s);```
  * APC Code Injection ```void Execute(char *s, char *proc_name);```
	
- How to use Shellcode Exeuction functions:
  * Shellcode Execution (ASM) ```void Execute(void);```
  * Classic Shellcode Execution ```void Execute(char *code);```
  * Shellcode Execution via Windows Fibers ```void Execute(char *s);```
  * Regular Shellcode Execution (No Windows API) ```void Execute(char *shellcode);```
  * Shellcode Execution via RemoteThread ```void Execute(char *code);```

- How to use Process functions:
  * example

- How to use functions classifed under `misc`:
  * example
## Setup & Installation
```
Steps for compiling & running:
  compile.bat
  g++ -o <binary> <source_file> syringe.dll
```

## Credits
```
https://github.com/0x1CA3
```
### Contributions 🎉
###### All contributions are accepted, simply open an Issue / Pull request.
