#include<stdio.h>
int main(){
	float cp,sp,profit;
	printf("Enter the cost price ");
	scanf("%f",&cp);
	printf("Enter the selling price ");
	scanf("%f",&sp);
	
	profit=((sp-cp)*25)/12;
	printf("Profit is %f ",profit);
	
}
