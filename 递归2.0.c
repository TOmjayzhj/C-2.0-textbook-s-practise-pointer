#include<stdio.h>
int p(int a);
int main(void)
{
	int n;
	scanf("%d",&n);
	printf("%d",p(n));
	return 0;
}
int p(int a)
{
	int j;
	if(a==1||a==2){
		j=1;
	}else{
		j=p(a-1)+p(a-2);
	}
	return j;
}
