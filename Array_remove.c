#include<stdio.h>
int main()
{
    int n; //array size
    scanf("%d", &n);
    int arr[n];  //array declear 
    for(int i=0; i<n; i++)  //array input
    {
        scanf("%d", &arr[i]);
    }

    int idx; //index input
    scanf("%d", &idx);

    for(int i=idx; i<n-1; i++) //starts from index , it will continue till n-1 

    {
        arr[i] = arr[i+1]; //in index no 1 there will intert next index's value 
    }
    n--;  //one index will be decrease. size will be size-1 so , n--
    for(int i=0; i<n; i++)//array print
    {
        printf("%d ", arr[i]);
    }
    return 0;
}//array removing