#include<stdio.h>

int main() {


	int lines; 
	
	printf("\nEnter No of Lines: ");
	scanf("%d", &lines);
	printf("\n");
	
	int lineNo=1;
	
	
	for(int i=1; i<=lines; i++) {
	
		if(lineNo==1 || lineNo==lines) {
		
			for(int k=0; k<lines; k++) {
			
				printf("* ");
			
			}
		
		} else {
		
			printf("*");
			
			for(int k=0; k<(lines*2)-3; k++) {
			
				printf(" ");
			
			}
			
			printf("*");
		
		}
	
	
		printf("\n");
		
		lineNo++;
	
	}
	
	printf("\n");

	return 0;
}
