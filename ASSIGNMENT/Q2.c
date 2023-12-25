// tempertatue conversion : write a programe that uses two functions to calcualte the

float fah_cel(float fah);
float fah_cel(float fah)
{
    float c;

    c = (fah - 32) / 1.8;
    return c;
}
float cel_fah(float c);
float cel_fah(float c)
{
    float fah;

    fah = (c * 1.8) + 32;
    return fah;
}

#include <stdio.h>
int main()
{
    int n;
    float fah, c;
    printf("press 1 to give cel or press 2 to get fah :");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("cel from fah :");
        scanf("%f", &fah);
        // fah = (c * 1.8) + 32 formula to calculate fahrehite to celcius
        printf(" %f", fah_cel(fah));
        break;
    case 2:
        printf("fah from cell :");
        scanf("%f", &c);
        // c = (fah - 32) / 1.8; celcius to fahrenhite
        printf(" %f", cel_fah(c));

    default:
        break;
    }

    return 0;
}


