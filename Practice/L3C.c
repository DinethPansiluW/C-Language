#include <stdio.h>

int main() {

int n1, n2, n3, LG;
printf("Enter the three numbers:");
scanf("%d %d %d", &n1, &n2, &n3);

if (n1>n2 && n1>n3) {
	LG=n1;
	} else if (n2>n1 && n2>n3) {
		LG=n2;
		} else {
			LG=n3;
			}
printf("Largest Number is %d\n", LG);

return 0;

}
