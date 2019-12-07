#include <stdio.h>
#define MAX 1
void calc(int num1, int num2)
{
	char modul[] = "%";
	float res;
	printf("\nAddition [+] : %d", num1 + num2);
	printf("\nDecrease [-] : %d", num1 - num2);
	printf("\nMultiplication [*] : %d", num1 * num2);
	printf("\nDivision [/] : %.2f", res = num1 / num2);
	printf("\nModulus [%s] : %d", modul, num1 % num2);
}

void inputs()
{
	int a,b;
	printf("input number > ");
	scanf("%i", &a);
	printf("input number > ");
	scanf("%i", &b);
	calc(a, b);
}

int main()
{
	char ask[MAX];
	inputs();
	printf("\n\ndid you want again [y] > ");
	scanf("%s", ask);
	if (strcmp("y", ask) == 0)
	{
		system("clear");
		main();
	}
	else
	{
		system("clear");
		return 0;
	}
}
