#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    int count = 0,i = 0;
    printf("Enter the string :\n");
    scanf("%s",a);
    printf("01111110");
    for(i = 0; a[i]; i++) {
        if(a[i] == '1') {
            count++;
        }
        else {
            count = 0;
        }
        printf("%c",a[i]);
        if(count == 5) {
            printf("0");
            count = 0;
        }
    }
    printf("01111110");
    return 0;
