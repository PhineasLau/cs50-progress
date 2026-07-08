# Week 2
## Use debug50 as a command tool to help debugging.

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
