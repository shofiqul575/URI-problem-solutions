#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int x,y;
    float prod_1=4.00,prod_2=4.50,prod_3=5.00,prod_4=2.00,prod_5=1.50,total;
    cin>>x>>y;
    if(x==1)
    {
        total=prod_1*(float)y;
        printf("Total: R$ %.2f\n",total);
    }
    else if(x==2)
    {
        total=prod_2*(float)y;
        printf("Total: R$ %.2f\n",total);
    }
    else if(x==3)
    {
        total=prod_3*(float)y;
        printf("Total: R$ %.2f\n",total);
    }
    else if(x==4)
    {
        total=prod_4*(float)y;
        printf("Total: R$ %.2f\n",total);
    }
    else if(x==5)
    {
        total=prod_5*(float)y;
        printf("Total: R$ %.2f\n",total);
    }
    return 0;
}
