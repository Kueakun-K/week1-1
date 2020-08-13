#include<stdio.h>
#define pi 3.14
int main() {
	int x;
	float a, c;
	scanf_s("%d", &x);
	if (x > 0) {
		a = pi * x * x;
		c = 2 * pi * x;
		printf("Area = %.2f\n", a);
		printf("Circumference = %.2f", c);
	}
	else
		printf("Error");
	return 0;
}