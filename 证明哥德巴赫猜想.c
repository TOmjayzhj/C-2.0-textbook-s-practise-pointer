#include<stdio.h>
int prime(int i)
{
	int j;
	for(j=2;j<=i/2;j++){
		if(i%j==0){
			return 0;
			break;
		}	
	}
	return 1;
}
void ss(int n)
{
	int i;
	for(i=3;i<=n/2;i++){
		if(prime(i)==1&&prime(n-i)==1){
			printf("%d=%d+%d ",n,i,n-i);
			break;
		}
	}
}
int main(void)
{
	int i;
	int count=0;
	for(i=6;i<=100;i=i+2){
		ss(i);
		count++;
		if(count%5==0)printf("\n");
	}
    return 0;
}
