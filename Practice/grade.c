#include <stdio.h>

int main() {

int mark;
char grade;

printf("Enter your Mark: ");
scanf("%d",&mark);

grade = (mark>69)? 'A' :
	(mark>49)? 'B' :
	(mark>34)? 'C' :
	(mark>24)? 'D' :
	'E' ;
	
printf("Your grade is %c\n", grade);
return 0;   

}
