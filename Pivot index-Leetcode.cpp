int pivotIndex(int* nums, int numsSize) {
    int i,sum=0,total=0;
    for(i-0;i<numsSize;i++){
        sum+=nums[i];
    }
          

int leftsum[numsSize],rightsum[numsSize], flag=1;
          for(i=0;i<numsSize;i++){
            if(i==0){
                total=0;
                leftsum[i]=total;
                rightsum[i]=sum-leftsum[i]-nums[i];
                if(leftsum[i]==rightsum[i]){
                     return i;
                     break;
                }
                
            }
            else{
                total+=nums[i-1];
               leftsum[i]=total;
                rightsum[i]=sum-leftsum[i]-nums[i];
                if(leftsum[i]==rightsum[i]){
                     flag=0;
                     break;
                }
            }
          }
if(flag==0)
return i;
else
return -1;
}