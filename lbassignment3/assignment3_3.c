#include<stdio.h>

void displayevenfactor(int ino)
{
	
	if(ino<=0)
	{
		ino=-ino;
	}
	int i=0;
	for (i=1;i<=ino;i++)
	{
		if(ino%i==0&&i%2==0  )
		{
			printf("%d\n",i);
			
		}
	}
}

int main()
{
	int value=0;
	printf("enter the number of element");
	scanf("%d",&value);
	displayevenfactor(value);
	return 0;
}