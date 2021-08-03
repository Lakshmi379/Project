#include<stdio.h>
main()
{
	int a=5,b=10;
	printf("Before swapping the numbers: a=%d b=%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swapping the numbers: a=%d b=%d",a,b);
	return 0;
}

