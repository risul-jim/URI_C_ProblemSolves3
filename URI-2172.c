#include<stdio.h>
int main()
{
    int X,E;
    while(1)
    {
        scanf("%d %d",&X,&E);
        if(X==E)
        break;
        else
        {
         if(X*E)
         printf("%d\n",X*E);
         else
         printf("\n");
    }
    }
}
