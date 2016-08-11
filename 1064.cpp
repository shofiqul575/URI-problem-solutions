#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,countr=0;
    float n[6],sum=0,average;
    for(i=0; i<6; i++)
    {
        cin>>n[i];
    }
    for(i=0; i<6; i++)
    {
        if(n[i]>0)
        {
            countr++;
            sum+=n[i];
            average=sum/countr;
        }
    }
    printf("%d valores positivos\n",countr);
    printf("%.1f\n",average);
}

