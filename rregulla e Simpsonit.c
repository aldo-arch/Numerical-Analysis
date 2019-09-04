#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>

double simpson(double a, double b, int n);
double fk(double x);
//**********************************
int main()
{

double a,f,b;
int n;
//----------------
printf("Jepni vleren e  a, psh a=0\n a:");
scanf("%lf", &a);
//------------------------
printf("Jepni vleren e  n, psh n=7\n n:");
 scanf("%d",&n);
 printf ("Jepni vleren e  b, psh b=1\nb:");
 scanf("%lf", &b);
 f=simpson(a ,b , n); // 
 //rezultatet----------------
 printf("Rezultati eshte f=%7.2f\n",f);

}
//**********************************
double simpson(double a, double b, int n)
{
	double c= (a+b)/2.0;
	double h3= abs(b-a)/6.0;
	double result= h3*(fk(a)+4.0*fk(c)+fk(b));
	return result;



}
//**********************************
double fk(double x)
{
return x * x;
}
