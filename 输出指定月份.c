#include<stdio.h>
int main(void)
{
	char *month[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
	int num;
	scanf("%d",&num);
	printf("%s",month[num-1]);
	return 0;
 } 
