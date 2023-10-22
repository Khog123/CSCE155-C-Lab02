#include <stdio.h>
int main()
{
   float dollar, exchangeFee, dollarPerPound, totalAmountDollar;
   float dollarPerYen;

    printf("Enter the amount in Dollar:");
    scanf("%f",&dollar);
    exchangeFee = dollar * 0.1;
    totalAmountDollar = dollar - exchangeFee;
    dollerPerPound = (totalAmountDollar / 2) * 0.79;
    dollarPerYen = (totalAmountDollar / 2) * 127.65;
    printf("Half of the Dollar exchange to %2f GBP\n", dollarPerPoungccd);
    printf("Half of the Dollar exchange to %d JPY\n", dollarPerYen);

    return 0;
}