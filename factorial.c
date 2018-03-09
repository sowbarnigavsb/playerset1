#include <stdio.h>

int main(void) {
	int num,fact=1,i;
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	printf("%d",fact);
	// your code goes here
	return 0;
}
