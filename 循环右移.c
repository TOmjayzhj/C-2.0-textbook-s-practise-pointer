#include<stdio.h>
int main(void)
{
	int a[30],m,n,i;
	
	scanf("%d %d",&n,&m);
	for (i = 0;i < n; i++ ){
		scanf("%d",&a[i]);
	}
    int j = m;
	for (i = 0; i < j; i ++ , m ++ ){
    	int t = a[m];
	    a[m] = a[i];
	    a[i] = t;
	}
	
	printf("After move:");
	for (i = 0; i < n; i ++ ){
		printf(" %d",a[i]);
	}
}
