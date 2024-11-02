#include<stdio.h>
int main(void)
{
	int n,left=0,right=9,mid,index=-1;
	int a[10]={1,2,9,6,11,12,40,47,49,58};
	//int *q=a;
	printf("%d",*(a+2));
	scanf("%d",&n);
	//int count=10;
	while(left<=right){
		mid=(left+right)/2;
		if(n==a[mid]){
			index=mid;
			break;
		}else if(n<a[mid]){
			right=mid-1;
		}else{
			left=mid+1;
		}
	}
	if(index!=-1){
		printf("%d",index);
	}else{
		printf("No!");
	}
	
	return 0;
}
