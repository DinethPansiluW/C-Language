#include <stdio.h>

int main() {

int starCount=0;

for(int i=0; i<5; i++) {

	
	for(int stars=0; stars <= starCount; stars++){
		printf("* ");
		}
	
	starCount++;

	printf("\n");

} 

return 0;
}
