#include <stdlib.h>

int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    int* answer = (int*)malloc(numsSize * sizeof(int));

    int leftProduct = 1;
    for (int i = 0; i < numsSize; i++) {
        answer[i] = leftProduct;
        leftProduct *= nums[i];
    }

    int rightProduct = 1;
    for (int i = numsSize - 1; i >= 0; i--) {
        answer[i] *= rightProduct;
        rightProduct *= nums[i];
    }

    return answer;
}