#include<stdio.h>
int printeven(int ino)
{
	if (ino<=0)
	{
		return 0;
	}
    int i=0;
	int icnt=0;
    for(icnt=1;icnt<=2*ino;icnt++)
	{	
      
	    	if (icnt%2==0)
			{	
		    while ( i<=ino )
		    {
		    i=i+1;
			}
			printf("%d\n",icnt );
			}
	}
}


int main()
 {
	int ivalue=0;
	printf("enter the number");
	scanf("%d",&ivalue);
	printeven(ivalue);
	return 0;
	
 }