# Week 4
## Hexadecimal
### Known as base 16, using A to F to represent number above 9, so A = 10 and F = 15, giving 16 different digits including 0s to give 16^2, 256 different values by different patterns. The way it counts is by placing two digits as one unit, the first is the 16's place, the second is the 1's place, so to translate it to decimal, times the first digit by 16 and add the second. Such as 01 = 0+1, 10 = 16+1, 20 = 16*2 + 0, 1A = 16+10, FF = 16*15 +15 etc. This was invented as a more convenient way to represent values as now 1 digit in base 16 can represent 4 bits, such as 1111 = 15 = F, and so 2 digits in base 16 can represent all the possible different values of a byte. 
### In memory locations for example, to avoid problems of mistaking one value as another due to not knowing what base system you are working on, such as 10 can mean 16 in base 16 but it could also mean ten, we add 0x in front of hexadecimal numbers, such as 0x1 and 0x10.

## Memory
### To get the memory address of a variable of where it has been stored in computer, use &(variable), and as they contain letters for base 16, they are as the data type of pointers, or p/* in short, so you can display the location of a variable in memory by printf("%p\n",&(variable));. This should return a long combination of letters and number, which the actual numberical address without the use of base 16 would be much larger in length.
### Pointers
#### To declare a pointer, you need two data types, one to show it is a pointer, and another to show what data type is it pointing to. For example to declare a pointer which to store the address of a integar variable, we use int* (variable1) = &(variable2), int means it is storing the pointer of an integar variable, * means it is a pointer, variable1 is the pointer name, & gets the address of variable2. So then later you can simply refer to the pointer name without the name of adding the * nor & before the pointer/variable names.
#### You can also dereference a pointer by reusing *, for example we can printf("%i\n",*p);, which will display the not the address, but the value inside that pointer/address.

## Strings
### Strings are in fact just pointers to characters, so string (variable); is equivalent to char* (variable);, to create a pointer named (variable) that points to characters, while when you assign the pointer to a sequence of characters it stores the address of the first character, as no need to store every of them as all strings should end with null, \0. For example char* string = "Hi";, then string will be the pointer, storing the address to H, and when you printf("%s\n", string);, it will display the full "Hi" by looping until \0. 
#### If we use %c instead then it will only print out the first character H. We can then add *(string+1) to print out the next character, as string is an address, and * means go to address to get the value. Normally we shouldn't use *string to print full sequences of characters as this means to go to that one address and only get a single character. The %s and without * before string to automatically print all characters before \0 is a special function to printf.



