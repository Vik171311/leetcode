#include<stdio.h>
//#define numSize 

//异或符
//A^A=0   A^0=A   A^B=B^A
int singleNumber1(int* nums, int numsSize) {
    int n = nums[0];
    for (int i = 1; i < numsSize; i++) {
        n ^= nums[i];
    }
    return n;
}

//for循环暴力算法
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
