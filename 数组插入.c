#include<stdio.h>                                            
int main(void)
{
	int i,n,j;
	int count=0;
	int a[10]={1,4,7,8,9};
	printf("1,4,7,8,9\n");
	scanf("%d",&n);
	for(i=0;i<5;i++){
		if(n<=a[i]){	
			break;
		}
		count++;
	}
	
	for(j=5;j>=count;j--){
		a[j+1]=a[j];
	}
	a[count]=n;
	for(i=0;i<6;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
++++++++++++++++++++++++++++++++++++++++
数组删除
#include<stdio.h>
int main(void)
{
	int i,n,j;
	int count=0;
	int a[10]={1,4,7,8,9};
	printf("1,4,7,8,9\n");
	scanf("%d",&n);
	for(i=0;i<5;i++){
		if(n<=a[i]){	
			break;
		}
		count++;
	}
	a[count]=a[count+1];
	for(j=count;j<=4;j++){
		a[j]=a[j+1];
	}
	
	for(i=0;i<4;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
