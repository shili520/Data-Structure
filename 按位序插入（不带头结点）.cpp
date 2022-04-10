//按位序插入（不带头结点）<其实与带头结点类似，只是多加了一步将新建的结点指向第一个结点（功能与头结点似）>
typedf struct LNode{    //定义单链表节点类型
	ElemType data;		//数据域
	struct LNode *next; //指针域
}LNode,*LinkList;

bool ListInsert(LinkList &L, int i, EmlmType e){
	if (i<1)
		return false;
	//如果插入位置是第一个，那么直接插入即可
	if (i==1){
		LNode *s = (LNode *)malloc(sizeof(LNode));
		s->data = e;
		s->next = L;
		L = s;			//头结点更新，指向新的结点
		return true;
	}
	//下面操作与带头结点操作一模一样
	LNode *p;
	int j = 0;
	p = L;
	while (p!=NULL && j<i-1){
		p = p->next;
		j++;
	}
	if (p == NULL)
		return false;
	LNode *s = (LNode *)malloc(sizeof(LNode));
	s->data = e;
	s->next = p->next;
	p->next = s;
	return true;
}

