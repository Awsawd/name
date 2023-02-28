bool containsDuplicate(int* nums, int numsSize){
    int i,j;
    for(i=0;i<numsSize;i++)
    {
        for(j = i+1;j < numsSize;j++)
        {
            if(nums[j] == nums[i])
            {
                return true;
            }
        }
    }
    return false;
}
