#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct user{
	char name[80];
	char password[80];
}; 
void change(char *ch)
{
	int i;
	for (i = 0;i < strlen(ch);i++ ){
		ch[i] = ch[i] ^ 15;
		
	}
}
int main(void)
{
	FILE *fp;
	int i,n;
	struct user users[10];
	
	if((fp = fopen("users.txt","w")) == NULL){
		printf("The file can't open!\n");
		exit(0);
	}
	
	scanf("%d",&n);
	for(i = 1;i <= n;i++ ){
		printf("input %dth user's name:\n",i);
		scanf("%s",&users[i].name);
		printf("input %dth user's password\n",i);
		scanf("%s",&users[i].password);
		change(users[i].password);
		fprintf(fp,"%s %s\n",users[i].name,users[i].password);
	}
	
	if(fclose(fp)){
		printf("The file can't close!");
		exit(0);
	}
	return 0;
}
