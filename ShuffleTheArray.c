int* shuffle(int* nums, int numsSize, int n, int* returnSize){
   *returnSize = numsSize;
   int *shuffledArr = (int*)malloc(numsSize * sizeof(int));
   if (!shuffledArr){
       return NULL;
   }

   for (int i = 0; i < n; i++){
       shuffledArr[2 * i] = nums[i];
       shuffledArr[2 * i + 1] = nums[n + i];
   }
   return shuffledArr;
}
