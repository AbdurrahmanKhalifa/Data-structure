#ifndef STK_H
#define STK_H
#include "node.h"
using namespace std;
class stk
{
    node * top;
    node * head;  // points to the first element
    public:
        stk()
        {
            top = head = nullptr;
        }
        void push(int d)
        {
            node *new_node = new node(d);
            if(head==nullptr)
                head = new_node;

            new_node->prev = top;
            top = new_node;
        }
        bool pop(int &d)
        {
            if(top == NULL)
                return 0;
            else
            {
                d = top->data;
                node *tmp = top;
                top = top->prev;
                if (top == nullptr)
                    head = nullptr;
                delete tmp;
                return 1;
            }
        }
        bool peek(int &d)
        {
            if(top == NULL)
                return 0;
            else
            {
                d = top->data;
                return 1;
            }
        }
        void display()
        {
            node *cur = top;
            if (cur == nullptr)
                cout<<"Empty...\n";
            else
            {   cout<<"[";
                while (cur != nullptr)
                {
                    cout<<cur->data<<",";
                    cur = cur->prev;
                }
                cout<<"\b]\n";
            }
        }

    protected:

    private:
};

#endif // STK_H
