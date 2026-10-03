 #include<stdio.h>
 
 int main() {
 
 	int lines;
 	
 	printf("\nEnter No of Lines: ");
 	scanf("%d", &lines);
 	printf("\n");
 	
 	int i, lineNo=1, linesX=lines;
 	
 	while (i<lines) {
 	
 	
 		int space=0;
 		while(space<lineNo) {
 		
 			printf(" ");
 			
 			space++;
 		}
 		
 		
 		int stars=0;
 		while(stars<linesX) {
 			
 			printf("* ");
 			
 			stars++;
 		}
 	
 		printf("\n");
 		
 		lineNo++;
 		linesX--;
 		i++;
 	}
 	
 	printf("\n");
 
 	return 0;
 }
