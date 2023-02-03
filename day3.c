#include<stdio.h>
#include<stdbool.h>

bool monotonic(int* arr, int size){
    if(arr[0] < arr[size - 1]){
        for(int i = 1; i < size; i ++){
            if(arr[i] - arr[i - 1] >= 0)
            continue;
            else
            return false;
        }
    }
    else{
        for(int i = 1; i < size; i ++){
            if(arr[i] - arr[i - 1] <= 0)
            continue;
            else
            return false;
        }
    }
    return true;
}

void main(){
    int arr[] = {1,2,3,4000,4};
    bool ans = monotonic(arr, sizeof(arr)/4);
    printf(ans ? "true" : "false");
}