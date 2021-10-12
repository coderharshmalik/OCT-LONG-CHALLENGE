#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,y=0;
        cin>>n;
        for(int j=1;j<=n;j=2*j)
        {
            x=j;
        }
        y=(n-x)+1;
        cout<<max((x/2),y)<<endl;
    }
    return 0;
}