#include<stdio.h>
#include<string.h>
int main()
{
FILE *fp;int n;
fp=fopen("database.csv","r");
printf("Which country do you want to visit ?\n");
printf("Enter \n 1 for India \n 2 for Singapore \n 3 for Europe\n 4 for Australia\n\n");
scanf("%d",&n);
char ch[10000];
fgets(ch,1000,fp);
int c1;
char *token;
switch(n)
{
case 1:
	printf("You've chosen India!!\n\n"); 
	printf("-------------------------------------------------------------------\n");
	printf("The available price points are\n");
	printf("1) RS.15000 \n2) RS. 35000 \n3) RS. 55000\n");
	printf("\nEnter your option\n\n");  
	printf("-------------------------------------------------------------------\n");
	scanf("%d",&c1);
	switch(c1)
	{
	case 1:
	
		printf("\n Bengaluru is the only place we've got for you\n\n");
		printf("The places you'll be visiting are:\n\n ");
		while(fgets(ch,1000,fp)!=NULL)
		{
			token=strtok(ch,",");
			token=strtok(NULL,",");
			token=strtok(NULL,",");
			char temp[1000];
			strcpy(temp,token);
			if(strcmp(temp,"Bengaluru")==0)
			{
				token=strtok(NULL,",");
				printf("%s\n",token);
				token=strtok(NULL,",");
				printf("%s\n",token);
				token=strtok(NULL,",");
				printf("%s\n",token);
			}
		}
	break;
	
	case 2:
	
		printf("Press 1 to visit mumbai and Bengaluru\n \n 2 to visit chennai and bengaluru\n\n");
		int c11;
		scanf("%d",&c11);
		printf("-------------------------------------------------------------------\n");
		switch(c11)
		{
		case 1:
			printf("You've chosen to visit Mumbai and Bengaluru\n\n");
			printf("The places you'll be visiting in Bengaluru are: \n");
			while(fgets(ch,1000,fp)!=NULL)
			{
				token=strtok(ch,",");
				token=strtok(NULL,",");
				token=strtok(NULL,",");
				char temp[1000];
				strcpy(temp,token);
				if(strcmp(temp,"Bengaluru")==0)
				{
					token=strtok(NULL,",");
					printf("%s\n",token);
					token=strtok(NULL,",");
					printf("%s\n",token);
					token=strtok(NULL,",");
					printf("%s\n",token);
				}
			}
			printf("-------------------------------------------------------------------\n");
			printf("The places you'll be visiting in Mumbai are: \n\n");
			fseek(fp,3,SEEK_SET);
			while(fgets(ch,1000,fp)!=NULL)
			{
				token=strtok(ch,",");
				token=strtok(NULL,",");
				token=strtok(NULL,",");
				char temp[1000];
				strcpy(temp,token);
				if(strcmp(temp,"Mumbai")==0)
				{
					token=strtok(NULL,",");
					printf("%s\n",token);
					token=strtok(NULL,",");
					printf("%s\n",token);
					token=strtok(NULL,",");
					printf("%s\n",token);
				}
			}
		break;
		case 2:
		
			printf("You've chosen to visit Chennai and Bengaluru\n\n");
			printf("The places you'll be visiting in Bengaluru are: \n\n");
			while(fgets(ch,1000,fp)!=NULL)
			{
				token=strtok(ch,",");
				token=strtok(NULL,",");
				token=strtok(NULL,",");
				char temp[1000];
				strcpy(temp,token);
				if(strcmp(temp,"Bengaluru")==0)
				{
					token=strtok(NULL,",");
					printf("%s\n",token);
					token=strtok(NULL,",");
					printf("%s\n",token);
					token=strtok(NULL,",");

					printf("%s\n",token);
				}
			}
			printf("-------------------------------------------------------------------\n");
			printf("The places you'll be visiting in Chennai are: \n\n");
			fseek(fp,3,SEEK_SET);
			while(fgets(ch,1000,fp)!=NULL)
			{
				token=strtok(ch,",");
				token=strtok(NULL,",");
				token=strtok(NULL,",");
				char temp[1000];
				strcpy(temp,token);
				if(strcmp(temp,"Chennai")==0)
				{
					token=strtok(NULL,",");
					printf("%s\n",token);
					token=strtok(NULL,",");
					printf("%s\n",token);
					token=strtok(NULL,",");
					printf("%s\n",token);
				}
			}
		break;
		default:printf("incorrect option selected \n");
		}
	break;
	case 3:	printf("\nYou'll be visiting 3 places in India\n");
		printf("The places you'll be visiting in Bengaluru are: \n\n");
			while(fgets(ch,1000,fp)!=NULL)
			{
				token=strtok(ch,",");
				token=strtok(NULL,",");
				token=strtok(NULL,",");
				char temp[1000];
				strcpy(temp,token);
				if(strcmp(temp,"Bengaluru")==0)
				{
					token=strtok(NULL,",");
					printf("%s\n",token);
					token=strtok(NULL,",");
					printf("%s\n",token);
					token=strtok(NULL,",");

					printf("%s\n",token);
				}
			}
			printf("-------------------------------------------------------------------\n");
			printf("The places you'll be visiting in Chennai are: \n\n");
			fseek(fp,3,SEEK_SET);
			while(fgets(ch,1000,fp)!=NULL)
			{
				token=strtok(ch,",");
				token=strtok(NULL,",");
				token=strtok(NULL,",");
				char temp[1000];
				strcpy(temp,token);
				if(strcmp(temp,"Chennai")==0)
				{
					token=strtok(NULL,",");
					printf("%s\n",token);
					token=strtok(NULL,",");
					printf("%s\n",token);
					token=strtok(NULL,",");
					printf("%s\n",token);
				}
			}
			printf("-------------------------------------------------------------------\n");
			printf("The places you'll be visiting in Mumbai are: \n\n");
			fseek(fp,3,SEEK_SET);
			while(fgets(ch,1000,fp)!=NULL)
			{
				token=strtok(ch,",");
				token=strtok(NULL,",");
				token=strtok(NULL,",");
				char temp[1000];
				strcpy(temp,token);
				if(strcmp(temp,"Mumbai")==0)
				{
					token=strtok(NULL,",");
					printf("%s\n",token);
					token=strtok(NULL,",");
					printf("%s\n",token);
					token=strtok(NULL,",");
					printf("%s\n",token);
				}
			}
	break;
	default:printf("\nIncorrect option selected , please enter either 1, 2 or 3");
	}
break;
case 2:
	printf("That's a great choice, you've chosen Singapore\n");
	printf("\n\n Your trip will cost you RS.60000 \n\n");
	printf("The places you'll be visiting in Singapore are:\n");
	fseek(fp,3,SEEK_SET);
			while(fgets(ch,1000,fp)!=NULL)
			{
				token=strtok(ch,",");
				token=strtok(NULL,",");
				token=strtok(NULL,",");
				char temp[1000];
				strcpy(temp,token);
				if(strcmp(temp,"Singapore")==0)
				{
					token=strtok(NULL,",");
					printf("%s\n",token);
					token=strtok(NULL,",");
					printf("%s\n",token);
					token=strtok(NULL,",");

					printf("%s\n",token);
				}
			}
			printf("-------------------------------------------------------------------\n");
break;
case 3:
	printf("\nYou've chosen Europe!!!! You've got some good taste\n");
	printf("\nThe places you'll be visiting are: \n");
	fseek(fp,3,SEEK_SET);
	printf("\nYou'll first visit Rome and the places over there are: \n\n\n");
			while(fgets(ch,1000,fp)!=NULL)
			{
				token=strtok(ch,",");
				token=strtok(NULL,",");
				token=strtok(NULL,",");
				char temp[1000];
				strcpy(temp,token);
				if(strcmp(temp,"Rome")==0)
				{
					token=strtok(NULL,",");
					printf("%s\n",token);
					token=strtok(NULL,",");
					printf("%s\n",token);
					token=strtok(NULL,",");

					printf("%s\t\t\t\t",token);
					token=strtok(NULL,",");
					int pri=atoi(token);
					printf("\nThis place will cost you RS. %d\n",pri);
				}
			}
			printf("-------------------------------------------------------------------\n");
	fseek(fp,3,SEEK_SET);
	printf("\nYou'll then visit Barcelona\n\n");
	printf("\nThe places are:\n\n");fseek(fp,3,SEEK_SET);
			while(fgets(ch,1000,fp)!=NULL)
			{
				token=strtok(ch,",");
				token=strtok(NULL,",");
				token=strtok(NULL,",");
				char temp[1000];
				strcpy(temp,token);
				if(strcmp(temp,"Barcelona")==0)
				{
					token=strtok(NULL,",");
					printf("%s\n",token);
					token=strtok(NULL,",");
					printf("%s\n",token);
					token=strtok(NULL,",");

					printf("%s\t\t\t\t",token);
					token=strtok(NULL,",");
					int pri=atoi(token);
					printf("\nThis place will cost you RS. %d\n",pri);
				}
			}
			printf("-------------------------------------------------------------------\n");	
	fseek(fp,3,SEEK_SET);
	printf("\nAfter Barcelona you'll go to Paris\n\n");
	printf("\nThe places are:\n\n");
			while(fgets(ch,1000,fp)!=NULL)
			{
				token=strtok(ch,",");
				token=strtok(NULL,",");
				token=strtok(NULL,",");
				char temp[1000];
				strcpy(temp,token);
				if(strcmp(temp,"Paris")==0)
				{
					token=strtok(NULL,",");
					printf("%s\n",token);
					token=strtok(NULL,",");
					printf("%s\n",token);
					token=strtok(NULL,",");

					printf("%s\t\t\t\t",token);
					token=strtok(NULL,",");
					int pri=atoi(token);
					printf("\nThis place will cost you RS. %d\n",pri);
				}
			}
			printf("-------------------------------------------------------------------\n");	
	fseek(fp,3,SEEK_SET);
	printf("\nWe've saved the best for the end, LONDON!!!\n\n");
	printf("\nThe places are:\n\n");
			while(fgets(ch,1000,fp)!=NULL)
			{
				token=strtok(ch,",");
				token=strtok(NULL,",");
				token=strtok(NULL,",");
				char temp[1000];
				strcpy(temp,token);
				if(strcmp(temp,"London")==0)
				{
					token=strtok(NULL,",");
					printf("%s\n",token);
					token=strtok(NULL,",");
					printf("%s\n",token);
					token=strtok(NULL,",");

					printf("%s\t\t\t\t",token);
					token=strtok(NULL,",");
					int pri=atoi(token);
					printf("\nThis place will cost you RS. %d\n",pri);
				}
			}
			printf("-------------------------------------------------------------------\n");	
break;
case 4:
printf("\nYou've chosen Australia!!!! You've got some good taste\n");
	printf("\nThe places you'll be visiting are: \n");
	fseek(fp,3,SEEK_SET);
	printf("\nYou'll first visit Adelaide and the places over there are: \n\n\n");
			while(fgets(ch,1000,fp)!=NULL)
			{
				token=strtok(ch,",");
				token=strtok(NULL,",");
				token=strtok(NULL,",");
				char temp[1000];
				strcpy(temp,token);
				if(strcmp(temp,"Adelaide")==0)
				{
					token=strtok(NULL,",");
					printf("%s\n",token);
					token=strtok(NULL,",");
					printf("%s\n",token);
					token=strtok(NULL,",");

					printf("%s\t\t\t\t",token);
					token=strtok(NULL,",");
					int pri=atoi(token);
					printf("\nThis place will cost you RS. %d\n",pri);
				}
			}
			printf("-------------------------------------------------------------------\n");
	fseek(fp,3,SEEK_SET);
	printf("\nYou'll then visit Perth\n\n");
	printf("\nThe places are:\n\n");fseek(fp,3,SEEK_SET);
			while(fgets(ch,1000,fp)!=NULL)
			{
				token=strtok(ch,",");
				token=strtok(NULL,",");
				token=strtok(NULL,",");
				char temp[1000];
				strcpy(temp,token);
				if(strcmp(temp,"Perth")==0)
				{
					token=strtok(NULL,",");
					printf("%s\n",token);
					token=strtok(NULL,",");
					printf("%s\n",token);
					token=strtok(NULL,",");

					printf("%s\t\t\t\t",token);
					token=strtok(NULL,",");
					int pri=atoi(token);
					printf("\nThis place will cost you RS. %d\n",pri);
				}
			}
			printf("-------------------------------------------------------------------\n");	
	fseek(fp,3,SEEK_SET);
	printf("\nAfter Perth you'll go to Brisbane\n\n");
	printf("\nThe places are:\n\n");
			while(fgets(ch,1000,fp)!=NULL)
			{
				token=strtok(ch,",");
				token=strtok(NULL,",");
				token=strtok(NULL,",");
				char temp[1000];
				strcpy(temp,token);
				if(strcmp(temp,"Brisbane")==0)
				{
					token=strtok(NULL,",");
					printf("%s\n",token);
					token=strtok(NULL,",");
					printf("%s\n",token);
					token=strtok(NULL,",");

					printf("%s\t\t\t\t",token);
					token=strtok(NULL,",");
					int pri=atoi(token);
					printf("\nThis place will cost you RS. %d\n",pri);
				}
			}
			printf("-------------------------------------------------------------------\n");	
	fseek(fp,3,SEEK_SET);	
break;
default:printf("You've selected a wrong choice, please enter either 1, 2, 3 or 4 only!!");
}
printf("Have a great vacation!!\n\n"); 		


return 0;
}
