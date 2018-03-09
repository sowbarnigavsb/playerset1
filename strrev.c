#include <stdio.h>

int main(void) {
	char str1[100],str2[100];
	scanf("%s",str1);
	int i,j,length;
	for(i=0;str1[i]!='\0';i++)
	length++;
	for(i=0,j=length-1;str1[i]!='\0';i++,j--)
	str2[j]=str1[i];
	printf("%s\n",str2);
	// your code goes here
	return 0;
}
