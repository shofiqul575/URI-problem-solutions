#include<iostream>
using namespace std;
int main()
{
    int i,countr=0;
    int n[5];
    for(i=0; i<5; i++)
    {
        cin>>n[i];
    }
    for(i=0; i<5; i++)
    {
        if(n[i]%2==0)
        {
            countr++;
        }
    }
    cout<<countr<<" valores pares"<<endl;
}

