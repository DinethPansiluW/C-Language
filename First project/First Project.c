#include <stdio.h>

int main() {
    char name[50];
    
    printf("Enter your name: ");
    scanf("%s", name);
    
    printf("Hello %s, C is running successfully!\n", name);
    return 0;
}