#include<iostream>
using namespace std;
int main()
{
    int x,i,countr=0;
    cin>>x;
    for(i=x+1; i>=x; i++)
    {
        if(i%2!=0&&countr<=5)
        {
            cout<<i<<endl;
            countr++;
        }
    }

}

