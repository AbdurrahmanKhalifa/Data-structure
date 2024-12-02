#ifndef TREE_H
#define TREE_H
using namespace std;

class node
{public:
    node * right;
    node * left;
    int data;

    node(int d=0)
    {
        left = right = nullptr;
        data = d;
    }
};
/////////////////////////////////////////////////
class tree
{
    node * root;
public:
    tree()
    {
        root = nullptr;
    }
    void add(int d)
    {
        node * new_node = new node(d);
        if (root == NULL)
            root = new_node;
        else
        {
            node * current = root;
            node * parent = NULL;
            while (current != NULL)
            {
                parent = current;
                if (current->data > d)
                    current = current->left;
                else
                    current = current->right;
            }
            if (parent->data > d)
                parent->left = new_node;
            else
                parent->right = new_node;

        }
    }

    void display()
    {
        display(root);
    }

    int getMaxDepth()
    {
        return getMaxDepth(root);
    }

private:
    void display(node * n)
    {
        if (n == NULL)
            return;
        display(n->left);
        cout<<n->data<<" ";
        display(n->right);
    }

    int getMaxDepth(node * n){
        if ((n->right == nullptr && n->left == nullptr) || n == nullptr)
        {
            return 0;
        }
        else if (n->right != nullptr && n->left == nullptr)
        {
            return 1+getMaxDepth(n->right);
        }
        else if (n->right == nullptr && n->left != nullptr)
        {
            return 1+getMaxDepth(n->left);
        }
        else
        {
            int right = 1+getMaxDepth(n->right);
            int left  = 1+getMaxDepth(n->left) ;
            if(right>left)
                return right;
            else
                return left;
        }
    }



};

#endif // TREE_H
