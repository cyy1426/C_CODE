#include "seq.h"



//初始化
void SeqListInit(SeqList* s, int initCapcity)
{
	assert(s);
	initCapcity = initCapcity <= 3 ? 3 : initCapcity;
	s->array = (SDatatype*)malloc(sizeof(SDatatype) * initCapcity);
	if (NULL == s->array)
		return;
	s->capacity = initCapcity;
	s->size = 0;

}
//判断是否需要扩容
void check_capacity(SeqList* s)
{
	if (s->size == s->capacity)
	{
		int newcapacity = 2 * (s->capacity);
		SDatatype* temp = (SDatatype*)realloc(s->array, newcapacity * sizeof(SDatatype));
		if (temp != NULL)
			s->array = temp;
		s->capacity = newcapacity;
	}
}


//尾插
void SeqListPushback(SeqList* s, SDatatype data)
{
	assert(s);
	check_capacity(s);

//插入之前保证空间足够

	s->array[s->size++] = data;
	//s->size++;
}

//尾删
void SeqListPopback(SeqList* s)
{
	assert(s);
	if (SeqListEmpty(s) == 0)
		return;
	s->size--;
}


//头插
void SeqListPushfront(SeqList* s, SDatatype data)
{
	assert(s);
	//判断容量
	check_capacity(s);

	//插入数据
	int i = 0;
	for (i = s->size - 1; i >= 0; i--)
	{
		s->array[i + 1] = s->array[i];
	}
	s->array[0] = data;
	s -> size++;
}

//头删
void SeqListPopfront(SeqList* s)
{
	assert(s);
	int i = 0;
	if (SeqListEmpty(s) == 0)
		return;
	for (i = 0; i < s->size; i++)
	{
		s->array[i] = s->array[i+1];
	}
	s -> size--;
}

//任意位置插入
void SeqListInsert(SeqList* s, int pos, SDatatype data)
{
	assert(s);

	int i = 0;
	//判断插入位置是否合理
	if (pos<0 || pos>s->size)
	{
		return;
	}
	//判断容量
	check_capacity(s);


	//插入数据
	for (i = s->size - 1; i >= pos; i--)
	{
		s->array[i + 1] = s->array[i];
	}
	s->array[pos] = data;
	s->size++;

}


//任意位置删除
void SeqListErase(SeqList* s, int pos)
{
	assert(s);
	int i = pos;
	//判断删除位置是否合理
	if (pos<0 || pos>s->size)
	{
		return;
	}
	for (i = pos; i < s->size; i++)
	{
		s->array[i] = s->array[i + 1];
	}
	s->size--;
}


//获取顺序表有效元素个数
int SeqListSize(SeqList* s)
{
	assert(s);
	return s->size;
}

//获取顺序表容量
int SeqListCapacity(SeqList* s)
{
	assert(s);
	return s->capacity;
}

//判断是否为空
int SeqListEmpty(SeqList* s)
{
	return 0 == s->size;
}


//查找顺序表中元素返回下标
int SeqListFind(SeqList* s, SDatatype data)
{
	assert(s);
	int i = 0;
	for (i = 0; i < s->size; i++)
	{
		if (s->array[i] == data)
			return i;
	}
	return -1;
}

//清空
void SeqListclear(SeqList* s)
{
	assert(s);
	s->size = 0;
}

//销毁
void SeqListDestory(SeqList* s)
{
	assert(s);
	if (s->array)
	{
		free(s->array);
		s->array = NULL;
		s->capacity = 0;
		s->size = 0;
	}
}

//////////////////////////////////////////////
//测试
void SeqListPrint(SeqList* s)
{
	assert(s);
	int i = 0;
	for (i = 0; i < s->size; i++)
	{
		printf("%d",s->array[i]);
	}
	printf("\n");
}
void test1()
{
	SeqList s;
	SeqListInit(&s, 3);
	SeqListPushback(&s, 1);
	SeqListPushback(&s, 2);
	SeqListPushback(&s, 3);
	SeqListPushback(&s, 4);
	SeqListPrint(&s);
	SeqListPopback(&s);
	SeqListPrint(&s);
	////SeqListPushback(&s, 3); 
	////SeqListPushback(&s, 4); 
	//SeqListPushback(&s, 5);
	//SeqListPushback(&s, 6);
	//
	//
	//SeqListPushfront(&s, 3); 
	////SeqListPopback(&s);
	//SeqListPrint(&s);
	//SeqListPopback(&s);
	//SeqListPrint(&s);
	//SeqListPopfront(&s);
	//SeqListPrint(&s);

	//SeqListInsert(&s, 3, 9); 
	//SeqListPrint(&s);
	//SeqListErase(&s, 4);
	//SeqListPrint(&s);
	///*int ret = SeqListFind(&s, 3); printf("%d\n", ret);*/  
	//SeqListPrint(&s);
	//SeqListclear(&s);
	//SeqListDestory(&s);

}

