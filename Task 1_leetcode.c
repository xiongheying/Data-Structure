/*������* /
/*
����һ����СΪ n �����飬�ҵ����е�������������ָ�������г��ִ������� ? n/2 ? ��Ԫ�ء�

����Լ��������Ƿǿյģ����Ҹ������������Ǵ���������

ʾ�� 1:

����: [3,2,3]
���: 3

ʾ�� 2:

����: [2,2,1,1,1,2,2]
���: 2

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

//��������
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 //����������ָ��
bool hasCycle(struct ListNode *head) {
    
    struct ListNode *q = head;   //pΪ��ָ�� 
    struct ListNode *p = head;   //qΪ��ָ��
    while (p != NULL && p->next != NULL) {
        p = p->next->next;
		q = q->next;
        if (p == q) {
            return true;
        }
    }
    return false;
}

