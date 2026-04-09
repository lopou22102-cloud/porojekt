#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("hgfjyjyjyjyjyjyjyjyktduht\n");
    float a,b;
    int x;
    scanf("%f ", &a);
    scanf("%f ", &b);
    scanf("%d", &x);
    switch(x)
    {
        case 1: printf("%.3f",a+b);
            break;
        case 2: printf("%.3f",a-b);
            break;
        case 3: printf("%.3f",a*b);
            break;
        case 4: printf("%.3f",a/b);
            break;
        default:
            printf("NAN");
            break;
    }
    return 0;
}
