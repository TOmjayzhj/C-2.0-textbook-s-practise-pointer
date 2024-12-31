#include<stdio.h>

int main(void)
{
	int letter=0,space=0,other=0,digit=0;
	char str[80],*ch=str;
    gets(str);
    puts(str); 
    while( *ch != '\0'){
    	if((*ch >= 'a' && *ch <= 'z')||(*ch >= 'A' && *ch <= 'Z')){
    		letter ++ ;
		}else if(*ch == ' '){
			space ++ ;
		}else if( *ch >= '0' && *ch <= '9'){
			digit ++ ;
		}else{
			other ++ ;
		}
		ch ++ ;
	
	}    

	printf("letter=%d, space=%d, digit=%d, other=%d",letter,space,digit,other);
	return 0;
}
