#include<stdio.h>
#include<string.h>
int main(){
char s[20];
scanf("%s",s);
if(!strcmp(s,"id+id*id"))
printf("Accepted");
else
printf("Rejected");
}
