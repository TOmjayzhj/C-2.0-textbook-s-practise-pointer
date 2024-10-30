#include<stdio.h>
int main(void)
{
	int a,b,c,i,j,k,num;
	int count=0;
	scanf("%d",&num);
	for(a=num/5;a>=0;a--){
		for(b=(num-5*a)/2;b>=0;b--){
			for(c=num-5*a-2*b;c>=0;c--){
				if(5*a+2*b+c==num){
					if(a+b+c<count||count==0){
					count=a+b+c;
						i=a;
						j=b;
						k=c;
					}
				}
			}
		}
	}
	printf("%d %d %d %d",i,j,k,i+j+k);
	return 0;
}
