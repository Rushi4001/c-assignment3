#include<stdio.h>
#include<stdbool.h>
typedef int rk;
#define TRUE 1
#define FALSE 0

rk checkvowel(char ch )
{
	
	if ((ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U'))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
int main()
{
	char cvalue='\0';
	bool bret=FALSE;
	
	printf("enter character\n");
	
	scanf("%c",&cvalue);
	
	bret=checkvowel(cvalue);
	
	if(bret==TRUE)
	{
		printf("% it is a vowel");
	}		
	else
	{
		printf("  it is not a vowel");
	}		
		return 0;
}