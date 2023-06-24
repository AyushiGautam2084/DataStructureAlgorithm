#include <stdio.h>

struct dist
{
    int kms;
    float m;
};

int main()
{
    struct dist d1,d2,d3;
    printf("Enter first distance\n");
    printf("Enter kilometers:");
    scanf("%d",&d1.kms);
    printf("Enter meters:");
    scanf("%f",&d1.m);
    printf("Enter second distance\n");
    printf("Enter kilometers:");
    scanf("%d",&d2.kms);
    printf("Enter meters:");
    scanf("%f",&d2.m);
    d3.kms=d1.kms+d2.kms;
    d3.m=d1.m+d2.m;

    while(d3.m>=1000.0)
    {
        d3.m=d3.m/1000.0;
        ++d3.kms;
    }

    printf("\nSum of distances is %d kms and %f meters",d3.kms,d3.m);

    return 0;

}