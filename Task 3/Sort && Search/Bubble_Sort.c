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
	/*冒泡排序*/
	int P,i;
	bool flag;
	
	for(P=n-1;P>=0;P--){
		flag=false;      /*标记该次循环中是否发生交换，若无，则说明整个序列有序*/
		for(i=0;i<P;i++){   /*一趟冒泡*/
			/*每次循环找出一个最大元素，被交换到最右端*/
			if(A[i]>A[i+1]){
				Swap(&A[i],&A[i+1]);
				flag=true;    /*标识发生了交换*/
			}	
		}
		if(flag==false) break;     /*若全程无交换，则跳出循环*/
	}
	for(i=0;i<n;i++)
		printf("%d\n",A[i]);
}

int main(){
	int A[N]={44,12,59,36,62,43,94,7,35,52,85};
	int j;
	printf("原序列\n");
	for(j=0;j<N;j++){
		printf("%d\n",A[j]);
	}
	printf("\n排序后\n");
	BubbleSort(A,N);
	return 0;
}
