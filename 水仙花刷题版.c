#include<stdio.h>
#include<math.h>
int p(int a,int b);
int main(void)
{
	int mark,num,sum,t;
	int i,j,n;
	scanf("%d",&n);
	mark=1;
	for(i=0;i<n;i++){
		mark*=10;
	} 
	for(i=mark/10;i<mark;i++){
		sum=0;
		//int t=i;
		for(t=i;t>0;t/=10){
			j=t%10;
			//t/=10;
			sum+=p(j,n);
		}
		if(sum==i)printf("%d\n",i);
	}
	return 0;
}
int p(int a,int b)====================================解决刷题的超出限制时间的问题
{
	int i;
	int k=1;
	for(i=1;i<=b;i++){
		k=k*a;
	}
	return k;
}

