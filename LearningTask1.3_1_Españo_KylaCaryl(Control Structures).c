#include <stdio.h>
int main()
{
    float tuitionfee, modpayment;
    printf("\nInput Tuition Fee Amount: ");
    scanf("%f", &tuitionfee);
    printf("\nInput Mode of Payment: ");
    scanf("%f", &modpayment);
{
    if(modpayment==1)
        printf("\nOne time full Payment");
    else if (modpayment==2)
        printf("\nTwo Installment");
    else if (modpayment==3)
        printf("\nThree Installment");
    else
         printf("\nINVALID PAYMENT MODE");

}
{
    if((modpayment==1)&&(modpayment = .75 * tuitionfee))
        printf("\nNet Tuition Fee: %0.2f", modpayment);
    else if ((modpayment==2)&&(modpayment = .90 * tuitionfee))
        printf("\nNet Tuition Fee: %0.2f", modpayment);
    else if ((modpayment==3)&&(modpayment = .10 * tuitionfee + tuitionfee))
        printf("\nNet Tuition Fee: %0.2f", modpayment);
    else
         printf("\nINVALID PAYMENT MODE");
}
 return 0;
}

