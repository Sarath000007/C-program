#include <stdio.h>

int main(void) {
	int a;
	scanf("%d",&a);
	if (a<=0)
	{
		printf("Invalid");
	}
	else if (a%2==0)
	{
		printf("Even");
	}
	else
	{
		printf("Odd");
	}
	return 0;
}
