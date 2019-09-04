#include<stdio.h>
main()
{
    float x[100],y[100],a,s=1,t=1,k=0;
    int n,i,j,d=1;
    printf("\n\nVendos numrin e termave ne tabele: ");
    scanf("%d",&n);
    printf("\n\n Jepni vlerat respektive te variablave x dhe y: \n");
    for(i=0; i<n; i++)
    {
        scanf ("%f",&x[i]);
        scanf("%f",&y[i]);
    }
    printf("\n\n Tabela qe propozuat eshte si me poshte :\n\n");
    for(i=0; i<n; i++)
    {
        printf("%0.3f\t%0.3f",x[i],y[i]);
        printf("\n");
    }
    while(d==1)
    {
        printf(" \n\n\n Vendosni vleren e x-it per te gjetur vleren e y perkates\n\n\n");
        scanf("%f",&a);
        for(i=0; i<n; i++)
        {
            s=1;
            t=1;
            for(j=0; j<n; j++)
            {
                if(j!=i)
                {
                    s=s*(a-x[j]);
                    t=t*(x[i]-x[j]);
                }
            }
            k=k+((s/t)*y[i]);
        }
        printf("\n\n Vlera respektive e variablit te y eshte: %f",k);
        printf("\n\n Deshiron te vazhdosh?\n\n Shtyp 1 per te vazhduar ose shtyp dicka tjeter per te mbyllur");
        scanf("%d",&d);
    }
}