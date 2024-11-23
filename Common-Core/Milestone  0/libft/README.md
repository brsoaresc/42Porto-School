<h1 align="left">libtf</h1>

###

<br clear="both">

<p align="left">The objective of this project is to create your own library called libft.a, composed of several functions that can be used in other projects. The idea is to recreate functions that are part of the C standard library (libc), but with the prefix ft_ instead of their original names. For example, the strlen function from libc will be recreated as ft_strlen.</p>

###

<h2 align="left">1. Project Objective:</h2>

###

<p align="left">The project requires you to write your own library of functions in C. These functions will behave the same as the libc functions, but with the ft_ prefix. This will help you understand how the C standard library works and how you can write your own useful functions, as well as learn how to organize and compile a static library (.a file).</p>

###

<h2 align="left">2. Implementation Rules:</h2>

###

<p align="left">- No global variables: You cannot use global variables in your library, meaning each function should be independent and not rely on global values.<br><br>- Helper functions: If a larger function requires helper functions, they should be static, i.e., defined only in the file where they are used, to avoid polluting the global scope of the project.<br><br>- File organization: All source code files (.c files) and the header file (.h) should be at the root of the repository (main directory). You are not allowed to submit unused files in your project.<br><br>- Compilation flags: All .c files must be compiled with the flags -Wall -Wextra -Werror, which are used to show warnings and errors during compilation.<br><br>- Use of the ar command: To create the static library libft.a, you must use the GNU ar command. Tools like libtool are not allowed.<br><br>- Final file: The final file of your library, libft.a, must be generated at the root of your repository.</p>

###

<h2 align="left">3. Recreation of libc Functions:</h2>

###

<p align="left">The first part of the project involves recreating functions from libc, the standard C library. The functions you implement must behave exactly like the original libc functions, but with the ft_ prefix: for example, strlen from libc becomes ft_strlen in your library.<br><br>- Protocols and standards: Some functions you need to recreate use the restrict modifier, which is part of the C99 standard. However, you cannot use restrict in your own implementations nor compile the code with the -std=c99 flag.</p>

###

<h2 align="left">4. Compilation and Organization:</h2>

###

<p align="left">You will need to create a Makefile to simplify the process of compiling and generating the libft.a library. It should include the following rules: NAME, all, clean, fclean, and re.<br><br>NAME: Defines the name of the final file (in this case, libft.a).<br><br>all: Compiles all necessary files.<br><br>clean: Cleans temporary compilation files.<br><br>fclean: Cleans temporary files and the final library file.<br><br>re: Performs a full recompilation.</p>

###
