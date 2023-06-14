#include<stdio.h>
main()
{
	FILE *p;
	char data[1000];
	
	p=fopen("xyz.txt","a");
	if(p==NULL)
	{
		printf("THIS FILE IS COULD NOT OPEN.\n");
	}
	else
	{
		printf("ENTER DATA YOU WANT TO INPUT IN TEXT FILE:-");
		gets(data);
		fputs("\n",p);
		fputs(data,p);
		printf("DATA ADD SUCSSECFULY..........");
	}
	fclose(p);
	
	printf("\n\n******************\n\n");
	p=fopen("empty.txt","r");
	
	if(p==NULL)
	{
		printf("THIS FILE CAN NOT OPEN....\n");
	}
	else
	{
		while(fgets(data,55,p)!=NULL)
		{
			printf("%s",data);
		}
	}
	fclose(p);
}

