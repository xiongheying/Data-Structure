
void Swap(ElementType *a,ElementType *b){
	ElementType t=*a; *a=*b; *b=t;
}

void PercDown(ElementType A[],int p,int N){
	/*�� N��Ԫ�ص���������A[p]Ϊ�����Ӷѵ���Ϊ����*/
	int Parent,Child;
	ElementType X;
	
	X=A[p];   /*ȡ��������ŵ�ֵ*/
	for(Parent=p;(Parent*2+1)<N;Parent=Child){
		Child=Parent*2+1;
		if((Child!=N-1)&&(A[Child])<A[Child+1])
			Child++;     /*Childָ�������ӽ��Ľϴ���*/
		if(X>=A[Child])  break;  /*�ҵ��˺���λ��*/
		else  /*���� X*/
			A[Parent]=A[Child];
	}
	A[Parent]=X;
}

void HeapSort(ElementType A[],int N){
	/*������*/
	int i;
	
	for(i=N/2-1;i>=0;i--)  /*��������*/
		PercDown(A,i,N);
	
	for(i=N-1;i>0;i--){
		/*ɾ������*/
		Swap(&A[0],&A[i]);
		PercDown(A,0,i);
	}
}


