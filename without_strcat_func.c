#include<stdio.h>
#include<string.h>
void main(){
char s1[200],s2[200];
printf("enter first string:");
gets(s1);
printf("enter second string:");
gets(s2);
int i=0,j=0;
while(s1[i]!='\0')
i++;
for(j=0;s2[j]!='\0';i++,j++){
s1[i]=s2[j];
}
s1[i]='\0';
printf("concatenated string is %s",s1);
return ;
}