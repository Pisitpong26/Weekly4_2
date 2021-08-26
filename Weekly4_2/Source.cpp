#include<stdio.h>
int main() {
	int a, b;
	printf("Enter number : ");
	scanf_s("%d", &a);
	while (a != -99) {
		int c = a;
		for (b = 2; b <= a; b++) {
			a% b;
			if (a % b == 0 && b != a) {
				c = a - b;
			}
		}
		if (c == a) {
			printf("%d is prime number\n", a);

		}
		else { printf("%d is not prime number\n", a); }
		c = 0;
		printf("Enter number : ");
		scanf_s("%d", &a);
	}
	return 0;
}