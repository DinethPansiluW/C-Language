#include<stdio.h>

int main() {

	int lines;
	
	do {
		printf("\nEnter the ODD Number: ");
		scanf("%d", &lines);
		
	} while(lines%2==0);
	
	int linesX=lines, space=(lines-1)/2, lineNo=1;
	
	printf("\n");
	
	for(int i=1; i<=(lines-1)/2; i++) {
	
		for(int k=0; k<space; k++){
		
			printf(" ");
		
		}
		
		for(int stars=1; stars<=lineNo; stars++){
			printf("* ");
		}
		
	
		printf("\n");	
		
		lineNo++;
		space--;
		
	}
	
	space=0;
	
	for(int i=1; i<=(lines-1)/2+1; i++) {
	
		for(int k=0; k<space; k++) {
		
			printf(" ");
			
		}
		
		for(int stars=1; stars<=lineNo; stars++){
		
			printf("* ");
		
		}
	
		printf("\n");
		
		lineNo--;
		space++;
	
	}
	

	printf("\n");

	return 0;
}
