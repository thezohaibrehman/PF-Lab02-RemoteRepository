#include <stdio.h>
int main ()
{
	double basic_salary = 85000.00;
	
	float HRA, MA, gross_salary, tax_deduct, net_salary;
	
	HRA = 0.2 * basic_salary;
	MA = 0.1 * basic_salary;
	gross_salary = basic_salary + HRA + MA;
	tax_deduct = 0.05 * gross_salary;
	net_salary = gross_salary - tax_deduct;
	
	printf("================= MONTHLY SALARY SLIP ==================\n");
	
	printf("Basic Salary: \t\t\t PKR %.2lf\n", basic_salary);
	printf("House Rent Allowance (20%%): \t PKR %.2f\n", HRA);
	printf("Medical Allowance (10%%): \t PKR %.2f\n", MA);
	
	printf("--------------------------------------------------------\n");
	
	printf("Gross Salary: \t\t\t PKR %.2f\n", gross_salary);
	printf("Tax Deduction (5%%): \t\t PKR %.2f\n", tax_deduct);
	
	printf("--------------------------------------------------------\n");
	
	printf("Net Payable Salary: \t\t PKR %.2f\n", net_salary);
	
	printf("========================================================\n");
	
	return 0;
}
