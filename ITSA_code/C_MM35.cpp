#include<stdio.h>
#include<math.h>

int main() {
	int input;
	scanf("%d", &input);
	if (1000 <= input) {
		if ((input % 4 == 0 && input % 100 != 0) || (input % 400 == 0 && input % 3200 != 0)) {
			printf("Bissextile Year\n");
		}
		else {
			printf("Common Year\n");
		}
	}
	return 0;
}