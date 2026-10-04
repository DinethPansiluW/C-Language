#include<stdio.h>

int main() {

	int lines;
	
	printf("\nEnter No of Lines: ");
	scanf("%d", &lines);
	printf("\n");
	
	
	int linesX=lines, row=0;
	
	
	for (int i=0; i<lines; i++) {
	
		for(int k=0; k<linesX; k++) {
		
			printf(" ");
		
		}
		
		printf("01 ");
		
		int value=1;
				
		for(int column=0; column<=row-1; column++){
			
			value= value*(row-column)/(column+1);
		
			printf("%02d ", value);
			
		}
		
		row++;
		linesX--;
	
		printf("\n");
	}

	printf("\n");	
	
	return 0;
  
}
