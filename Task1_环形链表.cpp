
//快慢指针 
class Solution{
public:
	bool hasCycle(ListNode *head){
		ListNode *p=head;
		ListNode *q=head;
		while(p!=null&&p->next!=null){
			p=p->next->next;  //p为快指针 
			q=q->next;        //q为慢指针
			if(p==q)
			{
				return true; 
			 } 
			 return false; 
		}
	}
};
//算法太慢，内存击败26%的人，速度击败74%的人 
