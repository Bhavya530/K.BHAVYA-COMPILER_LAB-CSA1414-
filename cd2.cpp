#include <stdio.h>
#include <string.h>

int main() {
    char s[100];

    printf("Enter: ");
    fgets(s,100,stdin);

    if(strncmp(s,"//",2)==0)
        printf("Single Line Comment");
    else if(strncmp(s,"/*",2)==0 && strstr(s,"*/"))
        printf("Multi Line Comment");
    else
        printf("Not a Comment");

    return 0;
}
