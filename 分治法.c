#include<stdio.h>
int max(int a[],int m,int n);
int min(int a[],int m,int n);
int main(void)
{
	int i,n,m;
	int a[98];
	m=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	//a[n]='\0';
	printf("max=%d\n",max(a,m,n));
	n=n-1;
	printf("min=%d\n",min(a,m,n));
 } 

int max(int a[],int m,int n)
{
	int k,u,v;
	if(m==n){
		return a[m];
	}
	k=(m+n)/2;
	u=max(a,m,k);
	v=max(a,k+1,n);
	return(u>v)?u:v;
}
int min(int a[],int m,int n)
{
	int k,u,v;
	if(m==n){
		return a[m];
	}
	k=(m+n)/2;
	u=min(a,m,k);
	v=min(a,k+1,n);
	return(u>v)?v:u;
}
