#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int prime(int n)
{
	int i;
	for ( i = 2; i < n/2 + 1; i++ ){
		if ( n % i == 0){
			return 0;
		}
	}
	return 1;
}
int main(void)
{
	int n = 2, count = 0;
	FILE *fp;
	
	if( (fp = fopen("prime.txt","w")) == NULL ){
		printf("File open error!\n");
		exit(0);
	}
	
	while(count < 500){
		if(prime(n) != 0){
			count ++ ;
			fprintf(fp,"%d ",n);
		}
		n ++ ;
	}
	
	if(fclose(fp)){
		printf("Can not close file!\n");
		exit(0);
	}
	
	return 0;
 } 
