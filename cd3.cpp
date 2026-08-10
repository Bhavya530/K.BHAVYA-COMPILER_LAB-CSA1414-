#include <stdio.h>
int main() {
    char c;
    printf("Enter text (Ctrl+Z then Enter to stop):\n");
    while((c=getchar())!=EOF){
        if(c!=' ' && c!='\t' && c!='\n')
            putchar(c);
    }

    return 0;
}
