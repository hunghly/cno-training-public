# Remote Access Tool (RAT)
## What is a RAT?
A Remote Access Tool (sometimes remote administration tool or remote access trojan) is a software that allows a user to control a computer system from a remote location. It is a standard tool for IT professionals, but can be used maliciously. 

A RAT lets someone:
- Connect to another machine
- See or interact with it
- Run commands
- Transfer files
- Manage the system as if they were sitting at it

Malicious RATS include these capabilities:
- Run silently
- Persist on reboot
- Bypass security controls
- Allow full remote control by an attacker

Real life RATs
- Quasar
- DarkComet
- Poison Ivy

## What is the common functionalities of a RAT?

1. Remote Command & Control

- Command execution (interactive shell or task-based)
- Process management (list, start, stop processes)
- Service/daemon control
- Privilege-aware operations (depending on permissions)

2. Remote Desktop & Interaction

- Screen viewing (live or on-demand)
- Keyboard and mouse input
- Clipboard sharing
- Multi-monitor support

3. File System Access

- Browse directories
- Upload/download files
- Create, delete, move files
- Execute files remotely
- Archive/compress data

4. System Information Gathering

- OS and kernel version
- CPU, memory, disk info
- Network interfaces & IPs
- Installed software
- Running users/sessions

5. Network Capabilities

- Outbound (reverse) connections
- Inbound connections
- Connection persistence / auto-reconnect
- Proxying / tunneling
- Bandwidth throttling

6. Persistence & Availability

(Legitimate or malicious depending on consent)
- Auto-start on boot
- Runs as a service/daemon
- Watchdog / self-restart
- Survives network interruptions

7. Security & Access Control

- Authentication (passwords, keys, certificates)
- Encrypted communications
- Role-based access
- Session timeout / locking

Audit logs

8. Monitoring & Surveillance (Context-Dependent)

- Keystroke capture
- Screen snapshots
- Webcam/microphone access
- Application usage tracking

⚠️ These features are high-risk if deployed without explicit authorization.

9. Automation & Extensibility

- Task scheduling
- Scripting support
- Plugin or module system
- Remote updates

10. Management & Scaling

- Multiple client management
- Centralized control panel
- Client grouping/tags
- Health/status monitoring