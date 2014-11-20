#include<iostream>
using namespace std;
int main()
{
    double A[20][20],c;
    int n,m;
    cout<<"Vuvedete broq na redove na matricata."<<endl;
    cin>>n;
    cout<<"Vuvedete broq na kolonite na matricata"<<endl;
    cin>>m;
    cout<<"Vuvedete edno chislo"<<endl;
    cin>>c;
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
            A[i][j]=A[i][j]*c;
        }

    }
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
