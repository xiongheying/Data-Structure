
//����ָ�� 
class Solution{
public:
	bool hasCycle(ListNode *head){
		ListNode *p=head;
		ListNode *q=head;
		while(p!=null&&p->next!=null){
			p=p->next->next;  //pΪ��ָ�� 
			q=q->next;        //qΪ��ָ��
			if(p==q)
			{
				return true; 
			 } 
			 return false; 
		}
	}
};
//�㷨̫�����ڴ����26%���ˣ��ٶȻ���74%���� 
