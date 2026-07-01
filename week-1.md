# Week 1
## Use a web version of vs code with all pre configured settings for the projects. Link: cs50.dev 
## Use cs50's own headerfile with the libraries, and their manual needed for coding projects. cs50.h and manual.cs50.io.
## Use cs50's check50, design50 and style50 in its vs code studio for the projects.

## Correctness vs Design vs Style
### First is whether the code can solve the problem it supposed to.
### Second is whether to do it efficiently.
### Third is whether it is easy to read, consistant for other humans to debug.

## You could overflow a variable if you assign too high value to it, as int can only have up to around 4 billion different values, so up and down to 2 billion for positive and negative, where as long [...]
## Truncation of a real decimal value to integar could happen if you assign int but not float data type to a variable that could be so.
## Flowing point imprecision may happen by when asking computer to output an infinitely repeating result like 1/3, which effect can be reduced by using more bits decimal data type like double instead [...]
## Machine codes is the only codes that computer understand, which is binary of 0s and 1s, and source code is what human writes, like C and python. That require translation by a compiler, such as VS c[...]

## C
### Basic setup
#### To clear the stuffs in terminal, type in terminal, clear, though this doesn't affect functionally.
#### To start a new file, type in terminal, code "`<programname>.c`", it is recommended to use lowercase and no space for the name.
#### To compile, translate the source code to runable machine code you type the following in terminal, make "`<programname>`", with no need of typing in the format .c. No output should been seen if done[...]
#### To run the code you use, `./<programname>`, ./ stands for go into the current folder to find and run the following program, as the make command already creates and stores the program in folder.
#### To end an expression in c you type ;.
#### To gain access to many of the commands, including those comes with c like print, you need to include or import headerfile, that contain different libraries, that are codes pre written for differe[...]
#### To search up the function of code and the headerfile you need, you search up manual of c in internet, or to visit cs50's own website.
#### Include all your main codes, that aren't functions in, int main(void){}.

### Common commands in C
#### To declare a variable, use `<data type> <variable name> = <value>`
#### To reject any later change of value of a variable add const before the declaration. 
#### To output message, use `printf ("<text>")`, it is recommended to add an escape sequence of \n before " to get onto next line after output. 
#### Escape sequences are sequences that not read directly in string qualifiers, but served for specific functions, or to replace characters that cannot be output directly. \r for return to start of s[...]
#### To get a text input, use `string <variable> = get_string("<text>");`, which stores the string input to `<variable>`. This code automatically uses the printf command as well to output `<text>`. You alwa[...]
#### When you declare a varaibale though an input, and the user input format doesn't match the specifyed format, it will loop again, such as `char a = get_char(type: );`, and user typed multiple charact[...]
#### For conditionals follow the structure:
#### if (condition)
#### {
#### (4 spaces for convention) command
#### }
#### While loops follow the same structure as well, for loops also but in the conditions you do (declare the starting point of the variable; ending condition; value increase after each loop), both loo[...]
#### You can also use the do command to perform lines of codes once first, then to check conditions to see if repeat. It follows the same structure as well, except the while conditions part are mentio[...]
#### For functions that takes no input and generate no output, but with side effect, use `void <function_name>(void)`, then next line `{<commands>}`, if you want to take in or output a value, change void [...]
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

## Questions that haven't answered yet:
### Why we put int in front of main(void){}.
