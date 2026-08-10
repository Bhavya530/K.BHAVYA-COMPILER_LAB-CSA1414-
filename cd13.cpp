#include<stdio.h>
#include<string.h>
int main(){
char s[20];
scanf("%s",s);
if(!strcmp(s,"aabb"))
printf("Grammar Accepted");
else
printf("Rejected");
}
