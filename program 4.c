#include<stdio.h>

void main()
{
    int a[3],b[3],c[6],i,j;
    printf("\n Enter Value for a\n");

    for(i=0;i<3;i++)
        {
            printf("\Enter Value %d : ",i+1);
            scanf("%d",&a[i]);
        }
        printf("\n Enter Value for b\n");

        for(i=0;i<3;i++)
        {
            printf("\n Enter Value %d : ",i++);
            scanf("%d",&b[i]);
        }
        printf("\Enter Value for c\n");
        for (i=0;i<3;i++)
       {
           c[j]=a[i];
           j++;
       }
       for(i=o;i<3;i++)
       {
           c[j]=b[i];
           j++;
       }
       printf("\n Merged Elements are as follows\n");
       for(i=0;i<6;i++)
       {
           printf("\n %d",c[i]);
       }
    }
