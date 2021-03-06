<h1 align="center">
	<img src="https://www.pngrepo.com/png/270132/512/health-clinic-syringe.png" width="150px"><br>
    syringe - A DLL & Code Injection C++ library for Windows.
</h1>
<p align="center">
    Visit https://github.com/0x80000000/winexec for the newer version of this library (removed a couple features, and added more hooking options).
    I'm planning on expanding this project alot more.
</p>

<p align="center">
	<a href="https://deno.land" target="_blank">
    	<img src="https://img.shields.io/badge/Version-1.0.0-7DCDE3?style=for-the-badge" alt="Version">
</p>

## Features
Process Features |
---------------- |
Kill a process
Check if a process exists
Fetch the PID of a process

Injection Techniques |
------------------------ |
APC Code Injection |
Classic DLL Injection |
DLL Injection via Thread Hijacking |

Miscellaneous Features |
---------------------- |
Checking for 32bit or 64bit Windows
Checking for little-endian or big-endian

Shellcode Execution Techniques |
------------------------------ |
Shellcode Execution (ASM) |
Classic Shellcode Execution |
Shellcode Execution via RemoteThread |
Shellcode Execution via Windows Fibers |
Regular Shellcode Execution (No Windows API) |

## Information
- How to use Process functions:
  * Checking if a process exists ```GetProcess().Execute(char *proc);``` Parameters: (process name)
  * Killing a process ```KillProc().Execute(int pid);``` Parameters: (process ID)
  * Fetching the PID of a process ```GetPID().Execute(char *proc);``` Parameters: (process name)

- How to use functions classifed under `misc`:
  * Checking for 32bit or 64bit Windows ```IsWin64().Execute();``` Parameters: (none)
  * Checking for little-endian or big-endian ```GetEndian().Execute()``` Parameters: (none)

- How to use DLL/Code Injection functions:
  * Classic DLL Injection ```DllInject().Execute(int pid, wchar_t p_dll);``` Parameters: (process ID, DLL)
  * DLL via Thread Hijacking ```TInjection().Execute(int pid, char *s);``` Parameters: (process ID, shellcode)
  * APC Code Injection ```APCInjection().Execute(char *s, char *proc_name);``` Parameters: (shellcode, process name)
	
- How to use Shellcode Exeuction functions:
  * Shellcode Execution (ASM) ```ASMShellcodeExecution().Execute();``` Parameters: (none) | Go to `includes/shellcode/asm.hpp` to edit in your own custom shellcode!
  * Classic Shellcode Execution ```LocalShellcodeExecution().Execute(char *code);``` Parameters: (shellcode)
  * Shellcode Execution via Windows Fibers ```FiberShellcodeExecution().Execute(char *s);``` Parameters: (shellcode)
  * Shellcode Execution via RemoteThread ```RemoteProcessShellcodeExecution().Execute(char *code);``` Parameters: (shellcode)
  * Regular Shellcode Execution (No Windows API) ```ExecuteShellCodeNoAPI().Execute(char *shellcode);``` Parameters: (shellcode)

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
### Contributions ????
###### All contributions are accepted, simply open an Issue / Pull request.
