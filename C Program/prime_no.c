#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a=1,num,i;
	printf("Enter a no.\n");
	scanf("%d",&num);
	if(num==1)
	{
		printf("Your no. neither prime nor composite!\n");
		exit(0);
	}
	for(i=2;i<num;++i)
	{
		if(num%i==0)
		{
			printf("Your no. is not prime\n");
			a=0;
		}
	}
	if(a==1)
	{
		printf("Your no. is prime!\n");
	}
	return 0;
}
