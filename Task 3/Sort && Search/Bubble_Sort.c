#include<stdio.h>
#include<stdbool.h>
#define N 11
typedef int ElementType;
void Swap(ElementType *a,ElementType *b);
void BubbleSort(ElementType A[],int n);


void Swap(ElementType *a,ElementType *b){
	ElementType t=*a; *a=*b; *b=t;
	
}
void BubbleSort(ElementType A[],int n){
	/*ð������*/
	int P,i;
	bool flag;
	
	for(P=n-1;P>=0;P--){
		flag=false;      /*��Ǹô�ѭ�����Ƿ������������ޣ���˵��������������*/
		for(i=0;i<P;i++){   /*һ��ð��*/
			/*ÿ��ѭ���ҳ�һ�����Ԫ�أ������������Ҷ�*/
			if(A[i]>A[i+1]){
				Swap(&A[i],&A[i+1]);
				flag=true;    /*��ʶ�����˽���*/
			}	
		}
		if(flag==false) break;     /*��ȫ���޽�����������ѭ��*/
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
	BubbleSort(A,N);
	return 0;
}
