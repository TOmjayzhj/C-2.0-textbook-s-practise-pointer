#include<stdio.h>
#include<string.h>
void delchar(char s[],char c)
{
	int i,m,n,k;
	while (s[i]!='\0'){
		if (c == s[i]){
			m = i;
			break;
		}
		i ++ ;
	}
	n = strlen(s);
	for(i = m;i <  n ; i ++ ){
		s[i] = s[i + 1];
	}
}
int check(char s[],char c)
{
	int i ;
	for(i = 0; i < strlen(s);i ++){
		if (s[i] == c)return 0;
	}
	return 1;
}
int main(void)
{
	char s[80],c;
	int i=0,n;
	while((s[i]=getchar())!= '\n'){
		i ++ ;
	}
	n = i;
	s[n] = '\0';
	c = getchar();
	while(check(s,c) == 0){
		delchar(s,c);
	}
	printf("result: ");
	puts(s);
}
