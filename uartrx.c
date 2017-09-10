//a simple program to recieve data  via uart from user space
#include<stdio.h>
void main()
{
FILE *p;
char a[50];
p=fopen("/dev/ttyS0","r");
fscanf(p,"%s",a);
fclose(p);
}