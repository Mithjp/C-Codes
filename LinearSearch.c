#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,i,key,found=0;
    printf("Enter the number of elements");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the key you want to search");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(arr[i]==key){
            printf("Element found at %d (index %d)",i+1,i);
            found=1;
            break;
        
        }
    }
    if(!found){
        printf("Element not found");
    }
    return 0;
}