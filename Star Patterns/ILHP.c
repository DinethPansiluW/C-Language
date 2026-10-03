#include<stdio.h>

int main(){

	int lines;
	
	printf("\nEnter the No of Lines: ");
	scanf("%d", &lines);
	printf("\n");
	
	int linesX=lines, lineNo=1;

	
	for(int i=0; i<lines; i++){
	
		for(int space=0; space < (lineNo-1)*2; space++){
		
			printf(" ");
		
		} 
		
		lineNo++;
		
		for (int stars=0; stars<linesX   ; stars++) {
		
			printf("* ");
		
		}
		
		linesX--;
	
		printf("\n");
	
	}
	
	printf("\n");
	

	return 0;

}
