#include <stdio.h>
#include<string.h>
int main(void) {
	char str1[40],str2[40];
	int count1=0;
	scanf("%s%s",str1,str2);
	int l1=strlen(str1);
	int l2=strlen(str2);
	if(l1==l2)
	{
	for(int i=0;i<l1;i++)
	{
		if(str1[i]!=str2[i]);
		count1++;
	}
	
	if(count1==1)
	printf("Yes");
	else
	printf("No");
            }
	return 0;
}
