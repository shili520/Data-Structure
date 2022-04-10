typedef struct LNode{
	ElemType data;
	struct LNode *next;
}LNode,*LinkList;
//后插操作，在p结点之后插入元素e
bool InsertNextNode (LNode *p,ElemType e){
	if(p==NULL)
		return false;
	LNode *s = (LNode *)malloc(sizeof(LNode));
	if(s==NULL)			//判断内存是否申请失败
		return false;
	s->data = e;
	s->next = p->next;
	p->next = s;
	return true;
}

//后插操作，在第i个位置之后插入元素e（带头结点）
bool ListInsert(LinkList &L,int i,ElemType e){
	if(i<1)
		return false;
	LNode *p;				//指针p指向当前扫描结点
	int j=0;				//记录当前p指向的是第几个结点
	p = L;					//指向头结点
	while(p!=NULL && j<i-1){//循环找到第i-1个结点
		p=p->next;
		j++;
	}
	if(p==NULL)				//i值不合法
		return false;
	LNode *s = (LNode *)malloc(sizeof(LNode));
	s->data = e;
	s->next = p->next;
	p->next = s;
	return true
}