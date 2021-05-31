// c program to convert string in upper case and lower case.
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
    if(text[i]>='a' && text[i]<='z')
    text[i]=text[i] - 0x20;
    }
   printf("String in upper case is: %s\n",text);
   for(i=0;text[i]!='\0'; i++)
   {
   if(text[i]>='A' && text[i]<='Z')
   text[i]=text[i]+ 0x20;
   }
   printf("String in lower case is: %s\n",text);
    return 0;
}
