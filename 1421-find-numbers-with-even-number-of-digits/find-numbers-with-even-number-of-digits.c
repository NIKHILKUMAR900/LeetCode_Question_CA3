int findNumbers(int* nums, int numsSize) {
    int evenCount = 0;

    for (int i = 0; i < numsSize; i++) {
        int num = nums[i];
        int digits = 0;

        while (num > 0) {
            num = num / 10;
            digits++;
        }

        if (digits % 2 == 0) {
            evenCount++;
        }
    }

    return evenCount;
}