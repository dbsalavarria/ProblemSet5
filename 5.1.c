/*Create a file named ProblemSet5.1.c.
Write a function that calculates the length of string. (*Hint: How does a string terminate?)
A function should take string as an argument and return an integer type representing the length of the string.
Do not use the strlen() function included in string.h.
Test and print out the result of your function in the main() function.
Get the input string from the user using the scanf() function before passing it to your function.*/

#include <stdio.h>

#define MAX_SIZE 80

int length(char *p)
{
    int n = 0;
    int flag = 1;

    while (flag)
    {
        if (*p != '\0')
        {
            n++;
            p++;
        }
        else
        {
            flag = 0;
        }
    }
    return n;
}

int main()
{
    char s[MAX_SIZE];
    int n = 0;

    scanf("%s", s); // s es igual a &s[0]
    n = length(s);
    printf("String length is %d\n", n);
}