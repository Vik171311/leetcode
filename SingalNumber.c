#include<stdio.h>
//#define numSize 7

//逻辑运算符，异或
int singleNumber1(int* nums, int numsSize) {
    int n = nums[0];
    for (int i = 1; i < numsSize; i++) {
        n ^= nums[i];
    }
    return n;
}

//暴力求解
int singleNumber2(int* nums, int numsSize) {
    for (int i = 0; i < numsSize; i++)
    {
        int count = 0;
        for (int j = 0; j < numsSize; j++)
        {
            if (nums[i]==nums[j])
            {
                return nums[i];
            }
        }
    }
    return -1;
 }

int main() {
    int input1[7] = { 4,1,2,1,2,4,3 };
    int input2[5] = { 4,1,2,2,4 };
    printf("%d\n",singleNumber1(input1, 7));
    printf("%d\n", singleNumber2(input2, 5));
    return 0;
}