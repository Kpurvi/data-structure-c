#include<stdio.h>
#include<string.h>
void main(){
char s1[200],s2[200];
int i;
printf("enter string:");
gets(s1);
for(i=0;s1[i]!='\0';i++){
s2[i]=s1[i];
}
s2[i]='\0';
printf("copied string is %s",s2);
return ;
}