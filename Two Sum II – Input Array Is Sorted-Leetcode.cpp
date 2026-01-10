/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    int i=0,j=numbersSize-1,flag=1;
  int* a=(int*)malloc(2*sizeof(int));
    while(i<=j){
        if(numbers[i]+numbers[j]==target){
            a[0]=i+1;
            a[1]=j+1;
           *returnSize=2;
            return a;
             
             }
             else if(numbers[i]+numbers[j]>target){
                j--;
             }
             else{
                i++;
             }
         
    }
    return NULL;
}