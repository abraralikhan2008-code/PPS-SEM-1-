#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,root1,root2,real,imag;
    printf("enter the vaule of a,b and c:");
    scanf("%f %f %f,&a,&b,&c");
    d=b*b-4*a*c;
    if (d>0)
    {
        root1 = (-b + sqrt(d))/(2*a);
        root2 = (-b + sqrt(d))/(2*a);
        printf("roots are real and diffrent.\n");
        printf("root1 =%.2f\n", root1);
        printf("root2 =%.2f\n", root2);
    }
    else if (d ==0)
    {
        root1= -b/(2*a);
        printf("roots are real and equal.\n");
        printf("root1 = root2 = %.2f\n", root1);
    }
    else
    {
        real = -b/(2*a);
        imag = sqrt(-d)/(2*a);
        printf("roots are complex and diffrent.\n");
        printf("root1 = %.2f + %.2fi\n", real,imag);
        printf("root2 = %.2f - %.2fi\n", real,imag);
    }
   return 0;
}
