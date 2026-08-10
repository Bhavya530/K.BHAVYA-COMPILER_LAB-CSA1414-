#include <stdio.h>

int main() {
    char c;
    int s=0,n=0;

    printf("Enter text (Ctrl+Z then Enter):\n");

    while((c=getchar())!=EOF){
        if(c==' ') s++;
        if(c=='\n') n++;
    }

    printf("Spaces = %d\n",s);
    printf("New Lines = %d",n);

    return 0;
}
