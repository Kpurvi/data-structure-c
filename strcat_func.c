#include<stdio.h>
#include<string.h>
void main(){
char s1[200],s2[200];
printf("enter first string:");
gets(s1);
printf("enter second string:");
gets(s2);
strcat(s1,s2);
printf("concatenated string is %s",s1);
return ;
}