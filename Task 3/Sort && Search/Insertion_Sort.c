#include<stdio.h>
#define N 11
void InsertionSort(int A[],int n);

void InsertionSort(int A[],int n){
	/*�򵥲�������*/
	int i,p,key;
	for(p=1;p<n;p++){
		key=A[p];       /*ȡ��δ���������еĵ�һ��Ԫ��*/
		for(i=p;i>0 && A[i-1]>key;i--)
			A[i]=A[i-1];   /*����������������Ԫ�رȽϲ�����*/
		A[i]=key;		/*�Ž����ʵ�λ��*/
		}	
	for(i=0;i<n;i++)
		printf("%d\n",A[i]);
		   
}

int main(){
	int A[N]={44,12,59,36,62,43,94,7,35,52,85};
	int j;
	printf("ԭ����\n");
	for(j=0;j<N;j++){
		printf("%d\n",A[j]);
	}
	printf("\n�����\n");
	InsertionSort(A,N);
	return 0;
}

