/*
program ne C++ qe llogarit integralin duke u bazuar ne rregullin e 1/3 te simpsonit
*/

#include<iostream>  //libraria per cin /cout
#include<cmath>  //libraria per funksionet matematikore

using namespace std;  //therritja e direktorise standarde

//marrja e funksionit f(x)
float f(float(x))
{
    return (pow(x,3)+pow(x,2)-(4*x)-5);
}

//duke marre diferencialin f(x) i.e. g(x)
float g(float(x))
{
    return (3*pow(x,2)+2*x-4);
}

//shkalla e dyte f(x) i.e. h(x)
float h(float(x))
{
    return (6*x+4);
}

int main()  //programi kryesor
{
    int i;
    long double a,b,d,n,I=0,J=0,A,K=0,E=0;
    cout<<" Jepet f(x)= x^3 + 2x^2 - 4x - 5 "<<endl;
    cout<<"vendos limitin e poshtem "<<endl;
    cin>>a;
    cout<<"vendos limitin e siperm "<<endl;
    cin>>b;
    cout<<"vendosni numrin e intervaleve : "<<endl;
    cin>>n;
    d=(b-a)/n;

    //hapat per zgjidhjen
    for(i=1;i<n;i++)
    {
        if((i%2)!=0)
        {
            I=I+f(a+(i*d));
        }
    }

    for(i=2;i<n-1;i++)
    {
        if((i%2)==0)
        {
            J=J+f(a+(i*d));
        }
    }

    A=(d/3)*(f(a)+(4*I)+(2*J)+f(b));

    //afishimi i vlerave 
    cout<<"vlera eshte : "<<endl;
    cout<<A<<endl;

    //llogaritja e gabimit
    E=-((b-a)*d*d*d*d*6/180);

    //gabimi total
    cout<<"gabimi total eshte : "<<endl;
    cout<<E<<endl;

    return 0;
}

/*
jepet f(x)= x^3 + 2x^2 - 4x - 5
vendos limit
0
jep Limit
5
numri i intervaleve:
100
do dale vlera :
122.917
dhe rezultati i kerkuar :
-1.04167e-06
*/