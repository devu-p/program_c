//accept monthly salary from the user and deduct 10% insurance premium,
//10% loan installment find out of remaining salary.
#include<stdio.h>
void main()
{
   float remain_sal,insurance_premium=0.10,loan_installment=0.10,monthly_sal;
   printf("enter monthly salary:");
   scanf("%f",&monthly_sal);

    insurance_premium = monthly_sal * 0.10;
    loan_installment = monthly_sal * 0.10;

    remain_sal = monthly_sal - insurance_premium - loan_installment;

    printf("Insurance premium: %.2f\n", insurance_premium);
    printf("Loan installment: %.2f\n", loan_installment);
    printf("Remaining salary: %.2f\n", remain_sal);



}