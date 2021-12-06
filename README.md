<h1 align="center">
	<img src="https://www.pngrepo.com/png/270132/512/health-clinic-syringe.png" width="150px"><br>
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
  * Classic DLL Injection ```DllInject().Execute(int pid, wchar_t p_dll);```
  * DLL via Thread Hijacking ```TInjection().Execute(int pid, char *s);```
  * APC Code Injection ```APCInjection().Execute(char *s, char *proc_name);```
	
- How to use Shellcode Exeuction functions:
  * Shellcode Execution (ASM) ```ASMShellcodeExecution().Execute();```
  * Classic Shellcode Execution ```LocalShellcodeExecution().Execute(char *code);```
  * Shellcode Execution via Windows Fibers ```FiberShellcodeExecution().Execute(char *s);```
  * Shellcode Execution via RemoteThread ```RemoteProcessShellcodeExecution().Execute(char *code);```
  * Regular Shellcode Execution (No Windows API) ```ExecuteShellCodeNoAPI().Execute(char *shellcode);```

- How to use Process functions:
  * Checking if a process exists ```Execute(char *proc);```
  * Killing a process ```KillProc().Execute(int pid);```
  * Fetching the PID of a process ```GetProcess().Execute(char *proc);```

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
