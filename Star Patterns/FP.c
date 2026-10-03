#include<stdio.h>

int main(){

	int lines=5;

	printf("\nNo of Lines: ");
	scanf("%d", &lines);
	
	int i=0, linesX=lines, lineNo=1;
	
	while (i!=lines){
	
		int space=0;
	
		while(space<linesX) {
		
			printf(" ");
		
			space++;
		}
		
		linesX--;
		
		int stars=0;
		
		while(stars<lineNo) {
		
			printf("* ");
		
			stars++;
		}
		
		lineNo++;
	
	printf("\n");
	
	i++;
	
	}
	
	printf("\n");

	return 0;
}
