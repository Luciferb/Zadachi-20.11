#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n [100];
    int p , max, min;
    cin>>p;
    for(int i=0;i<p;i++)
    {
        cin>>n[i];
    }
    for(int i=0;i<p;i++)
    {
        if(n[i]>n[i-1])max=n[i];
    }
    for(int i=0;i<p;i++)
    {
        if(n[i]<n[i-1])min=n[i];
    }
    cout<<"nai stariq e"<<max<<endl;
    cout<<"nai malkiq e"<<min<<endl;
    return 0;
}
