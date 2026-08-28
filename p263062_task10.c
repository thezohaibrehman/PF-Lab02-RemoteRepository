#include <stdio.h>
int main ()
{
	float pf_marks = 88.0; 
	float cal_marks = 76.5; 
	float ap_marks = 82.0; 
	
	int pf_ch = 3;
	int cal_ch = 3;
	int ap_ch = 2;
	
	int total_ch;
	float total_score, avg_percent;
	
	total_score = (88.0 * 3) + (76.5 * 3) + (82.0 * 2);
	total_ch = 3 + 3 + 2;
	avg_percent = total_score/total_ch;
	
	printf("================ SEMESTER ACADEMIC REPORT =================\n");
	
	printf("Course \t\t Credit Hours \t\t Obtained Marks\n");
	
	printf("-----------------------------------------------------------\n");
	
	printf("Programming Fund. \t %d \t\t %.2f\n", pf_ch, pf_marks);
	printf("Calculus \t\t %d \t\t %.2f\n", cal_ch, cal_marks);
	printf("Applied Physics \t %d \t\t %.2f\n", ap_ch, ap_marks);
	
	printf("-----------------------------------------------------------\n");
	
	printf("Total Credits: %d \t Weighted Average: %.2f%%\n", total_ch, avg_percent);
	
	printf("===========================================================\n");
	
	return 0;
}
