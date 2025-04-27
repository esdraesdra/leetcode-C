#include <stdio.h>

int nums[] = {2,7,11,15}, target = 9,sum[2],returnSize;

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    for (int i = 0; i < numsSize; i++) {
        for (int j = 0; j < numsSize; j++) {
            if (nums[i] + nums[j]==target){
                sum[0] = nums[i];
                sum[1] = nums[j];
                *returnSize = 2;
                return sum;
            }
        }
    }
    return NULL;
}
    
int main(){

    int* total = twoSum(nums, 4, target, &returnSize);
    printf("[%i,%i]", total[0],total[1]);
}

/**aaa**/
