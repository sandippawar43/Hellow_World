/*
Write a C program to read a file name and a number say N on command line.
if the number is negative it should print first N no. of lines from the file.
if N is positive the it should skip first N lines and print all the remaining file.

eg. If N is -5, it should print first 5 lines. If N is 5 then it should print all line starting from 6th line.
*/


#include<stdio.h>
#include<conio.h>
#include <stdbool.h>

int  main()
{

    FILE *fptr;
    int LineNumber, linecount;

    linecount = 0;
    char fileName[100];
    char ch;
    scanf("%d", &LineNumber);
    scanf("%s", fileName);
    fptr = fopen(fileName, "r");
    if (fptr == NULL)
    {
        printf("Can not open file\n");
        return 0;
    }

    ch = getc(fptr);
    while (ch != EOF)
    {
        if (ch == '\n')
            linecount++;
        if (LineNumber <= 0 && linecount <=abs(LineNumber))
            printf("%c", ch);
        else if (LineNumber >= 0 &&  linecount >= LineNumber)
        {
            printf("%c", ch);
        }
        ch = getc(fptr);
    }
    fclose(fptr);
    return 0;

}
