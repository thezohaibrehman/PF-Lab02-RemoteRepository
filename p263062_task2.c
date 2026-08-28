#include <stdio.h>
int main ()
{
	int batch = 2026;
	char section = 'B';
	float entry_score = 67.87;
	double fee = 268500.50;
	
	printf("=========================================================\n");
	printf("\tFAST-NUCES STUDENT PROFILE CARD\n");
	printf("=========================================================\n");	
	
	printf("Batch Year: \t%d\n", batch);
	printf("Section: \t%c\n", section);
	printf("Test Score: \t%f\n", entry_score);
	printf("Semester Fee: \tPKR %lf\n", fee);
	printf("Motto: \t\t\"Small daily steps lead to big success\"\n");
	
	printf("=========================================================\n");
	
	return 0;
}
