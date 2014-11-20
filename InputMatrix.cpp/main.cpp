#include<iostream>
using namespace std;
int main()
{
    int A[20][20];
    int n,m;
    cout<<"Vuvedete broq na redove na matricata."<<endl;
    cin>>n;
    cout<<"Vuvedete broq na kolonite na matricata"<<endl;
    cin>>m;
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            cout<<"A["<<i<<"]["<<j<<"]=";
            cin>>A[i][j];
        }
    }
    return 0;
}
