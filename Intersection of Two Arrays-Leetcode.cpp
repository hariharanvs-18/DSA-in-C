int comp(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int* intersection(int* nums1, int nums1Size,
                  int* nums2, int nums2Size,
                  int* returnSize) {

    qsort(nums1, nums1Size, sizeof(int), comp);
    qsort(nums2, nums2Size, sizeof(int), comp);

    int* result = malloc((nums1Size < nums2Size ? nums1Size : nums2Size) * sizeof(int));
    *returnSize = 0;

    int l = 0, r = 0;

    while (l < nums1Size && r < nums2Size) {

        if (nums1[l] == nums2[r]) {

            
            if (*returnSize == 0 || result[*returnSize - 1] != nums1[l]) {
                result[*returnSize] = nums1[l];
                (*returnSize)++;
            }

            l++;
            r++;
        }
        else if (nums1[l] < nums2[r]) {
            l++;
        }
        else {
            r++;
        }
    }

    return result;
}