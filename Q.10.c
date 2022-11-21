// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a[5];
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    int temp;
    for (int i=0;i<5;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                break;
            }
        }
    }
     
        printf("%d%d",a[0],a[1]);
    
    
    
}
