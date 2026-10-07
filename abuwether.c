#include<stdio.h>
int main()
{
    int n,orignal,reverse=0,remainder;
    printf("enter a number:");
    scanf("%d", &n);
    orignal = n;
    while (n !=0)
    {
        remainder=n%10;
        reverse = reverse * 10 + remainder;
        n =n / 10;
    }
    if (orignal == reverse)
        printf("%d is a palandrome number.\n", orignal);
    else
        printf("%d is not a palandrome number.\n", orignal);
    return 0;
}
