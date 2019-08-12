#include<stdio.h>
#define N 11
void InsertionSort(int A[],int n);

void InsertionSort(int A[],int n){
	/*简单插入排序*/
	int i,p,key;
	for(p=1;p<n;p++){
		key=A[p];       /*取出未排序序列中的第一个元素*/
		for(i=p;i>0 && A[i-1]>key;i--)
			A[i]=A[i-1];   /*依次与排序序列中元素比较并右移*/
		A[i]=key;		/*放进合适的位置*/
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
	InsertionSort(A,N);
	return 0;
}

