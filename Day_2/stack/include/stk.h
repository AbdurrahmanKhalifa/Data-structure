#ifndef STK_H
#define STK_H
#include "node.h"
using namespace std;
class stk
{
    node * top;
    int counter = 0;
    public:
        stk()
        {
            top = nullptr;
        }
        void push(int d)
        {
            node *new_node = new node(d);
            new_node->prev = top;
            top = new_node;
            counter ++;
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
                delete tmp;
                counter --;
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
            {
                cout<<"[";
                for(int i=0;i<counter;i++)
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
