SIMPLE SHELL

In this project, we will be implementing a simple shell program in the C programming language. The shell is a command-line interface that allows users to interact with the operating system by typing in commands. The goal of this project is to replicate the basic functionality of a Unix shell, such as executing commands, manipulating the environment, and creating and managing processes.

The shell works by reading user input, parsing it into commands and arguments, and executing those commands. The shell also manages the environment of the current process, including environment variables and the current working directory

USAGE

To use the simple shell program, first, you need to compile the code using a C compiler such as gcc. For example, if your shell program is named shell.c, you can compile it using the following command:

gcc -Wall -Werror -Wextra -pedantic shell.c -o shell

This will generate an executable file named shell. To run the shell, simply execute the generated file:

./shell

Once the shell is running, you can type in commands and press Enter to execute them. The shell will then display the output of the command on the screen. For example, you can type in ls -l to list the files in the current directory in long format.

The shell also supports basic input/output redirection using the > and < symbols. For example, you can redirect the output of the ls command to a file named output.txt using the following command:

ls > output.txt

Similarly, you can redirect the input of a command from a file using the < symbol. For example, you can execute the sort command with input from a file named input.txt using the following command:

sort < input.txt

The shell also supports background processes using the & symbol. For example, you can run the sleep command in the background for 10 seconds using the following command:

sleep 10 &

To exit the shell program, type in the exit command or press Ctrl + D.

Here are some amazing features of this project:

Execute external commands in a jiffy and watch the magic unfold.
Redirect input and output to your heart's content and make your shell experience seamless.
Pipeline commands to chain processes and take your commands to the next level.
Run commands in the background and multitask like a pro.
Expand environment variables and feel like a coding superstar.
Handle signals and become a master of error handling.

Using this shell is as easy as pie. Simply compile the code and run the resulting executable file, and you're good to go! You can enter commands at the prompt, just like you would in a regular terminal.

BUILTIN COMMANDS

Builtin commands are special commands that are built into the shell program itself, rather than being separate executable files. These commands are executed directly by the shell, without creating a new process. Some common examples of builtin commands in Unix-like systems are cd, echo, and exit.

In a simple shell program, you can implement your own set of builtin commands. Here are some examples of commonly implemented builtin commands:
cd: changes the current working directory of the shell. For example, cd /home/user would change the current directory to /home/user.
exit: exits the shell program. For example, exit would terminate the shell program.
echo: prints a message to the console. For example, echo hello world would print the message "hello world".
pwd: prints the current working directory of the shell. For example, pwd would print the current directory path.
env: prints the environment variables set in the shell. For example, env would print all environment variables currently set.

To implement a builtin command in a simple shell program, you need to first check if the command entered by the user matches any of the built-in commands. If it does, you can execute the command directly using functions provided by the operating system, rather than creating a new process.

A PID (process ID) is a unique identifier assigned to each running process on a Unix system. A PPID (parent process ID) is the PID of the process that spawned the current process. Processes can manipulate their environment by modifying environment variables or changing the current working directory using the chdir system call.

A function is a block of code that performs a specific task and returns a value. A system call is a request for a service provided by the operating system kernel, such as creating a new process or reading from a file.

Processes can be created using the fork system call, which creates a new process that is a copy of the parent process. The execve system call can be used to replace the current process image with a new process image, such as an executable file.

The shell uses the PATH environment variable to find the location of executable programs. When a user enters a command, the shell searches for the executable file in each directory listed in the PATH variable until it finds a match.

To suspend the execution of a process until one of its children terminates, the wait or waitpid system call can be used. This allows the parent process to synchronize with its children and perform cleanup tasks after they have completed.

EOF (end-of-file) is a signal that indicates the end of a file or stream of input. When a program encounters EOF, it knows that there is no more input to process.

List of Allowed Functions and System Calls
The following functions and system calls are allowed for use in this project:

access
chdir
close
closedir
execve
exit
_exit
fflush
fork
free
getcwd
getline
getpid
isatty
kill
malloc
open
opendir
perror
read
readdir
signal
stat
lstat
fstat
strtok
wait
waitpid
wait3
wait4
write
These functions and system calls can be used to implement the basic functionality of a shell program.

Simple_shell can be used on various operating systems such as Unix, Linux, and macOS

AUTHORS

ESTHER EJIMOFOR(ejimofor81@gmail.com), 

EMMANUEL NDUKWE NMAJU(enmaju37@gmail.com)
