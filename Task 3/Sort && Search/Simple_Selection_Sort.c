#include<stdio.h>
#define N 6
typedef int ElementType;

void Swap(ElementType *a,ElementType *b);
void SimpleSelectionSort(ElementType A[],int n);

void Swap(ElementType *a,ElementType *b){
	ElementType t=*a; *a=*b; *b=t;
}

void SimpleSelectionSort(ElementType A[],int n){
	/*��ѡ������*/
	int i,j,min;
	
	for(i=0;i<n-1;i++){
		/*Ѱ����СԪ��*/
		min=i;
		for(j=i+1;j<n;j++)
			if(A[j]<A[min])
				min=j;    /*min��¼��СԪ��λ��*/
			/*���� i ��Ԫ������СԪ�ؽ���*/
			Swap(&A[i],&A[min]);
	}
	for(i=0;i<n;i++)
		printf("%d\n",A[i]);
}

int main(){
	int A[N]={5,2,4,6,1,3};
	int j;
	printf("ԭ����\n");
	for(j=0;j<N;j++){
		printf("%d\n",A[j]);
	}
	printf("\n�����\n");
	SimpleSelectionSort(A,N);
	return 0;
}
