#include<stdio.h>
int main(void)
{
	int i,j,temp;
	int a[8]={7,8,4,5,7,5,8,9};
	for(i=0;i<8;i++){
		for(j=0;j<7;j++){
			if(a[j+1]<a[j]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		//	printf("%d ",a[j]);
		}
		//printf("\n");
	}
	
	for(i=0;i<8;i++){
		printf("%d ",a[i]);
	}

	return 0;
}
