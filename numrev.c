#include <stdio.h>

int main(void) {
	int num,rem;
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		printf("%d",rem);
		num=num/10;
	}
	// your code goes here
	return 0;
}
