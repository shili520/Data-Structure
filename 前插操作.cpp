//前插操作：在p结点之前插入元素e（使用双指针，时间复杂度为O(n)，但是使用data互换，为O(1)）
bool InsertPriorNode (LNode *p,ElemType e){
	if(p==NULL)
		return false;
	LNode *s = (LNode *)malloc(sizeof(LNode))
	if(s==NULL)
		return false;
	s->next = p->next;
	p->next = s;			//后插入一个新结点
	s->data = p->data;
	p->data = e;			//后插改为前插只需要把data互换即可
	return true;
}

//在结点p之前插入结点s
bool InsertPriorNode (LNode *p,LNode *s){
	if(p==NULL && s==NULL)
		return false;
	s->next = p->next;
	p->next = s;
	ElemType temp = p->data;
	p->data = s->data;
	s->data = temp;
	return true;
 }