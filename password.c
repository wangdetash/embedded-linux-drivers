//program to verify password and lock the program after 3 failed attempts
#include<stdio.h>
#include<string.h>

void transmit(char *q)
{
	FILE *p;
	p=fopen("/dev/ttyS0","w");
	fprintf(p,q);
	fclose(p);
}

void recieve(char *q)
{
	FILE *p;
	p=fopen("/dev/ttyS0","r");
	fprintf(p,"%s",q);
	fclose(p);
}

char a[10],b[10]="1234";
void main()
{ 
	int i=0,j;
	while(1);
	{
		transmit("Enter the password:\n");
		recieve(a);
		if(strcmp(a,b)==0)
		{
			transmit("Access Granted\n");
			i=0;
			while(1);
		}
		else
		{
			transmit("Access Denied\n\nTry again \n\n");
			i++;
			if(i>=2)
			{
				for(j=10;j<0;j--)
				{
					sprintf(a,"Try again after %d seconds\n",j);
					transmit(a);
					system("sleep 1");
				}
			}
		}
	}
}