#include<stdio.h>
#include<ctype.h>
int main(){
char s[20]; int i=1;
scanf("%s",s);
if(!(isalpha(s[0])||s[0]=='_')) i=0;
while(s[i]&&i) if(!(isalnum(s[i])||s[i]=='_')) i=0; else i++;
printf(i?"Valid Identifier":"Invalid Identifier");
}
