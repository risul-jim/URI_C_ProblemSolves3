#include<stdio.h>
int main()
{
double p, q, i, n, sum=0;
scanf("%lf", &p);
for(i=1; i<=p; i++)
{
     scanf("%lf %lf", &n, &q);
     if(n==1001)
     {
        sum+= q*1.50;
     }
     else if(n==1002)
     {
          sum+= q*2.50;
     }
     else if(n==1003)
     {
          sum+= q*3.50;
     }
     else if(n==1004)
     {
       sum+= q*4.50;
     }
     else if(n==1005)
     {
          sum+= q*5.50;
     }
}
printf("%.2lf\n", sum);
     return 0;
}
