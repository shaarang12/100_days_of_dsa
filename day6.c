#include<stdio.h>
#include<stdlib.h>

int* sortArrayByParity(int* nums, int numsSize, int* returnSize){
    *returnSize = numsSize;
    int *new = malloc(numsSize*sizeof(int));
    int left = 0;
    int right = numsSize - 1;
    for(int i = 0; i < numsSize; i ++){
        if(nums[i] % 2 == 0)
            new[left ++] = nums[i];
        else
            new[right --] = nums[i];
    }
    return new;
}

int main(){
    int nums[] = {1,2,3,4,5,6,7};
    int* new = sortArrayByParity(nums, sizeof(nums)/4, nums);
    for(int i = 0; i < sizeof(nums)/4; i++){
        printf("%d ", new[i]);
    }
}