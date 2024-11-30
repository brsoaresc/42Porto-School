<h1 align="left">minitalk</h1>

###

<p align="left">This project is about creating a communication system between a client and a server using only operating system signals (SIGUSR1 and SIGUSR2), without using networks or other communication methods. <br>It is a way to learn how to work with low-level communication, using operating system signals, and managing memory and errors correctly.</p>

###

<h2 align="left">Project Description:</h2>

###

<h4 align="left">Server:</h4>

###

<p align="left">Server: The server is started first. Once started, it displays the PID (Process ID), which is a unique number that identifies the process in the system. <br>The server needs to be able to receive messages from multiple clients continuously, without needing to be restarted. <br>When a message is received, it must be displayed quickly, meaning the time taken to display the message should not be too long.</p>

###

<h4 align="left">Client:</h4>

###

<p align="left">* The client is started with two parameters:<br>   1. The server's PID: The unique identifier of the server.<br>   The message to be sent: The string that will be sent to the server.<br>* The client then sends the message to the server using SIGUSR1 and SIGUSR2 signals.</p>

###

<h4 align="left">How the Communication Works:</h4>

###

<p align="left">* SIGUSR1 and SIGUSR2 signals are used to represent data bits.<br>   - The client sends signals to the server to indicate the value of each bit in the message (1 or 0).<br>   - For example, the client might send SIGUSR1 to indicate that the bit is "1" and SIGUSR2 to indicate that the bit is "0".<br>   - The server, upon receiving these signals, decodes the bit sequence and reconstructs the message.</p>

###

<h4 align="left">Important Requirements:</h4>

###

<p align="left">* No memory errors: The program must not cause issues like memory leaks (where memory is not freed correctly) or segmentation faults (errors that cause the program to crash).<br>* Use of only one global variable: Only one global variable is allowed, and its use must be justified.<br>* Performance: The server must be able to display the message efficiently, without taking too long.</p>

###
