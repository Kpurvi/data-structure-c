#include<stdio.h>
#include<string.h>
void main(){
char s[200];
int i,n;
n=strlen(s);
printf("enter string:");
gets(s);
printf("reversed string is :");
for(i=n-1;i>=0;i--){
printf("%c",s[i]);
}
}