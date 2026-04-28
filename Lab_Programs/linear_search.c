#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void linearSearch(int arr[], int n, int key){
    int i, found = 0;
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
}

void recursiveLinearSearch(int arr[], int n, int key, int index){
    if(index == n){
        printf("Element %d not found in the array\n", key);
        return;
    }
    else if(arr[index] == key){
        printf("Element %d found at index %d\n", key, index);
        return;
    }
    else{
        recursiveLinearSearch(arr, n, key, index+1);
    }
    
}


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
    // linearSearch
    clock_t start,end;

    start = clock();
    recursiveLinearSearch(arr, n, key, 0);
    end = clock();
    double time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Time taken by recursive linear search: %f seconds\n", time_taken);
    

    //recursiveLinearSearch
    start = clock();
    recursiveLinearSearch(arr, n, key, 0);
    end = clock();
    double time_taken2 = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Time taken by recurive linear search: %f seconds\n", time_taken2);





    return 0;

}
