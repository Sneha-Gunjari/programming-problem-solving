/* programm to Print the  natural numbers from 1 to n(read n through scanf)*/

#include<stdio.h>
int main()
{
	int num = 1,n;
	printf("Enter end number:\n");
	scanf("%d",&n);
	while(num<=n)
	{
		printf("%4d",num);
		num += 1;
	}
	return 0;
	
}

