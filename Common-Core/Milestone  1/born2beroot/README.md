<h1 align="left">born2beroot</h1>

###

<h2 align="left">Creating the VM</h2>

###

<br clear="both">

<p align="left">When following the guide, create the VM with 8GB instead of 12GB as mentioned; this way, the partitions will have the correct size shown in the subject screenshot, avoiding issues.<br><br>*Guide: https://github.com/gemartin99/Born2beroot-Tutorial.git<br>https://github.com/curtyraissa/born2beroot.git</p>

###

<h2 align="left">1. Operating System Configuration</h2>

###

<p align="left">The project requires you to configure a server with a Linux-based operating system. The recommended options are:<br><br>- Debian (for beginners): It is a very stable system, widely used in production servers due to its reliability and constant updates.<br><br>- Rocky Linux (for those with more experience): Focused on corporate environments, it offers long support periods, making it ideal for mission-critical servers.<br><br>The goal is to configure this server without the need for a graphical interface (such as X.org), which makes the system lighter and more efficient. This is also a common practice in production servers, which do not need a graphical interface.</p>

###

<h2 align="left">2. Security</h2>

###

<p align="left">Several security measures need to be implemented:<br><br>- Selinux (for Rocky) and AppArmor (for Debian) must be active and properly configured. Both are security systems that control what programs can or cannot do on the system.<br><br>- Firewall: You need to configure a firewall, either UFW (for Debian) or firewalld (for Rocky), to ensure that only port 4242 is open, preventing unauthorized access.<br><br>- Disable SSH access as root: For security reasons, logging in as the root user via SSH will not be allowed.<br><br>- Strong password policy: User passwords must follow a strict policy, with requirements for complexity, validity, and history.</p>

###

<h2 align="left">3. User and Permission Configuration</h2>

###

<p align="left">You must create a user with your login name, and this user must belong to the user42 and sudo groups. This will allow you to perform administrative tasks without being the root user.<br><br>Sudo should be configured to log actions, limit the number of incorrect password attempts, and restrict the paths used for sudo actions.</p>

###

<h2 align="left">4. Partitions and LVM</h2>

###

<p align="left">You will be instructed to create encrypted partitions using LVM (Logical Volume Management), a tool that allows more flexible disk management than traditional partitions. LVM makes it easier to manipulate disk space, such as resizing partitions without the need to format them.</p>

###

<h2 align="left">5. SSH Service</h2>

###

<p align="left">The server must have the SSH service running on port 4242, allowing remote connections. This is useful for securely managing the server from another computer. During the defense, you will be tested by creating new users and configuring appropriate permissions for SSH usage.</p>

###

<h2 align="left">6. Creation of a Monitoring Script</h2>

###

<p align="left">You need to create a bash script called monitoring.sh. This script must run automatically, displaying information about the system status every 10 minutes across all terminals on the server. The information it should display includes:<br><br>The architecture and kernel version.<br>The number of physical and virtual processors.<br>RAM and disk usage and the percentage of utilization.<br>CPU load percentage.<br>The last time the server was rebooted.<br>Information about active connections and logged-in users.<br>The server's IP address and MAC address.<br>The number of commands executed with sudo.</p>

###

<h2 align="left">7. Defense</h2>

###

<p align="left">During the evaluation, you will be asked about the choices made in configuring the server. You will need to understand how each service and configuration you implemented works, such as what AppArmor is, the difference between apt and aptitude, or how SELinux works. Additionally, you will need to demonstrate your ability to modify configurations, like creating users and adding them to groups, without compromising the system's security.</p>

###
