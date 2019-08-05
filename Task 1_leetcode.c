/*求众数* /
/*
给定一个大小为 n 的数组，找到其中的众数。众数是指在数组中出现次数大于 ? n/2 ? 的元素。

你可以假设数组是非空的，并且给定的数组总是存在众数。

示例 1:

输入: [3,2,3]
输出: 3

示例 2:

输入: [2,2,1,1,1,2,2]
输出: 2

*/
int majorityElement(int* nums, int numsSize){
    int i;
    int res;
    int count = 0;
    for(i=0;i<numsSize;i++)
    {
        if(count == 0)
        {
            res  = nums[i];
            count++;
        }
        else if(res == nums[i])
            count++;
        else
           count--;
    }
    return res;
}

//环形链表
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 //方法：快慢指针
bool hasCycle(struct ListNode *head) {
    
    struct ListNode *q = head;   //p为快指针 
    struct ListNode *p = head;   //q为慢指针
    while (p != NULL && p->next != NULL) {
        p = p->next->next;
		q = q->next;
        if (p == q) {
            return true;
        }
    }
    return false;
}

