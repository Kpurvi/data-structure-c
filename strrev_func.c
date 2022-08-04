#include<stdio.h>
#include<string.h>
void main(){
char s[200];
printf("enter string:");
gets(s);
printf("reversed string is %s",strrev(s));
}