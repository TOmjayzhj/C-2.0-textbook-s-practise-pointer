#include<stdio.h>
int main(void)
{
	int i;
	int a[80];
	int n;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		a[i] = i;
	}
	i = 1;
	int b=0,j=0;
    while(b<n-1){
    	if(a[i]!=0)j++;
    	if(j==3){
    		b++;
    		a[i]=0;
    		j=0;
		}
		i++;
		if(i==n+1)i=1; 
	};
	for(i=1;i<=n;i++){
		if(a[i]!=0)printf("%d\n",a[i]);
	}
	return 0;
}
