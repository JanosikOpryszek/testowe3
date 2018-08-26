#include<stdio.h>
#include<stdlib.h>


int main()
{
char *a;
a=malloc(100);
a="moj dlugi tekscik";
printf("%s\n",a);

a="moj drugi dlugi tekscik";
printf("%s\n",a);


a="moj trzeci dlugi tekscik";
printf("%s\n",a);


return 0;
}
