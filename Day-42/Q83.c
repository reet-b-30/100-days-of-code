#include<stdio.h>

int main()
{
    char str[100];
    int i, vowel=0, consonant=0;

    printf("Enter a string: ");
    scanf("%s", str);

 for(i=0; str[i]!='\0'; i++)
 {
 if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||
 str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
 {
vowel++;
 }
else
 {
  consonant++;
 }
 }

    printf("Vowels=%d, Consonants=%d", vowel, consonant);

    return 0;
}
