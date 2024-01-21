#include<stdio.h>
int main() {
 double a,b,e,c;
 scanf("%lf", &e);
 a=((e-2000)*0.08);
 b=(((e-3000)*0.18)+80);
 c=(((e-4500)*0.28)+350);
 if
 (e<=2000)
 {
     printf("Isento\n");
 }
  else if
 (e>=2000.01 && e<=3000)
 {
     printf("R$ %0.2lf\n", a);
 }
 else if
 (e>=3000.01 && e<=4500)
 {
     printf("R$ %0.2lf\n", b);
 }
 else
 {
     printf("R$ %0.2lf\n", c);
 }
    return 0;
}
