#include<stdio.h>
int main()
{
double boy, kilo, ind;

printf("Kilonuz:");
scanf("%lf", &kilo);
printf("Boyunuz:");
scanf("%lf", &boy);

ind=kilo/(boy*boy);
printf("Vücut Kitle İndeksinz: %f \n", ind);

if(ind<18)
printf("Zayıf");
else if(ind>=18 && ind<25)
printf("Normal");
else if(ind>=25 && ind<30)
printf("Kilolu");
 return 0;
 
}