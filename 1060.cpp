#include<iostream>
using namespace std;
int main()
{
    int i,countr=0;
    float n[6];
    for(i=0; i<6; i++)
    {
        cin>>n[i];
    }
    for(i=0; i<6; i++)
    {
        if(n[i]>0)
        {
            countr++;
        }
    }
    cout<<countr<<" valores positivos"<<endl;
}
