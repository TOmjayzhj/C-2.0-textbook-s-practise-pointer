#include<stdio.h>
int main(void)
{
	int a = 2;
	int b = 4;
	a = a^b;
	b = a^b;
	a = a^b;
	printf("a=%d b=%d\n",a,b) ;
	
	a = a+b;
	b = a-b;
	a = a-b;
	printf("a=%d b=%d\n",a,b) ;
	return 0; 
}
