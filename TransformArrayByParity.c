#include <stdlib.h>

int* transformArray(int* nums, int numsSize, int* returnSize) {
   *returnSize = numsSize;
   int *transformedArr = (int*)malloc(numsSize * sizeof(int));
   if (!transformedArr){
       return NULL;
   }
   int zeroCount = 0;
   for (int i = 0; i < numsSize; i++){
       if (nums[i] % 2 == 0){
           zeroCount++;
       }
   }
   for (int i = 0; i < numsSize; i++){
       if (i < zeroCount){
           transformedArr[i] = 0;
       } else{
           transformedArr[i] = 1;
       }
   }

   return transformedArr;
}
