#include <stdio.h>
int main() {
	float balance;
	int age;
	printf("");
	scanf("%f", &balance);
	printf("");
	scanf("%d", &age);

	if (balance > 5000 && age >= 60) {
		balance = balance+(balance * 2/100);
	} else if (balance <= 5000 && age >= 40 && age < 60) {
		balance = balance+(balance * 1/100);
	} else if (balance > 5000 && age >= 25 && age < 40) {
		balance = balance+(balance * 0.5/100);
	}
	printf("%.1f\n",balance);
	return 0;
}


