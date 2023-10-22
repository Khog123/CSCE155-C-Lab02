#include <stdio.h>
int main()
{
   float dollar, exchangeFee, dollarPerPound, totalAmountDollar;
   float dollarPerYen; //changed data type

    printf("Enter the amount in Dollar:");
    scanf("%f",&dollar);
    exchangeFee = dollar * 0.1;
    totalAmountDollar = dollar - exchangeFee;
    dollarPerPound = (totalAmountDollar / 2) * 0.79;
    dollarPerYen = (totalAmountDollar / 2) * 127.65;
    printf("Half of the Dollar exchange to %2f GBP\n",dollarPerPound);  //Added .2 to format to 2 decimal places
    printf("Half of the Dollar exchange to %2f JPY\n",dollarPerYen);   //changed format to specifier %2f

    return 0;
}