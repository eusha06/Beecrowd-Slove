#include<stdio.h>
int main() {
     int num;
    int count=0;
int count1=0;
int count2=0;
int count3=0;
    for
        (int i=0; i<5; i++)
    {
         scanf("%d",&num );
        if
            (num%2==0)
        {
            count++;
        }
        if
            (num%2!=0)
        {
            count1++;
        }
        if
            (num>0)
        {
            count2++;
        }
        if
            (num<0)
        {
            count3++;
        }
        }
 printf("%d valor(es) par(es)\n",count);
       printf("%d valor(es) impar(es)\n",count1);
       printf("%d valor(es) positivo(s)\n",count2);
       printf("%d valor(es) negativo(s)\n",count3);

    return 0;
}
 
