#include<stdio.h>
void main(){
    int arr[] = {1,3,2,5,4};
    int sum = arr[0], min = arr[0], max = arr[0];
    for(int i = 1; i < sizeof(arr)/4; i++){
        sum += arr[i];
        if(arr[i] < min)
        min = arr[i];
        if(arr[i] > max)
        max = arr[i];
    }
    printf("Max Sum: %d\n", sum-min);
    printf("Min Sum: %d\n", sum-max);
}