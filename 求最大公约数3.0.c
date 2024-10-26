#include<stdio.h>
int main(void)
{
	int m,n,r;
	scanf("%d %d",&m,&n);
    int d=m*n;
    
    while(n!=0){
    	r=m%n;
		m=n;
    	n=r;
    	
	}
	printf("%d\n",m);
	printf("%d\n",d/m);
	return 0;
}
