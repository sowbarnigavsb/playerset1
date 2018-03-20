#include <stdio.h>
#include<string.h>
int main(void) {
	char duplicate_str[40],str[40],temp;;
	int l1,l2,k;
	scanf("%s",&str);
	l1=strlen(str);
	for(int j=0,k=1;j<=l1;j++,k++)
	{
	duplicate_str[j]=str[j];
	temp=str[j];
	str[j]=str[k];
	str[k]=temp;
	++j;
	++k;
	}
	l2=strlen(str);
	if(l1==l2)
	printf("%s",str);
	else
	printf("%s%c",str,duplicate_str[l1-1]);
	// your code goes here
	return 0;
}
