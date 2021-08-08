Progam to calculate area and circumference of circle.
#include<stdio.h>
int main()
{
int rad ;
float PI=3.14 , area, ci;
printf(“enter  radius of circle :” );
scanf(“%d”, &rad);
area = PI * rad * rad;
printf(“Area of circle : %f”, area);
c i= 2 * PI * rad;
printf(“Circumference : %f”, ci);
return 0;
}


Using Constant :
#include<stdio.h>
int main()
{
const float PI=3.14;
int radius;
float area;
printf(“enter  radius of circle :” );
scanf(“%d”, &rad);
area = PI * rad * rad;
printf(“Area of circle : %f”, area);
c i= 2 * PI * rad;
printf(“Circumference : %f”, ci);
return 0;
}

