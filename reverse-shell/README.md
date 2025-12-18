# Reverse Shell
## What is a shell

A **shell program** is a legitimate program that provides a command-line interface (CLI) for interacting with an operating system.

It acts as a command interpreter:

1. You type commands
1. The shell parses them
1. The OS executes them

Common shell programs

- Linux / Unix
    - bash
    - sh
    - zsh
    - fish
- Windows
    - cmd.exe
    - PowerShell

## What is a reverse shell?

A **reverse shell** is not a shell program — it is a technique (often malicious) for remotely obtaining a shell.

Instead of you connecting to a machine:

- The target machine connects back to you
- Then exposes a shell over that connection

This is commonly used in:

- Exploitation
- Penetration testing
- Malware
- Red-team tooling

## Why reverse shells exist?

Firewalls usually:
- Block inbound connections
- Allow outbound connections

Reverse shells exploit this:
- The victim initiates the connection
- Firewalls often allow it

This is why reverse shells are extremely common in:
- CTFs
- Exploit development
- Red-team exercises