#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double A[20][20],B[20][20],C[20][20];
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
        for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            cout<<"B["<<i<<"]["<<j<<"]=";
            cin>>B[i][j];
        }
    }
    {
        for (int i=0; i<n; i++)
        {
            for (int j=0; j<m; j++)
            C[i][j]=A[i][j]+B[i][j];
        }
    }

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
