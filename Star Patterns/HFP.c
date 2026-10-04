#include<stdio.h>

int main() {

	int lines;
	
	printf("\nEnter the No of Lines: ");
	scanf("%d", &lines);
	printf("\n");
	
	
	int lineNo=1, linesX=lines, mSpace=1;
	
	
	for (int i=0; i<lines; i++) {
	
	
		if (lineNo==lines){
		
			for(int k=0; k<lines; k++) {
			
				printf("* ");
			
				} 
				
			} else if (lineNo==1 ) {
			
				for (int k=1; k<lines; k++) {
				
					printf(" ");
				
				}
			
				printf("*");
				
			
				} else {
				
					for(int k=1; k<linesX; k++) { 
					
						printf(" ");
					}
				
					printf("*");
					
					
					for(int m=0; m<mSpace; m++) {
						
						printf(" ");	
						
					} 
					
					mSpace+=2;
					
					printf("*");
				
					}
		
	
		printf("\n");
		
		linesX--;
		lineNo++;
	
	}
	
	printf("\n");
	

	return 0;
}
