#include<stdio.h>
#include<string.h>

int main()
{
char s[100];
int i,v=0,c=0;

gets(s);

for(i=0;s[i];i++)
{
if(strchr("AEIOUaeiou",s[i]))
v++;
else if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))
c++;
}

printf("Vowels=%d\n",v);
printf("Consonants=%d\n",c);
}
