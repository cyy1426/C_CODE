#include "seq.h"



//��ʼ��
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
//�ж��Ƿ���Ҫ����
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


//β��
void SeqListPushback(SeqList* s, SDatatype data)
{
	assert(s);
	check_capacity(s);

//����֮ǰ��֤�ռ��㹻

	s->array[s->size++] = data;
	//s->size++;
}

//βɾ
void SeqListPopback(SeqList* s)
{
	assert(s);
	if (SeqListEmpty(s) == 0)
		return;
	s->size--;
}


//ͷ��
void SeqListPushfront(SeqList* s, SDatatype data)
{
	assert(s);
	//�ж�����
	check_capacity(s);

	//��������
	int i = 0;
	for (i = s->size - 1; i >= 0; i--)
	{
		s->array[i + 1] = s->array[i];
	}
	s->array[0] = data;
	s -> size++;
}

//ͷɾ
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

//����λ�ò���
void SeqListInsert(SeqList* s, int pos, SDatatype data)
{
	assert(s);

	int i = 0;
	//�жϲ���λ���Ƿ����
	if (pos<0 || pos>s->size)
	{
		return;
	}
	//�ж�����
	check_capacity(s);


	//��������
	for (i = s->size - 1; i >= pos; i--)
	{
		s->array[i + 1] = s->array[i];
	}
	s->array[pos] = data;
	s->size++;

}


//����λ��ɾ��
void SeqListErase(SeqList* s, int pos)
{
	assert(s);
	int i = pos;
	//�ж�ɾ��λ���Ƿ����
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


//��ȡ˳�����ЧԪ�ظ���
int SeqListSize(SeqList* s)
{
	assert(s);
	return s->size;
}

//��ȡ˳�������
int SeqListCapacity(SeqList* s)
{
	assert(s);
	return s->capacity;
}

//�ж��Ƿ�Ϊ��
int SeqListEmpty(SeqList* s)
{
	return 0 == s->size;
}


//����˳�����Ԫ�ط����±�
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

//���
void SeqListclear(SeqList* s)
{
	assert(s);
	s->size = 0;
}

//����
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
//����
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

