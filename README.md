# Esoteric Programming

The concept of Esoteric Programming Languages seems incredibly manual and analog.
Like a digital version of early computers.

This project is to try and make Esoteric Programming easy to understand and fun to use

The way the while loop works is it reads the active number in the pointer and loops that many times
Could make super efficent programmes using maths and 2 while loops, do 8's is 64 etc

Because this is interpretted, i could make an array of what needs to be ran
have a bool that is set to true so rather than completing the operation it is pushed to an array of the operations
it goes true when it finds the opening bracket and goes false when it finds the closing bracket

| Esoteric | C                        |
| -------- | ------------------------ |
| Init     | char array\[30000] = {0}; |
| Init     | char \*ptr = array;       |
| >        | ++ptr;                   |
| <        | --ptr;                   |
| +        | ++\*ptr;                  |
| -        | --\*ptr;                  |
| .        | putchar(\*ptr);           |
| ,        | \*ptr = getchar();        |
| \[        | while (\*ptr) {           |
| ]        | }                        |
