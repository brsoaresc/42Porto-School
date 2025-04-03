<h1 align="left">Philosophers</h1>

###

<p align="left">The Philosophers project is a classic concurrent programming challenge that simulates the dining philosophers problem using threads and mutexes. This project focuses on synchronization, resource sharing, and preventing deadlocks in a multi-threaded environment.</p>

###

<h2 align="left">Project Components</h2>

###

<p align="left">- Implement philosopher threads that alternate between states (eating, thinking, sleeping)<br>- Manage shared resources (forks) using mutexes<br>- Monitor philosopher states to prevent starvation and deadlocks<br>- Ensure precise timing for state changes and death detection<br><br>**Core Structures**<br>• t_data: Contains simulation parameters and synchronization primitives<br>• t_philo: Represents each philosopher with their state and timing information<br><br>**Key Operations**<br>• Fork acquisition/release<br>• State transitions with proper timing<br>• Health monitoring</p>

###

<h2 align="left">Project Challenges</h2>

###

<p align="left">1. Synchronization:<br><br>- Preventing deadlocks when all philosophers try to acquire forks simultaneously<br>- Avoiding race conditions in shared resource access<br>- Ensuring fair fork distribution to prevent starvation<br><br><br>2. Timing Precision:<br><br>- Maintaining accurate timing for eating/sleeping durations<br>- Detecting deaths within strict 10ms tolerance<br>- Implementing precise usleep without overshooting</p>

###

<h2 align="left">Technical Implementation</h2>

###

<p align="left">- Uses pthreads for philosopher threads<br>- Implements mutexes for fork protection and state synchronization<br>- Employs a monitoring system to check philosopher health<br>- Features deadlock prevention through staggered fork acquisition<br>- Includes memory leak-free implementation (Valgrind-checked)</p>

###

<h2 align="left">Usage</h2>

###

<p align="left">```bash
./philo number_of_philosophers time_to_die time_to_eat time_to_sleep [number_of_meals]
```<br><br>Example:<br>```bash
./philo 5 800 200 200 7
```</p>
