#include <stdio.h>

int main() {

int i=5;

printf("%d\n", i);
printf("%d\n", i++);
printf("%d\n\n", i);

i=5;

printf("%d\n", i);
printf("%d\n", ++i);
printf("%d\n\n", i);

i=5;

printf("%d\n", i);
printf("%d\n", i=i+2);
printf("%d\n\n", i);

i=5;

printf("%d\n", i);
printf("%d\n", i=2+i);
printf("%d\n\n", i);

return 0;


}
