#include<stdio.h>
#include<string.h>
void main(){
char s[200];
int i,len=0;
printf("enter string:");
gets(s);
for(i=0;s[i]!='\0';i++)
len++;
printf("length of string is %d",len);
return ;
}