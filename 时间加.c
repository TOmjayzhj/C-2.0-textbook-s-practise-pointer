#include<stdio.h>
int main(void)
{ 
    int n;
	struct time{
		int hour;
		int minute;
		int second;
	}t1;
	scanf("%d %d %d",&t1.hour,&t1.minute,&t1.second);
	scanf("%d",&n);
    if (t1.second + n >= 60 ){
    	t1.second = (t1.second + n)%60;
    	if ( t1.minute + 1 >= 60 ){
    		t1.minute = (t1.minute + 1)%60;
    		if (t1.hour + 1 >= 24 ){
    			t1.hour = (t1.hour + 1)%24;
			}else{
				t1.hour += 1;
			}
		}else{
			t1.minute += 1;
		}
	}else{
		t1.second = t1.second + 1;
	}
	
	printf("%d:%d:%d",t1.hour,t1.minute,t1.second);
	return 0;
}
