#include<stdio.h>
#include<math.h>
float raj(float);
main()
{
    float a[100],b[100],c=100.0;
    int i=1,j=0;
    b[0]=(cos(0)-3*0+1);
    printf("\nJepni vleren e fillimit:\n");
    scanf("%f",&a[0]);
    printf("\n\n Vlerat e iteracionit jane:\n\n ");
    while(c>0.00001)
    {
        a[j+1]=raj(a[j]);
        c=a[j+1]-a[j];
        c=fabs(c);
        printf("%d\t%f\n",j,a[j]);
        j++;
 
    }
    printf("\n Rrenja e funksionit te dhene eshte %f",a[j]);
}
float raj(float x)
{
    float y;
    y=(cos(x)+2)/3;
    return y;
}