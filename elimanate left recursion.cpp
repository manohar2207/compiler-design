#include<stdio.h>
#include<string.h>
int main()
{
char a[15];
char b[6];
printf("Enter the Grammar\n");
gets(a);
int n=strlen(a);
printf("left recursion\n");
if(a[0]==a[3])
{
    printf("%c->%c%c'\n",a[0],a[n-1],a[3]);
    int j=0;
    for(int i=4;i<n-2;i++)
	{

        b[j]=a[i];
         j++;
    }
    char c[10];
    strcpy(c,b);
    printf("%c'->%s%c'/e",a[0],c,a[3]);
}
else{
    printf("It does not have any Left recursion\n");
}
printf("Left factoring\n");
if(a[3]==a[6]||a[6]==a[9])
{
        printf("%c->%c%c'|e\n",a[0],a[3],a[0]);
        printf("%c'->%c|%c",a[0],a[4],a[7]);



}
else{
    printf("It doesn't have any left factoring\n");
}

return 0;
}
