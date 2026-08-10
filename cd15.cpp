#include<stdio.h>
int main(){
char c; int ch=0,w=1,l=1;
FILE *fp=fopen("input.txt","r");
while((c=fgetc(fp))!=EOF){
ch++;
if(c==' ')w++;
if(c=='\n')l++;
}
printf("Characters=%d\nWords=%d\nLines=%d",ch,w,l);
fclose(fp);
}
