// this routine demonstrates the practical use of the most simple input and output characters in the c library:
// getchar() and putchar()

/*
Given getchar and putchar , you can write a surprising amount of useful code without
knowing anything more about input and output. The simplest example is a program that
copies its input to its output one character at a time:
read a character
while (charater is not end-of-file indicator)
output the character just read
read a character
Converting this into C gives:
*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
    int c;

    c = getchar();
    while (c != EOF)
    {
        putchar(c);
        c = getchar();
    }

    
    /*
    c = getchar();
is an expression and has a value, which is the value of the left hand side after the assignment.
This means that a assignment can appear as part of a larger expression. If the assignment of a
character to c is put inside the test part of a while loop, the copy program can be written this
way:
    */
    
    while ((c = getchar()) != EOF)
        putchar(c);
    
    
    
    
    
}




























