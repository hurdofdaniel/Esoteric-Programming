# Esoteric Programming

By Daniel Hurd - HurdOfDaniel

The concept of Esoteric Programming Languages seems incredibly manual and analog.
Like a digital version of early computers.

This project is to try and make Esoteric Programming easy to understand and fun to use.
There won't be as many functions, right now, as other Esoteric Languages

This is just a somewhat beginner project as I don't know much about C.

I am going to try and build a calculator, a basic one.
This shouldn't be too difficult but will take some work

| Esoteric | C                        |
| -------- | ------------------------ |
| Init     | char array\[32768] = {0}; |
| Init     | char \*ptr = array;       |
| >        | ++ptr;                   |
| <        | --ptr;                   |
| +        | ++\*ptr;                  |
| -        | --\*ptr;                  |
| .        | putchar(\*ptr);           |
| ,        | \*ptr = getchar();        |
