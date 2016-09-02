//vowel
//to check whether character is vowel or not
#include<stdio.h>
#include<conio.h>
void main()
{
char a;
printf("\n Enter any character");
scanf("%c",&a);
if(a='a'||'A'||'e'||'E'||'i'||'I'||'o'||'O'||'u'||'U')
{
printf("\n Entered character is vowel");
}else{
printf("\n Entered character is consonant");
}
}
