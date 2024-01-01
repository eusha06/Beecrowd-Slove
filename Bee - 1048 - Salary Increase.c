#include<stdio.h>

int main() {
  
double a,b,c;
 int d;
 char f='%';
 scanf("%lf", &a);
 if
 ( a>=0.00  && a<=400.00)
 { b = (a*15)/100;
      c= a+b;
      d = 15;
 }
 else if
    ( a>400.00  && a<=800.00)
 { b = (a*12)/100;
      c= a+b;
      d = 12;
 }
 else if

 ( a>800.00  && a<=1200.00)
 { b = (a*10)/100;
      c= a+b;
      d = 10;
 }
 else if
 ( a>1200  && a<=2000.00)
 { b = (a*7)/100;
      c= a+b;
      d = 7;
 }
 else
 { b = (a*4)/100;
      c= a+b;
      d = 4;
 }
 printf("Novo salario: %0.2lf\nReajuste ganho: %0.2lf\nEm percentual: %d %c\n",c,b,d,f);
    return 0;
}
