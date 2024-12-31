#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct sysuser{
	char name[80];
	char password[80];
}; 
void encrypt(char*pwd);
int main(void)
{
	FILE *fp;
	int i;
	struct sysuser user;
	if (fp = fopen("f12-2.txt","w") == NULL){
		printf("File open error !\n");
		exit(0);
	}

	for(i = 1; i <= 5;i ++ ){
		printf("Enter %dth user(name,password):",i);
	    scanf("%s%s",user.name,user.password);
	    encrypt(user.password);
	    fprintf(fp,"%s %s\n",user.name,user.password);
	}
	if(fclose(fp)){
		printf("Can not close the file!\n");
		exit(0);
	}
	return 0;
}
void encrypt(char*pwd)
{
	int i;
	for(i = 0;i < strlen(pwd);i++ ){
		pwd[i] = pwd[i]^15;
	}
}

