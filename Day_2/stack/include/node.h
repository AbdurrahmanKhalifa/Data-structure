#ifndef NODE_H
#define NODE_H


class node
{
    public:
    node * prev;
    int data;

    node(int d=0) {
        data = d;
        prev = NULL;
    }


    private:
};

#endif // NODE_H
