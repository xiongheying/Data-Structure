/*���ӷ������ϣɢ����ײ����*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
#define N 20      //�������� 
#define Nhash 7  //��ϣ�۵����� 
#define N_R 200
 
//ÿ�����ݽ�� 
typedef struct node{
    int key;
    int num;
    struct node * next;
    struct node * pre;
}Node, *Pnode;
 
//��ϣ���� 
typedef struct Hash{
    Pnode link[N]; //ÿ������ı�ͷָ�� 
    int num;    //��ϣ�����ִ����� 
    int len;     //��ϣ���鳤�� 
}hash,*Phash;
 
Pnode IniPnode(int key){
    Pnode p=(Pnode)malloc(sizeof(Node));
    p->key=key;
    p->num=1;
    p->next=NULL;
    p->pre=NULL;
}
 
//ɢ��λ�ü��㣬��ǰʹ��ȡ������ 
int HashPos(int key){
    return key % Nhash;
}
 
Pnode FindNodePos(Phash h, int key){
    int pos=HashPos(key);
    Pnode link = h->link[pos];
    while(link->next != NULL && link->key != key){
        link=link->next;
    }
    return link;   
}
 
void IniHash(Phash *h, int len){
    int i;
    *h=(Phash)malloc(sizeof(hash));
    for(i=0;i<len;i++){
        (*h)->link[i] = IniPnode(-1); //ͷ��� 
    }
    (*h)->num =0;  //����Ϊ0 
    (*h)->len=len;
}
 
void Insert(Phash h, int key){
    Pnode p=FindNodePos(h,key);
    if(p->next != NULL) p->num ++;
    else{
        Pnode q =IniPnode(key);
        p->next = q;
        q->pre=p;      
    } 
     ++ h->num ;
}
 
Pnode Search(Phash h, int key){
    Pnode p=FindNodePos(h,key);
    if(p->next = NULL) return NULL;
    else return p;    
}
 
int Delete(Phash h, int key){
    Pnode p=FindNodePos(h,key);
    p->pre->next=p->next;
    free(p);
} 
 
void PrintLink(Pnode p){
    while(p->next!=NULL){
        printf("[key=%d|num=%d] -> ",p->next->key,p->next->num);
        p=p->next;
    }
    printf("\n");
}
 
void PrintHash(Phash h){
    int i;
    printf("��ϣ���й��н��%d��\n",h->num);
    for(i=0;i<h->len;i++){
        printf("%d\t",i);
        PrintLink(h->link[i]);
    }
}
 
void DeleteHash(Phash h){
    int i;
    for(i=0;i<h->num;i++){
        free(h->link[i]);
    }
    free(h); 
}
    
int main(){
    int i, a[N];
    Phash h=NULL; //��ϣ��������ͷ���  
    IniHash(&h,Nhash);  
           
    srand((unsigned)time(NULL));    
    for(i=0;i<N;i++){
        a[i]=rand()%N_R;
        Insert(h,a[i]);
        printf("%d ",a[i]);       
    }
    printf("\n"); 
    PrintHash(h);
    for(i=0;i<N;i++){
        Delete(h,a[i]);
    }       
    DeleteHash(h); 
    system("pause");
    return 0;
} 

