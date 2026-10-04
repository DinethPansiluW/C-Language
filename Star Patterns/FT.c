#include <stdio.h>

int main() {

	int lines;
	
	printf("\nNumber of Lines: ");
	scanf("%d", &lines);
	printf("\n");
	
	
	int number=1, lineNo=1;
	
	for (int i=0; i<lines; i++) {
		
		
		for (int k=0; k<lineNo; k++) {
		
			printf("%03d ", number++);
		
		
		}
		
	
		printf("\n");
		
		lineNo++;
	}
	printf("\n");


	return 0;
}
