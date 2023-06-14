#include<stdio.h>

main()

{
	FILE *p;
	char data[1000];
	
	p = fopen("task.txt","r");
	
	if (p==NULL)
	{
		printf("FILE COULD NOT OPEN !!! \n");
	}
	
	else
	{
		while(fgets(data,50,p)!=NULL)
		{
			printf("%s",data);
		}
	}
	fclose(p);
}
