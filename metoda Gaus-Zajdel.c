//Gaus-seidel
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    cout.precision(4);
    cout.setf(ios::fixed);
    int n,i,j,k,flag=0,count=0;
    cout<<"\nvendosni numrin e ekuacioneve\n";           
    cin>>n;                    //Input numrin e ekuacioneve
    double a[n][n+1];            //deklarojme vektorin 2 dimensional
    double x[n];                //deklarojme nje vektor per te vendosur vlerat
    double eps,y;
    cout<<"\nvendosni elementet e matrices ne shqyrtim:\n";
    for (i=0;i<n;i++)
        for (j=0;j<=n;j++)
            cin>>a[i][j];
    cout<<"\nvendosni vlerat e variablave:\n";
    for (i=0;i<n;i++)
        cin>>x[i];
    cout<<"\nderi ku e doni zgjidhjen:\n";
    cin>>eps;
    for (i=0;i<n;i++)                   
        for (k=i+1;k<n;k++)
            if (abs(a[i][i])<abs(a[k][i]))
                for (j=0;j<=n;j++)
                {
                    double temp=a[i][j];
                    a[i][j]=a[k][j];
                    a[k][j]=temp;
                }
    cout<<"Iter"<<setw(10);
    for(i=0;i<n;i++)
        cout<<"x"<<i<<setw(18);
    cout<<"\n----------------------------------------------------------------------";
    do                            //Performojme iteracionet per te llogaritur x1,x2,...xn
    {
        cout<<"\n"<<count+1<<"."<<setw(16);
        for (i=0;i<n;i++)                //cikel qe llogarit x1,x2,...xn
        {
            y=x[i];
            x[i]=a[i][n];
            for (j=0;j<n;j++)
            {
                if (j!=i)
                x[i]=x[i]-a[i][j]*x[j];
            }
            x[i]=x[i]/a[i][i];
            if (abs(x[i]-y)<=eps)            //krahasojme vlerat me vleren e fundit
                flag++;
            cout<<x[i]<<setw(18);
        }
        cout<<"\n";
        count++;   
    }while(flag<n);                       
   
    cout<<"\n The solution is as follows:\n";
    for (i=0;i<n;i++)
        cout<<"x"<<i<<" = "<<x[i]<<endl;        //afishojme x[]
    return 0;
}