#include<bits/stdc++.h>
using namespace std;
int ra[500005];

void fun(int n)
{
    int res=0;
    ra[1]=1;
    ra[2]=2;
    for(int i=3; i<=n; i++)
    {
        if(i-1==res)
        {
            res=2;
            ra[i]=res;

        }

        else
            ra[i]=res+=2;

    }
}
int main()
{
    int num;
    cin>>num;
    fun(500002);
    while(num!=0)
    {
        cout<<ra[num]<<"\n";
        cin>>num;
    }
}
