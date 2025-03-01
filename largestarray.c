#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int largestSumAfterKNegations(int nums[], int size, int k) {
    qsort(nums, size, sizeof(int), compare);

    for (int i = 0; i < size; i++) {
        if (nums[i] >= 0 || k == 0) 
            break;  
        nums[i] = -nums[i]; 
        k--; 
    }
    int min = nums[0];
    for (int i = 1; i < size; i++) {
        if (nums[i] < min) 
            min = nums[i];
    }

    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += nums[i];

    if (k % 2 == 1) 
        sum -= 2 * min;

    return sum;
}

int main() {
    int nums[] = {3, -1, 0, 2};
    int k = 3;
    int size = sizeof(nums) / sizeof(nums[0]);

    printf("Largest Sum after %d negations: %d\n", k, largestSumAfterKNegations(nums, size, k));

    return 0;
}
