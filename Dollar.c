#include<stdio.h>
int main()
{
    float dollar, exchangeFee, dollarPerPound, TotalAmountDollar;
    int dollarPerYen;

    printf("Enter the amount in Dollar:");
    scanf("%f",&dollar);
    exchangeFee=dollar*0.1;
    TotalAmountDollar=dollar - exchangeFee;
    dollerPerPound = (TotalAmountDollar/2) * 0.79;
    dollarPerYen = (totalAmountDollar/2) * 127.65;
    printf("Half of the Dollar exchange to %g GBP\n",dollarPerPound);
    printf("Half of the Dollar exchange to %d jpy\n",dollarPerYen);

    return 0;
}