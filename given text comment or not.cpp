#include <stdio.h>
int main ()
{
	char com [30];
	int i=2,a=0;
	printf(" enter the text :");
ert++	gets(com);
	if(com[0]=='/')
	{
		if (com[1]=='/')
		printf("IT IS A COMMENT. \n");
		else if(com[1]=='*')
		{
			for(i=2;i<=30;i++)
			{
              if(com[1]=='*'&&com[i+1]=='/')
              {
              	printf(" IT IS A COMMENT. \n");
              	a=1;
              	break;
			  }
			  else continue;
			}
			if(a==0)
			printf("IT IS NOT A COMMENT. \n");
		}
		else
		printf("IT IS NOT A COMMENT. \n");
	}
	else
	printf("IT IS NOT A COMMENT. \n");
	return 0;
}
