#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char s[100];
    printf("Enter: ");
    fgets(s,100,stdin);

    for(int i=0;s[i];i++){
        if(isalpha(s[i])||s[i]=='_'){
            while(isalnum(s[i])||s[i]=='_') putchar(s[i++]);
            printf(" -> Identifier\n");
            i--;
        }
        else if(isdigit(s[i])){
            while(isdigit(s[i])) putchar(s[i++]);
            printf(" -> Constant\n");
            i--;
        }
        else if(strchr("+-*/=%",s[i]))
            printf("%c -> Operator\n",s[i]);
    }
    return 0;
}
