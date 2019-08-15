#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target) {

    int min = 2147483647;
    int i = 0;
    for (i = 0; i < numsSize; i++) {
        if (nums[i] < min)
            min = nums[i];
    }
    int max = target - min;
    int len = max - min + 1;   //ȷ��hash����
    int *table = (int*)malloc(len*sizeof(int));
    int *indice = (int*)malloc(2*sizeof(int));
    for (i = 0; i < len; i++) {
        table[i] = -1;         //hash��ֵ
    }
    for (i = 0; i < numsSize; i++) {
        if (nums[i]-min < len) {
            if (table[target-nums[i]-min] != -1) {        //�������Ϊtarget
                indice[0] = table[target-nums[i] - min];
                indice[1] = i;
                return indice;
            }
            table[nums[i]-min] = i;
        }
    }
    free(table);
    return indice;
}
    
int main() {
	int a[4] = {2,7,11,13};
    int tag = 9;
    int *num = twoSum(a,4,tag);
    printf("%d-%d",num[0],num[1]);
    return 0;
    }
