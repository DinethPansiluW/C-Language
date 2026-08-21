#include <stdio.h> 

int main() {

int m;
char *grade;

printf("Enter your Mark: ");
scanf("%d", &m);

grade=(m>49)? "PASS" : "FAIL";
printf("Your grade is %s\n", grade);

return 0;

}
