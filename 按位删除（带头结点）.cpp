//按位序删除（带头结点）
bool ListDelete(LinkList &L,int i,ElemType){
	if(i<1)
		return false;
	LNode *p;			//指针p指向当前扫描结点
	int j=0;			//记录当前p指向的是第几个结点
	p = L;				//指向头结点
	while(p!==NULL && j<i-1){
		p=p->next;
		j++;
	}
	if(p==NULL)
		return false;
	LNode *q = p->next;	//令q指向被删除结点
	e = q->data;		//用e返回元素的值
	p->next = q->next;	//将*q结点从链中断开
	free(q);			//释放空间
	return true;		//删除成功
}