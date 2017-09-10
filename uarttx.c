//a simple program to transmit data via via uart from user space
#include<stdio.h>
void main()
{
FILE *p;
p=fopen("/dev/ttyS0","w");
fprintf(p,"Hello world\n");
fclose(p);
}