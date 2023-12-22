/*
study and practice of basic linux commands

While performing a task, we all need shortcuts. Shortcuts help us to complete a task quickly. Linux comes with such commands which are one to two words, using that commands, you can perform several operations in no time. As a beginner, you must be aware of those basic Linux commands to complete an operation in a short time in the Linux-based operating system.

Basic Linux Commands

In this article, you’ll be going through some of the basic Linux commands which beginners can use to complete their tasks very quickly. Let’s go through each, but before that have a short idea on Linux.

What is Linux?
Linux is a free and open-source software that operates on its own operating system. The term ‘Linux’ stands for GNU + Linux. Initially developed by Linus Torvalds, it was created alongside the source code of Unix. While Linux is extensively utilized for various purposes, its applications are well-known to many.

Use of Linux Commands
Linux commands are a type of Unix command or shell procedure. They are the basic tools used to interact with Linux on an individual level. Linux commands are used to perform a variety of tasks, including displaying information about files and directories.

Linux operating system is used on servers, desktops, and maybe even your smartphone. It has a lot of command line tools that can be used for virtually everything on the system.

All users should be familiar with most of these commands as they are required for most operating system tasks and computer programming.

Here we have put all Basic Linux Commands that every Linux user (as a beginner) should know. These are not all that you should know, but these are the basic and most commonly used commands.

Basic Linux Terminal Commands

S.No.

Linux Commands

Functions

1

Is

Displays information about files in the current directory.
2

pwd

Displays the current working directory.
3

mkdir

Creates a directory.
4

cd

To navigate between different folders.
5

rmdir

Removes empty directories from the directory lists.
6

cp

Moves files from one directory to another.
7

mv

Rename and Replace the files
8

rm

Delete files
9

uname

Command to get basic information about the OS
10

locate

Find a file in the database.
11

touch

Create empty files
12

ln

Create shortcuts to other files
13

cat

Display file contents on terminal
14

clear

Clear terminal 
15

ps

Display the processes in terminal
16

man

Access manual for all Linux commands
17

grep

Search for a specific string in an output
18

echo

Display active processes on the terminal
19

wget

download files from the internet.
20

whoami

Create or update passwords for existing users
21

sort

sort the file content
22

cal

View Calendar in terminal
23

whereis

View the exact location of any command typed after this command
24

df

Check the details of the file system
25

wc

Check the lines, word count, and characters in a file using different options

25 Most-Commonly Used Linux Commands
1. Is command in Linux
The ls command is commonly used to identify the files and directories in the working directory. This command is one of the many often-used Linux commands that you should know.

This command can be used by itself without any arguments and it will provide us the output with all the details about the files and the directories in the current working directory. There is a lot of flexibility offered by this command in terms of displaying data in the output. Check the below image for the output.

ls command in linux

2. pwd command in Linux
The pwd command is mostly used to print the current working directory on your terminal. It is also one of the most commonly used commands. 

Now, your terminal prompt should usually include the entire directory. If it doesn’t, this is a quick command to see which directory you’re in. Another purpose for this command is when creating scripts because it can help us find the directory in which the script was saved. The below pictures are the output with the command.

Command: 
 

pwd command in linux

Output:

output of pwd command in linux

3. mkdir command in Linux
This mkdir command allows you to create fresh directories in the terminal itself. The default syntax is mkdir <directory name> and the new directory will be created.

For example, if you want to create a directory as “GeeksforGeeks” then the basic syntax would be:

mkdir GeeksforGeeks
In case you want to create another directory inside the main directory GeeksforGeeks to store projects, you can use the following command to do so. mkdir GeeksforGeeks/projects

Command:

mkdir command in linux

Output:

output of mkdir command in linux

You can see we used ls first to see the directories present there and then mkdir to create another directory followed by ls to view the created directories.

4. cd command in Linux
The cd command is used to navigate between directories. It requires either the full path or the directory name, depending on your current working directory. If you run this command without any options, it will take you to your home folder. Keep in mind that it can only be executed by users with sudo privileges.

Command:
 

cd command in linux

Output:

output of cd command in linux

Here we used pwd to view the current directory for reference and then we used cd GeeksforGeeks to switch the directory and with again pwd command we can see the output is the switched directory, i.e – GeeksforGeeks

5. rmdir command in Linux
The rmdir command is used to delete permanently an empty directory. To perform this command the user running this command must be having sudo privileges in the parent directory. 

Command:
 

rmdir command in linux
Command to remove the directory

Output:

output of rmdir command in linux

Here we used the ls command to check the directories present there and used rmdir <directory name> to delete the directory and again the ls command to view the directories after deleting the same.

6. cp command in Linux
The cp command of Linux is equivalent to copy-paste and cut-paste in Windows. 

Command:

 

cp command in linux

Output:

output of cp command in linux

Here we used ls to view the files and then used cp to copy the files of first.txt to second.txt and again used ls command to view the updated files.

7. mv command in Linux
The mv command is generally used for renaming the files in Linux.

Command:

mv command in linux

Output: 

output of mv command in linux

Here we used the ls command to check the directories and then used mv <file name> <Renamed file name> to rename the files, and then again we used the ls command to view the renamed file as you can see in the output screenshot.

8. rm command in Linux
rm command in Linux is generally used to delete the files created in the directory. 

Command:

rm command in linux

Output:

output of rm command in linux

You can see as we wrote the ls command to view the files in the terminal and then rm <file name> to delete the files and again we had the ls command to check the update.

9. uname command in Linux
The uname command is used to check the complete OS information of the system. Check out the command and the output below

Command: 

uname command in linux

Output:

output of uname command in linux

10. locate command in Linux
The locate command is generally used to locate the files in the database. Use an asterisk (*) to search for content that contains two or more words. As an example: locate first*file. This command will search the database for the files that contain these two names first and file.

Command: 

locate command in linux

Output:

output of locate command in linux

We first used the rm command to delete the file and then used the locate command to find the file in the database which in return has given the output with a -e as the file was removed.

11. touch command in Linux
The touch command creates an empty file when put in the terminal in this format as touch <file name> 

Command: 

touch command in linux

Output: 

output of touch command in linux

We used the ls command to check the current directories in the terminal and then used the touch command to create an empty file and then again we used ls to find out the created file in the terminal.

12. ln command in Linux
The ln command is used to create a shortcut link to another file. This is among the most important Linux commands to know if you want to operate as a Linux administrator.

Command:

ln command in linux

Output:

output of ln command in linux

Here we used mkdir to create two directories and then we used ln with an -s to create a soft link in it.

13. cat command in Linux
The cat command is the simplest command to use when you want to see the contents of a particular file. The only issue is that it simply unloads the entire file to your terminal. If you want to navigate around a huge file, should use less command alternatively.

Command:

cat command in linux

Output:

output of cat command in linux

14. clear command in Linux
The clear command is a standard command to clear the terminal screen.

Command: *This was the terminal before the command.
 

clear command in linux

Output: 

output of clear command in linux

15. ps command in Linux
ps command in Linux is used to check the active processes in the terminal.

Command:

ps command in linux

Output:

output of ps command in linux

16. man command in Linux
The man command displays a user manual for any commands or utilities available in the Terminal, including their name, description, and options.

Command to view the full manual: 

man <command name>
For example, suppose you want to look up the manual for the ls command: man ls

Command:

man command in linux

Output: 

output of man command in linux

17. grep command in Linux
The grep command is used to find a specific string in a series of outputs. For example, if you want to find a string in a file, you can use the syntax: <Any command with output> | grep “<string to find> “

For Example:

cat Files.txt | grep “new”
Command: 

grep command in linux

Output: 

output of grep command in linux

In this command, we first used cat <file name> to view the content of the file, and then we used cat <file name> | grep “string” to check the string in it.

18. echo command in Linux
echo command in Linux is specially used to print something in the terminal

Command: 

echo command in linux

Output: 

output of echo command in linux

19. wget command in Linux
The wget command in the Linux command line allows you to download files from the internet. It runs in the background and does not interfere with other processes.

Here is the basic syntax: wget [option] [url]

Command: 

wget http://sample.com/sample-menu.php
wget command in linux

Output:

output of wget command in linux

20. whoami command in Linux
The whoami command provides basic information that is extremely useful when working on multiple systems. In general, if you are working with a single computer, you will not require it as frequently as a network administrator.
 

Command: 

whoami command in linux

Output: 

output of whoami command in linux

21. sort command in Linux
The sort command is used generally to sort the output of the file. Let’s use the command and see the output.

Command: (We are using the cat command to see the file content)

cat command in linux

Output: (The content of multiple.txt file in the terminal)

output of cat command in linux

Now we will sort the outcome using the sort command

Command:

sort command in linux

Output:

output of sort command in linux

Here first we checked the file content using the cat command and then we sorted it alphabetically using the sort command.

22. cal command in Linux
The cal command is not the most famous command in the terminal but it functions to view the calendar for a particular month in the terminal. Let’s see how this works.

Command: 

cal command in linux

Output: 

output of cal command in linux

23. whereis command in Linux
whereis command in Linux is generally used to see the exact location of any command typed after this. Let’s see how this performs.

Command:

whereis command in linux

Output: 

output of whereis command in Linux

24. df command in Linux
df command in Linux gets the details of the file system.

Command: 

df command in linux

Output: 

output of df command in linux

Here we have used df -h as simply typing df will return the output in bytes which is not readable, so we add -h to make the outputs more readable and understandable.

25. wc command in Linux
wc command in Linux indicates the number of words, characters, lines, etc using a set of options. 

wc -w shows the number of words
wc -l shows the number of lines
wc -m shows the number of characters present in a file
Let’s see one example of these options

Command: 

wc command in linux

Output: 

output of wc command in linux

Here we used the touch command to create a text file and then used the echo command to input a sentence that contains six words and we used the wc -w command to calculate the number of words in it.

Conclusion
We hope that this list of all Linux commands will assist you in getting started as a beginner. There are more such commands in Linux and these are only a few of them; you’ll discover many more as time goes on, but this is a good place to start. The best way to learn Linux is to experiment with these essential commands.
*/