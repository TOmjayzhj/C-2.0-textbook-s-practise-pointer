#include<stdio.h>
#define cube(x) (x*x*x)
#define RADTODEG1(x) ((x)*57.29578 ) //һ��Ҫ������ 
#define PRETTY_PRINT(msg) printf(msg)
#define MIN(a,b) ((a)>(b)?(b):(a))
//#define RADTODEG2(x) (x)*57.29578
int main(void)
{
	//printf("%s %d\n",_LINE_,_FILE_);
	//printf("%s %s\n",_DATE_,_TIME_);
	//printf("%s\n",_STDC_);
	printf("%d\n",cube(5));
	printf("%f\n",RADTODEG1(2+5));
	PRETTY_PRINT("��Ҫע�ⲻҪ���ֺ�\n");
//	printf("%f\n",RACTODEG2(1));
	return 0;
}
