#include<stdio.h>
int main(void)
{
	int i,j;
	int a[10]={7,4,8,5,7,9,6,2,1,3};
	for(i=0;i<10;i++){
		for(j=i+1;j<10;j++){
			if(a[j]<a[i]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<10;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
