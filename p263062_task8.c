#include <stdio.h>
int main ()
{
	double principal = 250000.00; 
	float rate = 8.5; 
	int time = 3; 
	
	float I, A, installment;
	
	I = (principal * rate * time)/100.0;
	A = principal + I;
	installment = A/(time * 12.0);
	
	printf("================ BANK LOAN INTEREST SUMMARY ================\n");
	
	printf("Principal Amount: \t\t PKR %.2f\n", principal);
	printf("Annual Interest Rate: \t\t %.2f%%\n", rate);
	printf("Loan Duration: \t\t\t %d Years (36 Months)\n", time);
	
	printf("------------------------------------------------------------\n");
	
	printf("Total Accrued Interest: \t PKR %.2f\n", I);
	printf("Total Payable Amount: \t\t PKR %.2f\n", A);
	printf("Monthly Installment: \t\t PKR %.2f\n", installment);
	
	printf("============================================================\n");
	
	return 0;
}
