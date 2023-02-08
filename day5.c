// #include<stdio.h>
// #include<stdbool.h>
// #include<limits.h>

// bool pattern132(int* nums, int size){
//     int n = size - 1, top = n, third = INT_MIN;

//     for (int i = n - 1; i >= 0; i--) {
//         if (nums[i] < third) return true;
//         while (top < n && nums[i] > nums[top]) third = nums[top++];
//         nums[--top] = nums[i];
//     }
    
//     return false;
// }

// int main(){
//     int arr[] = {3,5,0,3,4};
//     printf(pattern132(arr, sizeof(arr)/4) ? "true" : "false");
// }

#include<stdio.h>
void printPattern(int num){
    int print = 1;
    for(int row = 1; row <= num; row ++){
        for(int col = 1; col <= row; col ++){
            if(col % 2 == 0){
                printf("%d ", print);
                print ++;
            }
            else{
                printf("%d ", print);
                print ++;
            }
        }
        printf("\n");
    }
}

void main(){
    printPattern(5);
}