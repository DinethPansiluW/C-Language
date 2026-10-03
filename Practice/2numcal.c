#include <stdio.h>

int main() {

int num1, num2, option, answer;

printf("Enter Number 1 = ");
scanf("%d", &num1); 

printf("Enter Number 2 = ");
scanf("%d", &num2);

printf("\nAddition(1)\nSubstract(2)\nMultiply(3)\nDivision(4)\n\nSelect Option : ");
scanf("%d",&option);

answer = (option==1)? num1+num2 :
	 (option==2)? num1-num2 :
	 (option==3)? num1*num2 :
	 (option==4)? num1/num2 :
	 0 ;
	 
printf("\nAnswer is = %d\n\n", answer);

return 0;


}
