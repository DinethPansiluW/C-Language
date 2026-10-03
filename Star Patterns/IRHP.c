#include<stdio.h>

int main() {

	int lines;
	
	printf("\nNumber of Lines: ");
	scanf("%d", &lines);
	
	printf("\n");
	
	int i=0, stars=lines;
	do {
	
		int s=0;
		while(s<stars) {
		
			printf("* ");
		
			s++;
		}
		
		stars--;
		
		
		
	
		printf("\n");
	
		i++;
		
	} while(i<lines);
	
	printf("\n");


	return 0;
}
