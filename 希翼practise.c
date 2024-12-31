#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	char ch[80],a,b;
	gets(ch);
	scanf("%c %c",&a,&b);
	char *p = ch;
	while(*p != a){
		p ++ ;
	}
	while(*p != '\0'){
		putchar(*p);
		p ++ ;
		if(*p == b){
		putchar(*p);break;
	   }
	}

	return 0;
	
}
