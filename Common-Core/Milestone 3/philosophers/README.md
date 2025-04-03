<h1 align="left">Philosophers</h1>

###

<p align="left">The Philosophers project is a classical simulation of the "Dining Philosophers Problem," which demonstrates synchronization challenges in concurrent systems. In this implementation, each philosopher is represented by a thread that alternates between eating, thinking, and sleeping states while competing for shared resources (forks) around a circular table.</p>

###

<h2 align="left">Project Challenges</h2>

###

<p align="left">
1. <strong>Deadlock Prevention</strong><br><br>
- Strategy to prevent all philosophers grabbing forks simultaneously<br>
- Resource ordering to prevent circular wait<br><br>

2. <strong>Starvation Control</strong><br><br>
- Ensuring fair eating opportunities<br>
- Implementing fair fork acquisition logic<br><br>

3. <strong>Time Synchronization</strong><br><br>
- Precise timing for state changes<br>
- Death detection within 10ms tolerance<br><br>

4. <strong>Resource Management</strong><br><br>
- Proper memory allocation/deallocation<br>
- Correct mutex initialization/destruction<br><br>

5. <strong>Synchronized Output</strong><br><br>
- Race-condition-free logging<br>
- Atomic message printing</p>

###

<h2 align="left">Implemented Solutions</h2>

###

<p align="left">
• <strong>Fork Acquisition Algorithm</strong>:<br>
- Even-numbered philosophers: left fork first<br>
- Odd-numbered philosophers: right fork first<br><br>

• <strong>Monitoring System</strong>:<br>
- Constant health checks<br>
- Early termination when meal targets met<br><br>

• <strong>Logging System</strong>:<br>
- Dedicated mutex for print operations<br>
- Atomic state messages</p>

###

<h2 align="left">Quality Metrics</h2>

###

<p align="left">
✔ Zero memory leaks (Valgrind-verified)<br>
✔ No race conditions (Helgrind-checked)<br>
✔ 10ms timing precision<br>
✔ Norminette-compliant code<br>
✔ Efficient resource management</p>

###

<h2 align="left">Usage</h2>

###

<p align="left">```bash
./philo number_of_philosophers time_to_die time_to_eat time_to_sleep [number_of_meals]
```<br><br>
Example:<br>
```bash
./philo 5 800 200 200 7
```</p>
