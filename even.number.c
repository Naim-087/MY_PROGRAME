#include<stdio.h>
int main ()
{

    printf("Enter an array: \n");
     int n;
    scanf("%d",&n);
    int a[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {

        printf("%d\n",a[i]);
        }
    }
}
