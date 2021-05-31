// c program to print string one by one characters using loop.
#include <stdio.h>
int main()
{
    char text[100];
    int i;
    printf("Enter any string : ");
    gets(text);
    printf("Entered string is : ");
    for (i=0;text[i]!='\0'; i++)
    {
      printf("%c", text[i]);
    }
    printf("\n");
    return 0;
}
