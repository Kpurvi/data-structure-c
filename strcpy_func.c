#include<stdio.h>
#include<string.h>
void main(){
char s1[200],s2[200];
printf("enter string:");
gets(s1);
strcpy(s2,s1);
printf("copied string is %s",s2);
return ;
}