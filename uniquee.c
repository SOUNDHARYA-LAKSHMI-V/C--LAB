#include<stdio.h>
int main()
{

    int a[10],i,n,in=0,j;
    printf("Enter number of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter elements%d :",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]==a[j])
                    scanf("%d",&a[i]);
            }
            for(i=0;i<n;i++)
            {
                if(a[i]!=0)
            {
            for(j=i+1;j<n;j++)
            {
                if(a[i]==a[j])

                    a[j]=0;
            }
            }

            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=0)
            printf("%d\t",a[i]);
    }
    return 0;
}
