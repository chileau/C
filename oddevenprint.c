#include<stdio.h>
#include<conio.h>
int main(){
    int a[10], i, j, k=0, n, oddd[10], even[10];
    printf("Enter the data:");
    scanf("%d", &n);
    printf("Enter the data:");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++)
    {
        if(a[i]%2==0)
        {
            even[k]=a[i];
            k++;
        }
        else
        {
            odd[j]=a[i];
            j++;

        }
    }
    printf("Even Seq");
    for(i=0; i<k;i++){
        printf("\n%d", evn[i]);
        printf
    }
}
