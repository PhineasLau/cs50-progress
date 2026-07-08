# Week 1
## Use a web version of vs code with all pre configured settings for the projects. Link: cs50.dev 
## Use cs50's own headerfile with the libraries, and their manual needed for coding projects. cs50.h and manual.cs50.io.
## Use cs50's check50, design50 and style50 in its vs code studio for the projects.

## Correctness vs Design vs Style
### First is whether the code can solve the problem it supposed to.
### Second is whether to do it efficiently.
### Third is whether it is easy to read, consistant for other humans to debug.

## You could overflow a variable if you assign too high value to it, as int can only have up to around 4 billion different values, so up and down to 2 billion for positive and negative, where as long can have much bigger value for integar as it uses 64 bits instead. Such as the example of the year 2038 problem, of which computers since 1970 and prior uses 32 bits to keep track of time by counting how many seconds passed from 1970 January will overflow in 2038 January and mistaking that as December 1901.
## Truncation of a real decimal value to integar could happen if you assign int but not float data type to a variable that could be so.
## Flowing point imprecision may happen by when asking computer to output an infinitely repeating result like 1/3, which effect can be reduced by using more bits decimal data type like double instead of float.
## Machine codes is the only codes that computer understand, which is binary of 0s and 1s, and source code is what human writes, like C and python. That require translation by a compiler, such as VS code. There are two place user communicate with the compiler, GUI and CLI (Command line interface), which first is to interract with graphics, is to type in interface/terminal.

## C
### Basic setup
#### To clear the stuffs in terminal, type in terminal, clear, though this doesn't affect functionally.
#### To start a new file, type in terminal, code (programname).c, it is recommended to use lowercase and no space for the name.
#### To compile, translate the source code to runable machine code you type the following in terminal, make (programname), with no need of typing in the format .c. No output should been seen if done correctly. You need to recompile the program everytime after you made a change in order for a change in output.
#### To run the code you use, ./(programname), ./ stands for go into the current folder to find and run the following program, as the make command already creates and stores the program in folder.
#### To end an expression in c you type ;.
#### To gain access to many of the commands, including those comes with c like print, you need to include or import headerfile, that contain different libraries, that are codes pre written for different commands. Such as include <stdio.h>, for standard input and output libraries, like printf and get_string.
#### To search up the function of code and the headerfile you need, you search up manual of c in internet, or to visit cs50's own website.
#### Include all your main codes, that aren't functions in, int main(void){}.

### Common commands in C
#### To declare a variable, use (data type) (variable name) = (value)
#### To reject any later change of value of a variable add const before the declaration. 
#### To output message, use printf ("(text)"), it is recommended to add an escape sequence of \n before " to get onto next line after output. 
#### Escape sequences are sequences that not read directly in string qualifiers, but served for specific functions, or to replace characters that cannot be output directly. \r for return to start of string, \" to display " instead of declaring the start or end of string, same for \' and \\. To include a variable in output, you include a format specifier in text, which is a placeholder of which you include the variable outside the text later by a comma. Such as printf ("Hello, %s",name), which name is the string variable, %s is the placeholder that specify the format of your original variable as a string.
#### To get a text input, use string (variable) = get_string("(text)");, which stores the string input to (variable). This code automatically uses the printf command as well to output (text). You always need to specify the type of data when declaring it, such as int a = 1;.
#### When you declare a varaibale though an input, and the user input format doesn't match the specifyed format, it will loop again, such as char a = get_char(type: );, and user typed multiple characters. It will show the message and ask for input again.
#### For conditionals follow the structure:
#### if (condition)
#### {
#### (4 spaces for convention) command
#### }
#### While loops follow the same structure as well, for loops also but in the conditions you do (declare the starting point of the variable; ending condition; value increase after each loop), both loops you can use the command continue and break to bring back to start of loop or escape it in cases like while (true). Remember, the condition part is that the loop only runs if inside is true.
#### You can also use the do command to perform lines of codes once first, then to check conditions to see if repeat. It follows the same structure as well, except the while conditions part are mentioned at the end after }.
#### For functions that takes no input and generate no output, but with side effect, use void (function_name)(void), then next line {(commands)}, if you want to take in or output a value, change both void to a data type, but add variable name after the second void. Functions needs to be declared at first before using them, with except using a prototype, by doing the same without {} and end with ;. Then you can place your functions the place after it been used without triggering error.
#### None of the variables declared inside can pass out of the loop, and none of the variable declared outside can pass in of the functions unless specify as one of arugment, known as scope.

## Linux
### An OS that is highly perfermance for servers and clouds. Tends to be CLI, vs code uses it in terminal for navigating through different files.

### Common commands in Linux
### cd, change into directory/folder.
### cp, copy
### ls, list everything in current directory
### mkdir,  create a new directory
### mv, to move or to rename, by file then destination with /, or file then new file name
### rm, remove file
### rmdir, remove directory

## Reflections:
### Why we put int in front of main(void){}?
#### main is also a function, the return value of int indicates whether it has finished successfully. Not using boolean as different numbers that return can help indicates the problem it encounters.
### Can we alter the reaction of if user typed string in get_int, of not just reask but custom reply?
#### No, because get_int is a custom library made by cs50 for the designed projects.

## Projects
### 1. hello.c
#### A simple program that takes input and reply with an the output of it using printf.
### 2. mario.c
#### A program that generates custom set ranges of height to generate blocks. Utilised for loop and check of input range, format.
### 3. credit.c
#### A program to check the type of cerdit cards it is and if it is in valid format, combined with Luhn Algorithm to spot human typing mistakes. Struggled with, and eventually learnt that the when referring to the index of a character in a string, unlike python, c treats them as a long chain of characters and represented with a numerical ASCII value instead, therefore need to use - '0' to correctly remap it to its character.
