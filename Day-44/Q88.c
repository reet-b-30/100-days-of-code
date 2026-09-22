#include<stdio.h>

int main()
{
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]==' ')
        {
            str[i]='-';
        }
    }

    printf("String after replacing spaces: %s", str);

    return 0;
}
