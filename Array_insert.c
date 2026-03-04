#include<stdio.h>
int main()
{
    int n;    //array size
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int idx, val;
    scanf("%d%d", &idx,&val);

    //1 index will be increase after user input so i>=idx+1 
    for(int i=n; i>=idx+1; i--)
    {
        arr[i] = arr[i-1]; //array element moved to right 

    }
    // arr[idx] = val; // submitted the value of user's input index
    for(int i=0; i<=n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}