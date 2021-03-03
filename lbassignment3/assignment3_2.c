
#include<stdio.h>
void displayfactor(int ino)
{
	int i=0;
	if(ino<=0)
	{
		ino=-ino;
	}
	
	for (i=1;i<=ino;i++)
	{
		if( i%2==0  )
		{
		printf("%d\n",i);
		}
	}
}
int main()
{
	int ivalue=0;
	printf("enter the number of element");
	scanf("%d/n",&ivalue);
	displayfactor(ivalue);
	return 0;
}