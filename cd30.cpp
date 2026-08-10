#include<stdio.h>

int main()
{
char s[100];
int i,c=0;

gets(s);

for(i=0;s[i];i++)
{
char ch=s[i];

if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
{
if(!(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
     ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'))
c++;
}
}

printf("Consonants=%d",c);
}
