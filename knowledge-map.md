# Week-0
## Topics covered:
### 1. Base system logic 
####  -Binary
####  -Urnry + decimal 
### 2. Representations
####  -Characters (ASCII + Unicode)
####  -Colours (RGB)
### 3. Algorithm
#### - Input/Process/Output
#### - Functions/loops
#### - Levels of programming lanuages

# Week-1
## Topics covered:
### 1. Programming Foundations (C)
#### - Source code, compilation and machine code
#### - How C programs are structured and executed
#### - Variables, data types and memory limitations
#### - Functions, scope and return values
### 2. Problem Solving and Program Design
#### - Correctness, design and style
#### - Input → Process → Output model
#### - Conditionals and loops
#### - Creating reusable functions
#### - Debugging and improving code
### 3. Data Representation and Errors
#### - Integer overflow and limitations of data types
#### - Truncation when converting data types
#### - Floating-point imprecision
#### - ASCII representation of characters
### 4. Linux and Development Environment
#### - Command line interface (CLI)
#### - Navigating files and directories
#### - Basic Linux commands
#### - Using CS50's cloud development environment
## Projects:
### 1. Hello
#### - First C program using input and output
### 2. Mario
#### - Created a program using loops, conditionals and input validation to generate a pyramid pattern
### 3. Credit
#### - Implemented Luhn Algorithm to validate credit card numbers
#### - Applied character indexing and ASCII conversion in C
#### - Practised algorithm design and debugging

# Week 2
## Topics covered:
### 1. Debugging and Testing
#### - Types of programming errors (syntax and logical errors)
#### - Using `printf` for debugging
#### - Using `debug50` and breakpoints in VS Code
#### - Garbage values and uninitialised variables
### 2. Compilation and Build Process
#### - Using `clang` and `make`
#### - Compiler command-line arguments (`-o`, `-lcs50`)
#### - Four stages of compilation
#### - Header files and linking libraries
#### - Assembly language, binary code and machine code
#### - Reverse engineering and code obfuscation
### 3. Arrays and Strings
#### - Memory allocation and data type sizes
#### - Array declaration, indexing and initialisation
#### - Strings as character arrays
#### - ASCII representation of characters
#### - Null terminator (`\0`) and string length
#### - Character manipulation using `ctype.h`
### 4. Command Line Arguments
#### - Structure of the `main()` function
#### - Using `argc` and `argv`
#### - Accessing user input from the terminal
#### - Program self-reference with `argv[0]`
### 5. Cryptography
#### - Encryption and decryption concepts
#### - Substitution cipher fundamentals
## Projects:
### 1. Scrabble
#### - Calculated word scores using letter values
#### - Applied arrays and string indexing for text processing
#### - Used functions from `ctype.h` for character conversion
### 2. Readability
#### - Implemented the Coleman–Liau Index
#### - Used floating-point arithmetic for accurate calculations
#### - Practised debugging with `debug50`
### 3. Substitution
#### - Implemented a substitution cipher using a user-provided key
#### - Applied command-line arguments (`argc` and `argv`)
#### - Worked with arrays, strings and ASCII manipulation
#### - Learnt about stack memory and returning local variables
#### - Debugged null terminator (`\0`) and buffer overflow errors

# Week 3
## Topics covered:
### 1. Algorithm Analysis
#### - Big O, Big Ω and Big Θ notation
#### - Time and space complexity
#### - Algorithm efficiency and trade-offs
#### - Worst-case, best-case and average performance
### 2. Recursion
#### - Recursive functions and base cases
#### - Breaking large problems into smaller subproblems
#### - Recursion versus iteration
#### - Stack memory and recursive function calls
### 3. Searching Algorithms
#### - Linear search
#### - Binary search
#### - Requirements and efficiency of different search algorithms
### 4. Sorting Algorithms
#### - Selection sort
#### - Bubble sort
#### - Merge sort
#### - Comparing sorting algorithm performance
### 5. Data Structures and String Comparison
#### - Using `strcmp()` from `string.h`
#### - Creating custom data types with `struct`
#### - Using `typedef`
#### - Dot notation for accessing structure members
## Projects:
### 1. Plurality
#### - Implemented a plurality voting system
#### - Applied selection sort to rank candidates by votes
#### - Practised array indexing and loop boundaries
#### - Debugged off-by-one and zero-indexing errors
### 2. Tideman
#### - Implemented the Tideman ranked-choice voting algorithm
#### - Applied graph-based algorithm design
#### - Worked with recursive logic and cycle detection
#### - Strengthened problem-solving and debugging skills through a large-scale project

# Week 4

## Topics covered:
### 1. Memory and Pointers
#### - Hexadecimal representation and memory addresses
#### - Using pointers to store and access memory addresses
#### - Address operator (`&`) and dereferencing (`*`)
#### - Stack memory and function memory frames
#### - Passing variables by value versus passing by reference
#### - Modifying original values through pointers
### 2. Dynamic Memory Allocation
#### - Using `malloc()` and `free()`
#### - Heap memory and persistent memory allocation
#### - Copying data between independent memory locations
#### - Using `sizeof()` for memory size calculation
#### - Memory leaks and freeing allocated memory
#### - Null pointers and invalid memory access
#### - Stack overflow and out-of-memory errors
#### - Using Valgrind to detect memory errors
### 3. Strings and Memory Management
#### - Strings as pointers to characters
#### - Relationship between `string` and `char *`
#### - String comparison using memory addresses versus actual values
#### - Copying strings using `strcpy()`
#### - Read-only strings and pointer limitations
#### - Character access through pointer arithmetic
### 4. User Input and Standard Libraries
#### - Using `stdlib.h` for memory functions
#### - Using `scanf()` for user input
#### - Reading different data types using format specifiers
#### - Handling input through pointers and arrays
### 5. File Input and Output
#### - Opening and closing files with `fopen()` and `fclose()`
#### - File pointers and `FILE` data type
#### - Reading and writing text files
#### - Using `fprintf()` and `fscanf()`
#### - Binary file operations with `fread()` and `fwrite()`
#### - File modes (`r`, `w`, `a`, `rb`, `wb`)
#### - Copying files through binary data manipulation
### 6. Image Processing and Data Structures
#### - Bitmap (`.bmp`) image representation
#### - Pixels and RGB colour values
#### - Manipulating image data through memory
#### - Applying filters through pixel calculations
#### - Using structures to represent complex data
## Projects:
### 1. Volume
#### - Modified `.wav` audio files by manipulating binary data
#### - Used `fread()` and `fwrite()` to copy and edit file contents
#### - Applied buffer memory to transfer data between files
### 2. Filter
#### - Implemented image filters using pixel manipulation
#### - Applied grayscale, reflection, blur and edge detection algorithms
#### - Used nested loops and boundary checking for image processing
#### - Practised working with structures and RGB values
#### - Improved algorithm design and optimisation through debugging
### 3. Recover
#### - Recovered deleted JPEG images from raw memory card data
#### - Used binary file reading and writing
#### - Applied memory block analysis using 512-byte chunks
#### - Practised debugging complex program logic with memory tools
