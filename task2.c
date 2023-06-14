#include<stdio.h>

main()

{
	FILE *p;
	char data[1000];
	
	p=fopen("xyz.txt","w");
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
		printf("DATA ADD SUCSSEFULY..........");
	}
	fclose(p);
}

