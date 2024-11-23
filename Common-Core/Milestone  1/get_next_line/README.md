<h1 align="left">get_next_line</h1>

###

<p align="left">The Get Next Line project is a task that involves creating a function to read a line from a file or from the standard input, one line at a time. This functionality is quite useful in systems that need to process large volumes of data without loading the entire file into memory at once.</p>

###

<h2 align="left">Project Description::</h2>

###

<p align="left">The goal is to implement a function called get_next_line() that reads a line from a file or from the standard input (stdin) and returns it. Each time this function is called, it should return one line from the file. When there are no more lines to read or if an error occurs, the function should return NULL.</p>

###

<h3 align="left">How It Works</h3>

###

<p align="left">1.Reading in Chunks: Instead of reading the entire file at once, the function should read the file in small chunks. This helps save memory and handle large files. To do this, you will use the read() function, which reads a specified amount of data (determined by BUFFER_SIZE).<br><br><br>2. Detecting a Line: When you read data from a file, the system will not directly read "lines," but only chunks of text. Therefore, you need to search for the newline character (\n) within the read data to identify where one line ends.<br><br>3.Returning the Line: Once a line is read (or if the file ends), you should return that line to the program that called the function. The expected behavior is:<br>- If the line contains a newline character (\n), it should be included in the returned line.<br>- If the line does not contain a newline character (e.g., the last line of the file), it should still be returned, but without the \n.<br><br>4. Continuous Reading: For the function to work correctly, you need to ensure that subsequent calls to get_next_line() continue reading from where the last read left off. This means you need to remember where you stopped reading, using, for example, static variables.</p>

###

<h3 align="left">How to Implement::</h3>

###

<p align="left">The project is divided into three main files:<br><br>1. get_next_line.c: This file contains the implementation of the get_next_line() function, which should handle reading from the file and returning the lines.<br><br>2. get_next_line_utils.c: In this file, you can implement auxiliary functions to help manipulate the lines, such as a function to join data chunks or search for a newline character.<br><br>3. get_next_line.h: This file contains the definition of the get_next_line() function and any other necessary definitions, such as declarations for auxiliary functions and constants.</p>

###
