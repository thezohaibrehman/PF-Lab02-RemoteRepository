#include <stdio.h>
int main ()
{
	int tea_q = 3;
	int samosa_q = 4;
	int chickenroll_q = 2;
	
	float tea_price = 60.00;
	float samosa_price = 40.50;
	float chickenroll_price = 120.00;
	
	float tea_total, samosa_total, chickenroll_total, bill_subtotal, GST, final_amount;
	
	tea_total = tea_q * tea_price;
	samosa_total = samosa_q * samosa_price;
	chickenroll_total = chickenroll_q * chickenroll_price;
	
	bill_subtotal = tea_total + samosa_total + chickenroll_total;
	GST = 0.16 * bill_subtotal;
	final_amount = bill_subtotal + GST;
	
	printf("====================== FAST CAFETERIA RECEIPT ======================\n");
	
	printf("Item \t\t Qty \t Unit Price (PKR) \t Subtotal (PKR)\n");
	
	printf("--------------------------------------------------------------------\n");
	
	printf("Tea \t\t %d \t %.2f \t\t\t %.2f\n", tea_q, tea_price, tea_total);
	printf("Samosa \t\t %d \t %.2f \t\t\t %.2f\n", samosa_q, samosa_price, samosa_total);
	printf("Chicken Roll \t %d \t %.2f \t\t %.2f\n", chickenroll_q, chickenroll_price, chickenroll_total);
	
	printf("--------------------------------------------------------------------\n");
	
	printf("Subtotal: \t\t\t\t\t PKR %.2f\n", bill_subtotal);
	printf("GST (16%%): \t\t\t\t\t PKR %.2f\n", GST);
	
	printf("--------------------------------------------------------------------\n");
	
	printf("Grand Total: \t\t\t\t\t PKR %.2f\n", final_amount);
	
	printf("\n===================== THANK YOU FOR YOUR VISIT =====================\n");
	
	return 0;
}
