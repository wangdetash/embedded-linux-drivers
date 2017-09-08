#include<stdio.h>
void main()
{
	FILE *p;
	p=fopen("/sys/class/gpio/export","w");
	fprintf(p,"17");
	fclose(p);
	p=fopen("/sys/class/gpio/gpio17/direction","w");
	fprintf(p,"out");
	fclose(p);
	while(1)
	{
		
		p=fopen("/sys/class/gpio/gpio17/value","w");
		fprintf(p,"1");
		fclose(p);
		system("sleep 1");                       
		p=fopen("/sys/class/gpio/gpio17/value","w");
		fprintf(p,"1");
		fclose(p);
	}
}