#include <stdlib.h>

int* runningSum(int* nums, int numsSize, int* returnSize) {
   *returnSize = numsSize;
   int* sumArr = (int*)malloc(numsSize * sizeof(int));
   if (!sumArr){
       return NULL;
   }
   sumArr[0] = nums[0];
   for (int i = 1; i < numsSize; i++) {
       sumArr[i] = sumArr[i - 1] + nums[i];
   }


   return sumArr;
}
