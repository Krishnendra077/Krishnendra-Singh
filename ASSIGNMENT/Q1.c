// Simple Interest Calculation using fucntion principle, time and rate

#include <stdio.h>
float simple_interest(float p, float r, float t);
float simple_interest(float p, float r, float t)
{
    float simple_interest;
    simple_interest = (p * r * t) / 100;
    return simple_interest;
}
int main()
{
    float principle, rate, time;
    printf("enter the value of principle :");
    scanf("%f", &principle);
    printf("enter the value of principle :");
    scanf("%f", &rate);
    printf("enter the value of principle :");
    scanf("%f", &time);
    printf("%f", simple_interest(principle, rate, time));

    return 0;
}