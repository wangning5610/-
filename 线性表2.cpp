#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define LIST_INIT_SIZE 100
#define LISTINCREMENT  10
#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2

typedef struct Node{
	int    data;          
    Node  *next;
    int length;
    int listsize;
}Node,*LNode;

int Creat_List(LNode &p){
	LNode L=NULL;    //ͷָ�� 
	//LNode Head;
	LNode t;         //ʵʱָ�� 
	L=(Node *)malloc(sizeof(Node));  //ͷ��� 
	L->data=NULL;
	L->next=NULL; 
	t=L;
	int temp;
	printf("������һ����:");
	scanf("%d\n",&temp);
	LNode node;
	while(temp!=-1){	
		node=(Node *)malloc(sizeof(Node));
		t->next=node;
		node->data=temp;
		node->next=NULL;
		
		t=node;          //  ָ��ǰ�ڵ� 
		printf("������һ����:");
	    scanf("%d\n",&temp);	
	}
	printf("%d\n",L->data);
	printf("%d\n",t->data);
	return 0;
}

int Print_List(LNode &L){
	LNode p;
	p=L->next;
	printf("%d\n",p->data);
	printf("������");
}
int main(){
	LNode L;
	Creat_List(L);
	Print_List(L);
	return 0;
}
