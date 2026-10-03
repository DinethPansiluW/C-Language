#include <stdio.h>

int main() {

int line;

printf("\nEnter No of Lines: ");
scanf("%d", &line);
printf("\n");

int lineX = line*2;
int lineNo=1;

for (int i=0; i<line; i++) {

	for(int space=0; space < lineX ; space++){
		printf(" ");
	} 
	
	for(int stars=0; stars < lineNo; stars++){
		printf("* ");
	}  
	
	printf("\n");
	
	lineX-=2;
	lineNo++;
}

printf("\n");

return 0;
}
