#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct users{
	char name[80];
	char password[80];
};
encrypt(char *ch)
{
	int i;
	for(i = 0;i < strlen(ch);i++ ){
		ch[i] = ch[i] ^ 15;
	}
}
int checkuserValid(struct users *p)
{
	FILE *fp;
	char user1[30],user[30],pwd[30];
	int check = 0;
	
	strcpy(user,p->name);
	strcpy(pwd,p->password);
	encrypt(pwd);
	strcat(user," ");strcat(user,pwd);strcat(user,"\n");
	
	if((fp = fopen("users.txt","r")) == NULL){
		printf("File open error!\n");
		exit(0);
	}
	
	while(!feof(fp)){
		fgets(user1,30,fp);
		if(strcmp(user1,user) == 0){
			check = 1;
			break;
		} 
	}
	
	if(fclose(fp)){
		printf("Can not close the file");
		exit(0);
	}
	
	return check;
}
int main(void)
{
	struct users user;
	printf("Enter user's name:");
	scanf("%s",user.name);
	printf("Enter user'password:");
	scanf("%s",user.password);
	
	if(checkuserValid(&user) == 1){
		printf("Valid user\n");
	}else{
		printf("InValid user\n");
	}
}
