#include<stdio.h>
#define MAXN 100
#define ORDER 4
 
main()
{
    float ax[MAXN+1], ay [MAXN+1], diff[MAXN+1][ORDER+1], nr=1.0, dr=1.0,x,p,h,yp;
    int n,i,j,k;
    printf("\nVendosni vleren n:\n");
    scanf("%d",&n);
 
    printf("\nVendosni vlerat ne formen x,y:\n");
    for (i=0;i<=n;i++)
        scanf("%f %f",&ax[i],&ay[i]);
    printf("\nVendosni vlerat e x per te cilat kerkohen vlerat e y: \n");
    scanf("%f",&x);
    h=ax[1]-ax[0];
 
    //tashme bejme tabelen e diferencave
    //llogarisim...
    for (i=0;i<=n-1;i++)
        diff[i][1] = ay[i+1]-ay[i];
 
    //vazhdojne llogaritjet me rradhe 
    for (j=2;j<=ORDER;j++)
        for(i=0;i<=n-j;i++)
        diff[i][j] = diff[i+1][j-1] - diff[i][j-1];
 
    //gjejme x0
    i=0;
    while (!(ax[i]>x))
        i++;
 
    //tashme ax[i] eshte x0 dhe ay[i] eshte y0
    i--;
    p = (x-ax[i])/h;
    yp = ay[i];
 
    //tani nxjerrim interpolimin
    for (k=1;k<=ORDER;k++)
    {
        nr *=p-k+1;
        dr *=k;
        yp +=(nr/dr)*diff[i][k];
    }
    printf("\nKur x = %6.1f, i korrespondon y = %6.2f\n",x,yp);
}