#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
using namespace std;

#define MAXSIZE 20
typedef int ElemType;//修改存放数据类型
typedef struct
{
    ElemType data[MAXSIZE];
    int length;
}SqList;

class array_list
{
public:
    SqList *L;
public:
    void InitList();
    bool ListEmpty();
    void ClearList();
    bool GetElem(int i,ElemType &e);
    int LocateElem(ElemType e);
    bool ListInsert(int i,ElemType e);
    bool ListDelete(int i,ElemType &e);
    int ListLength();
};


#endif // ARRAY_H
