#include<stdio.h>
#define N 6
typedef int ElementType;

void Swap(ElementType *a,ElementType *b);
void SimpleSelectionSort(ElementType A[],int n);

void Swap(ElementType *a,ElementType *b){
	ElementType t=*a; *a=*b; *b=t;
}

void SimpleSelectionSort(ElementType A[],int n){
	/*简单选择排序*/
	int i,j,min;
	
	for(i=0;i<n-1;i++){
		/*寻找最小元素*/
		min=i;
		for(j=i+1;j<n;j++)
			if(A[j]<A[min])
				min=j;    /*min记录最小元素位置*/
			/*将第 i 个元素与最小元素交换*/
			Swap(&A[i],&A[min]);
	}
	for(i=0;i<n;i++)
		printf("%d\n",A[i]);
}

int main(){
	int A[N]={5,2,4,6,1,3};
	int j;
	printf("原序列\n");
	for(j=0;j<N;j++){
		printf("%d\n",A[j]);
	}
	printf("\n排序后\n");
	SimpleSelectionSort(A,N);
	return 0;
}
