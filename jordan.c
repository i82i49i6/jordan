#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
    int i,j,k,n;
    printf("Enter the order of the matrix:");
    scanf("%d",&n);
    float a[n][n+1],x[n],r;
    printf("Enter the elements of the matrix: \n");
    for(i=1;i<=n;i++)
    {
         for(j=1;j<=n+1;j++)
         {
            printf("a[%d][%d]",i,j);
            scanf("%f", &a[i][j]);
         }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n+1;j++)
        {
            printf("%.2f \t", a[i][j]);
        }
        printf("\n");
    }
    for(i=1;i<=n;i++)
    {
        if(a[i][i]==0)
        {
            printf("Diagonal is zero");
            exit(0);
        }
        for(j=1;j<=n;j++)
        {
            if(i!=j)
            {
                r=a[j][i]/a[i][i];
                for(k=1;k<=n+1;k++)
                {
                    a[j][k]=a[j][k]-r*a[i][k];
                }

            }
        }
    }
    for(i=1;i<=n;i++)
    {
        x[i]=a[i][n+1]/a[i][i];
    }
    for(i=1;i<=n;i++)
    {
        printf("x[%d]=%0.2f\n");
    }

}