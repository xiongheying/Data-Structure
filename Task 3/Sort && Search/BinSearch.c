#include<stdio.h>
#define N 11
int  BinSearch(int num[], int x, int n) ;

int  BinSearch(int num[], int x, int n) 
{
	int  low, high, mid;
	low = 0;  
	high = n - 1;              
	while (low <= high){
   		mid = (high + low) / 2; 
		if (x > num[mid])  
			low = mid + 1; 
		else  if (x < num[mid]) 
			high = mid - 1; 
		else 
			return mid; 
	}
	return -1; 	
}

int main(){
	int A[N]={1,2,3,4,5,6,7,8,9,10,11};
	int j,x=8;
	int res;     
	printf("原序列\n");
	for(j=0;j<N;j++){
		printf("%d\n",A[j]);
	}
	res=BinSearch(A,x,N);    /*返回下标*/ 
	printf("返回x所在元素的下标:\n");
	printf("%d\n",res);
	return 0;
}
