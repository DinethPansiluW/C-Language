#include<stdio.h>

int main() {

	int lines;
	
	printf("\nNo of Lines: ");
	scanf("%d", &lines);
	
	printf("\n");
	
	int i = 0, lineNo=1, linesX=lines;
	do { 
		int space=0;
		do{
			printf(" ");
			space++;
			
		} while(space<lineNo);
		
		int stars=0;
		do { 
			printf("* ");
			stars++;
		
		} while(stars<lines);
		
		lineNo++;
		
		printf("\n");
			
		i++;

		
	} while(i<lines);
	
	printf("\n");

	return 0;
}
