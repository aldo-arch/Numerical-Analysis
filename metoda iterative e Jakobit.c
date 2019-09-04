#include<stdio.h>

#include<stdlib.h>

#include<math.h>

#include<stdlib.h>

int main()

{

    float a[20][20],x[20],e,big,temp,relerror,sum;

    int n,i,j,maxit,itr;

    char ch;


    printf("\n\nvendosni permasat e ekuacionit :: ");

    scanf("%d",&n);
    for(i=1;i<=n;i++)

    {

        printf("\n\nvendosni koeficientet e ekuacionit %d dhe RHS \n",i);

        for(j=1;j<=n+1;j++)

        scanf("%f",&a[i][j]);

    }

    printf("\n\njepni gabimin relativ dhe numrin e iteracioneve ::  \n");

    scanf("%f%d",&e,&maxit);

    for(i=1;i<=n;i++)

    x[i]=0;

    for(itr=1;itr<=maxit;itr++)

    {

        big=0;

        for(i=1;i<=n;i++)

        {

            sum=0;

            for(j=1;j<=n;j++)

             {

               if(i!=j

               )

                  sum=sum+a[i][j]*x[j];

              }

            temp=(a[i][n+1]-sum)/a[i][i];

            relerror=fabs((x[i]-temp)/temp);

            if(relerror>big)

               big=relerror;

            x[i]=temp;

        }

    if(big<=e)

    {

        printf("konvergjon ne%d iteracionet\n",itr);
        for(i=1;i<=n;i++)

        printf("\n%.4f\t",x[i]);

        return 0;

        exit(1);

    }


     }

  printf("nuk konvergjon ne  %d iteracion \n",maxit);

 return 0
 ;



 }
