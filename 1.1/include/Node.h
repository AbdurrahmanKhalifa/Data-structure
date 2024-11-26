#ifndef NODE_H
#define NODE_H
using namespace std;

class Node
{
    public:
        Node * next;
        Node * prev;
        int data;

        Node(int d=0) {
        next = prev = NULL;
        data = d;
        }

    protected:

    private:
};

#endif // NODE_H
