#include <stdio.h>
int main ()
{
	char a = 'M';
	int b = 42;
	float c = 3.141590;
	double d = 98.765432;
	
	printf("Type Name \t Variable Value \t Size in Memory\n");
	
	printf("------------------------------------------------------\n");
	
	printf("char \t\t '%c' \t\t\t %d byte(s)\n", a,sizeof(a));
	printf("int \t\t %d \t\t\t %d byte(s)\n", b,sizeof(b));
	printf("float \t\t %f \t\t %d byte(s)\n", c,sizeof(c));
	printf("double \t\t %lf \t\t %d byte(s)\n", d,sizeof(d));
	
	printf("------------------------------------------------------\n");
	
	return 0;
}
