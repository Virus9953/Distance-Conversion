#include <stdio.h>
#include <conio.h>

int main()
{   float km,cm,ft,m,in;
    printf("Enter distance in KM = ");
    scanf("%f",&km);
    m=km*1000;
    cm=m*100;
    in=km*39370.1;
    ft=km*3280.84;
    printf("Distance in Meter = %f\nDistance in Feet = %f\nDistance in Inches = %f\nDistance in Centimeter = %f",m,ft,in,cm);
    getche();
    return 0;
}
