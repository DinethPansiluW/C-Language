#include <stdio.h>

int main() {

int num, dov;
char *type;

printf("\nEnter any Number : ");
scanf("%d", &num); 

dov=num%2;

type = (dov==1) ? "ODD" :
		  "EVEN" ;
		  
printf("%d is %s Number\n\n", num, type);


return 0;

}
