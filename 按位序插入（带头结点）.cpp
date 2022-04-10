//按位序插入（带头结点）
typedf struct LNode{    //定义单链表节点类型
	ElemType data;		//数据域
	struct LNode *next; //指针域
}LNode,*LinkList;

//在第i个位置插入元素e（带头结点）
bool ListInsert(LinkList &L,int i,ElemType e){ //&L是引用类型，调用之后传回参数（带回来）
	if(i<1)				//位序第一个位头结点
		return false;
	LNode *p;           //指针p指向当前扫描的结点
	int j = 0;			//记录当前p指向的是第几个结点
	p = L;				//L指向的是头结点，是位序第一个（第0个）
	
	//下面进行判断
	while (p!=NULL && j<i-1){//循环找到第i个位置（i-1个结点）
		p = p->next;
		j++;
	}
	if (p==NULL)		//如果找不到或者p的值为NULL说明i的值不合法
		return false;
	//插入操作的主体
	
	LNode *s = (LNode *)malloc(sizeof(LNode));//申请一个空间
	s->data = e;		//插入的值为e赋值给数据data
	s->next = p->next;	//吧p的后继结点赋值给s
	p->next = s;		//把p指向s，连接起来（注意：这句与上句不可以颠倒位置）
	return true;		//完成插入操作，返回true
}
