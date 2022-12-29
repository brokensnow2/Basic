#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct student
{
    char name[20];
    int id;
    struct student *pNext;// 放在结构体最后
}ss;

ss *create()
{
    char name[20];
    int id;
    ss *pHead = NULL;
    ss *pEnd, *pNew;
    printf("plz input stu's id and name,if id == 0 will exit\n");
    scanf("%s%d",name,&id);
    if (id==0)
    {
        return NULL;
    }
    else
    {
        pNew = (ss*)malloc(sizeof(ss));
        pHead = pNew;
        pEnd = pNew;
        strcpy(pNew->name,name);
        pNew->id = id;
        while (id!=0)
        {
            scanf("%s%d",name,&id);
            if (id!=0)
            {
                ss *temp = pNew;
                pNew = (ss*)malloc(sizeof(ss));
                temp->pNext = pNew;
                pEnd = pNew;
                pNew->id = id;
                strcpy(pNew->name,name);
            }
            else
            {
                ss *temp = pNew;
                temp->pNext = NULL;
            }
            
        }
        return pHead; 
    }
    
}

void Printf(ss *p)
{
    printf("==============\n");
    while (p != NULL)
    {
        printf("%s\t%d\n",p->name,p->id);
        p = p->pNext;
    }
    
}

ss *Delete(ss* pHead,int id)
{
    if (id <= 0)
    {
        return pHead;
    }
    else if (id == 1)//删第一个
    {
        ss* temp = pHead->pNext;
        free(pHead);
        return temp;
    }
    else if (id > 1)//temp:要删的前一个  temp2:要删的那一个
    {
        ss* temp = pHead;
        for (int i = 1; i < id-1; i++)
        {
            temp = temp->pNext;
        }
        ss* temp2 = temp->pNext;
        if (temp2->pNext != NULL)
        {
            temp->pNext = temp2->pNext;
            free(temp2); 
        }
        else//删最后一个
        {
            temp->pNext = NULL;
        }
        

        return pHead;
    }
}

int insert(ss* pHead, int id)
{
    return 0;
}

int main()
{
    ss *p = create();
    Printf(p);
    p = Delete(p,2);
    Printf(p);
}