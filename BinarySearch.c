#include <stdio.h>
int main (){
    int n,i,key,l,r,mid;
    printf("Enter number of elements \n");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements in sorted format");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    l=0;
    r=n-1;
    printf("Enter the element to search");
    scanf("%d",&key);
    while(l<=r){
        mid=(l+r)/2;
        if(a[mid]==key){
            printf("element found at position %d and index %d",mid+1,mid);
        return 0;
    }
        else if(a[mid]<key){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
        }
    printf("Element not found");
    return 0;

    }
