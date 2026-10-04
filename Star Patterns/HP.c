#include<stdio.h>

int main() {

	int lines;
	
	
	do {
		printf("\nEnter No of Lines(ODD Number): ");
		scanf("%d", &lines);
	} while (lines%2!=1);
	
	printf("\n");
	
	int lineNo=1,  linesX=(lines-1)/2;
		
	for(int i=0; i< (lines-1)/2; i++) {
	
		for(int j=1; j< lineNo ; j++ ) {
		
			printf(" ");
		
		}
		
	
		for(int k=0; k<linesX+1; k++){
		
			printf("* ");
		
		}
		
		printf("\n");
		
		lineNo++;
		linesX--;
	
	}
	
	
	linesX = 1;
	
	for (int i=0; i< (lines-1)/2+1; i++) {
	
	
		for (int k=1; k <lineNo; k++ ) {
			
			printf(" ");	
			
		}
	
		for(int j=0; j < linesX; j++){
		
			printf("* ");
		
		}
		
		printf("\n");
		
		lineNo--;
		linesX++;
	
	}
	
	printf("\n");

	return 0;
}
