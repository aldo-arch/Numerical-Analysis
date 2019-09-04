#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;//n eshte numri i te panjohurave , merre n=2 psh
    cout<<"n: ";
    cin>>n;
    float ** A;//deklarojme nje pointer per te na ndihmuar
    A=new float*[n];
    for (int i=0;i<n;i++)
    {
        A[i]=new float[n+1];
    }
    cout<<'\n';
    for (int r=0;r<n;r++)//marrim te dhenat nga user-i
    {
        for (int c=0;c<n+1;c++)
        {
            cout<<"A["<<r+1<<"]"<<"["<<c+1<<"] :";
            cin>>A[r][c];
        }
    }
    cout<<'\n';
    for (int r=0;r<n;r++)//shfaqim informacionin
    {
        for (int c=0;c<n+1;c++)
        {
            cout<<" "<<A[r][c]<<" ";
        }
        cout<<'\n';
    }

    for (int a=0;a<n;a++)
    {
        float k=A[a][a];
        for(int x=0;x<n+1;x++)
        {
            A[a][x]=A[a][x]/k;
        }
        for (int i=0;i<n;i++)
        {
            float m=A[i][a];
            for (int j=0;j<n+1;j++)
            {
                if(i==a)continue;
                A[i][j]=A[i][j]-A[a][j]*m;
            }
        }
    }
    cout<<"Zgjidhja e sistemit:"<<'\n'<<'\n';
    for (int r=0;r<n;r++)//rezultati pasi kemi perdorur algoritmin e Gausit
    {
        for (int c=0;c<n+1;c++)
        {
            cout<<" "<<A[r][c]<<" ";
        }
        cout<<'\n';
    }

}