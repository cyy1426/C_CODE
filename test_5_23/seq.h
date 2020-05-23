#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
typedef int SDatatype;
typedef struct SeqList
{
	SDatatype* array;  ///存放元素的空间大小，不够时扩容
	int capacity; //空间容量
	int size; //有效元素个数
}SeqList;
//typedef struct SeqList SeqList;

//初始化
void SeqListInit(SeqList* s, int initCapcity);


//尾插
void SeqListPushback(SeqList* s, SDatatype data);

//尾删
void SeqListPopback(SeqList* s);


//头插
void SeqListPushfront(SeqList* s, SDatatype data);

//头删
void SeqListPopfront(SeqList* s);

//任意位置插入
void SeqListInsert(SeqList* s,int pos,SDatatype data);

//任意位置删除
void SeqListErase(SeqList* s,int pos);

//获取顺序表有效元素个数
int SeqListSize(SeqList* s);

//获取顺序表容量
int SeqListCapacity(SeqList* s);

//判断是否为空
int SeqListEmpty(SeqList* s);


//查找顺序表中元素返回下标
int SeqListFind(SeqList* s,SDatatype data);

//销毁
void SeqListDestory(SeqList* s);

//测试方法
void TestSeqList();
void test1();

