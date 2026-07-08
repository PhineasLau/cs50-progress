# Week 2
## Use debug50 as a command tool in VS code to help debugging.

## Cryptography
### Encrypting data in a reversible way for secured communication.

## Debugging
### Bug represent the errors in codes, as the famous incident found a moth inside the computer that causes error, hence the term debugging appeared as to remove the error. 
### Syntax errors stop the code to be compiled. To find syntax error, the terminal will display the error messsage and line location of that error when you are trying to compile it. 
### Logical errors doesn't stop code from running but leads to the unexpected result. Logical errors can be helped to find location of the it by adding printf to visualise the change of variables, or to use debug50 tool to run code line by line, by adding red dot, break point of to where to pause in program, by clicking the left of a line, then type in terminal debug ./(programname), you will be able to track each time the change of the variable's value. 
### Notice that variable have default values before running the code to change it. Known as garbage values, but the default value of the variable may came from another program that uses the same variable used to store sensitive information. So this could be dangerous as it can be easily revealed by the run of debugger.

## Compilation
### For c we use the compiler called clang, while the make command we type in terminal automate the process of calling it out and compile the code, and to generate a new file ready to be run. The actual process of command that being ran would be, clang (programname).c, then generates a file called a.out to be ran, however there are different command line arugements as well, that automatically adjusted by make command, such as if used some libraries like the cs50 one, you need to add -lcs50 at the end so you tell where to link the functions to its headerfiles. If you want the compiled file to be named differently, add -o (name) between clang and (programname).c.

### There are four steps of compilation, as the modern term now combined them to one compiling. However, it is still important to break them down to specific steps so we are allowed to design different assembly codes, as each specific to a type of CPUs invented by different companies, yet still share a lanuage of c.

#### 1. Preprocessing, read the headerfile, as to unpack their contents of the prototype of the functions that would be used, such as stdio.h includes the prototype of printf. As we use headerfile to save time to avoid rewriting codes other wrote for us. 
#### 2. Compiling, take the preprocessed, unpacked full code, and convert them to lower level, as assembly code. That CPUs can understand
#### 3. Assembling, take the compiled, assembly code, and convert them to binary codes of 0s and 1s.
#### 4. Linking, take the assembled code, and link it to the assembled headerfiles codes, by combining all binary code together to a larger one. As preprocessing only includes the format and prototype, while the actual definitions are in server's hardware.

### People could reverse the process of compiling as to recompile the binary codes to source codes, this can be done by recognising the pattern of 0s and 1s by knowing the layout and the CPU they used. This reverse engineering can be a threat to know how a program was designed to achieve its purpose, but takes extremely long time and some cannot be perfectly recreated even if functionally so as codes like for and while loop are same in binary as a programming perference.

## Arrays
### Different types of data takes up different space of memory, such as bool and char using 1 byte, int and float for 4 byte, long and double for 8 byte, and string is depended on the length of it.
### We can treat our grids of memory into chunks of arrays to store multiple variables back to back. This ensure that multiple variable would be referable by the same name.
### In c, the syntax of creating a new array would be, (data type of variables in the array) (array name)[(amount of variables)], this way the computer would automatically sort out enough memory space specific to the amount and data type of variables. Such as if you type, int scores[3];, computer would sort out 12 byte of space for 3 integar values. 
### To input a variable to an array type in, (array name)[posistion] = (value);.
### You can declare an array and input values in it in one line by (data type) (array name)[] = {(value1), (value2), (value3)...}, in this way you don't need to fill in the size of array as it would automatically detect the amount of elements in there.
### String is actually just an array of characters, and each characters takes 1 byte of memory as a letter, but also holds an ACSII value. Therefore you can output the ACSII value of each character in a string by using printf and %i and referring the posistions of the characters in a string. String is declared with "", which so it adds an extra byte of memory to not just the variables but the null value, or \0. This ensure that the computer knows where the string ends. Therefore we can count the length of the string by using a while loop to count until it meets a character as '\0'. We could also do the same as it is basically the strlen function included in string.h. 
