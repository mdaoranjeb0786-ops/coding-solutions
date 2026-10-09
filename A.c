#include<stdio.h>
int main()
{
    int n,original,remainder, sum =0;
    printf("Enter Number:");
    scanf("%d",n);
    original = n;
    while (n != 0)
    {
        remainder = n % 10
        sum = sum + remainder * remainder * remainder;
        n =n/ 10;
    }
    if (sum == original)
        printf("%d is an armstrong no."original);
    else
        printf("%d is not an armstorng no."original);
    return 0;
}
