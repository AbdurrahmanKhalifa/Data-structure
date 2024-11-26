#ifndef LIST_H
#define LIST_H
#include "Node.h"
using namespace std;

class List
{
    private:
        Node * head;
        Node * tail;
        Node * cur;


        Node * get_Node(int a)
        {
            cur = head;
            while(cur != NULL)
            {
                if (cur->data == a)
                {
                    return cur;
                }
                else
                    cur = cur->next;
            }
            return NULL;
        }
    public:
        List() {
        head = tail = cur = NULL;
        }

        void add(int num){
            Node *node = new Node(num) ;
            if (head == NULL)
            {
                head = tail = node;
            }
            else
            {
                tail->next = node;
                node->prev = tail;
                tail = node;
            }
        }
        void display()
        {
            cur = head;
            if(cur == NULL)
                cout<<"Empty List\n";
            else{
                cout <<"[";
                while(cur != NULL)
                {
                    cout << cur->data <<",";
                    cur = cur->next;
                }
                cout <<"\b]\n";
            }
        }
        bool isInList(int a)
        {
            cur = head;
            while(cur != NULL)
            {
                if (cur->data == a)
                    return true;
                else
                cur = cur->next;
            }
            return false;
        }

        void InsertBefore(int NewData, int Data)
        {
            if (this->isInList(Data))
            {
                Node *NewNode_b = new Node(NewData) ;
                Node *ptr = this->get_Node(Data);
                if (ptr == head)
                {
                    head = NewNode_b;
                }
                NewNode_b->prev = ptr->prev;
                ptr->prev = NewNode_b;
                NewNode_b->next = ptr;
            }
            else
                cout << "Not found ...\n";
        }

        void InsertAfter(int NewData, int Data)
        {
            if (this->isInList(Data))
            {
                Node *NewNode_a = new Node(NewData) ;
                Node *ptr = this->get_Node(Data);
                if (ptr == tail)
                {
                    tail = NewNode_a;
                }
                NewNode_a->next = ptr->next;
                NewNode_a->prev = ptr;
                ptr->next = NewNode_a;
            }
            else
                cout << "Not found ...\n";
        }

        int GetCount()
        {
            cur = head;
            int num = 0;
            while (cur != NULL)
            {
                num ++;
                cur = cur->next;
            }
            return num;
        }

        int GetDataByIndex(int index)
        {
            cur = head;
            int num = 0;
            while (cur != NULL)
            {
                if (index == num)
                {
                    return cur->data;
                }
                else
                {
                    cur = cur->next;
                    num ++;
                }
            }
            cout << "Empty list or out of range index...\n";
            return -1;
        }

};

#endif // LIST_H
