#include<stdio.h>
void main()
{
    float vol;
    float r;
    float h;
    volume(&r,&h);
}
int volume(float *x,float *y)
{
  
   float vol;
    printf("enter the value");
    scanf("%f%f",&*x,&*y);
    vol=(3.14*(*x)*(*x)*(*y));
    printf ("%f", vol);
}
