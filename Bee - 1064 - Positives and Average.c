#include<stdio.h>
int main() {
int i, count=0;
float n,sum=0;
for
(i=1; i<=6; i++)
{
    scanf("%f", &n);
    if
    (n>0)
           {
               sum=sum+n;

          count++;
           }
}
    printf("%d valores positivos\n",count);
    printf("%0.1f\n", (sum/count));
    return 0;
}
