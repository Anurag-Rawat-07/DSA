#include<stdio.h>
#include<stdlib.h>

int main(){
    int arr[100], n, key, i, found = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d", &key);
    for(i=0; i<n; i++){
        if(arr[i] == key){
            found = 1;
            break;
        }
    }
    if(found){
        printf("Element %d found at index %d\n", key, i);
    }
    else{
        printf("Element %d not found in the array\n", key);
    }
    return 0;

}
