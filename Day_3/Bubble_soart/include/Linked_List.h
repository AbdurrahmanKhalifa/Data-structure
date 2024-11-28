#ifndef LINKED_LIST_H
#define LINKED_LIST_H

using namespace std;

template <typename T>
class node
{
public:
  node * prev;
  node * next;
  T * data;

  node(T d)
  {
      prev = next = nullptr;
      this->data = new T(d);
  }
  ~node()
  {
      delete data;
  }


};

template <typename T>
class Linked_List
{
    node<T> * head;
    node<T> * tail;

public:
    Linked_List() {
        head = tail = nullptr;
    }
    void add(T data)
    {
        node<T> *new_node = new node<T>(data);
        if(tail != nullptr)
        {
            new_node->prev = tail;
            tail->next = new_node;
            tail = new_node;
        }
        else
            head = tail = new_node;
    }

    void display()
    {
        if(head == nullptr)
            cout<<"Empty\n";
        else
        {
            node<T> * cur=head;
            cout<<"[";
            while(cur != nullptr)
            {
                cout<<*(cur->data)<<",";
                cur = cur->next;
            }
            cout<<"\b]\n";
        }
    }

    void swap_items(T &n1 , T &n2)
    {
        T temp = n1;
        n1 = n2;
        n2 = temp;
    }

    void bubble_sort()
    {
        int iteration =0;
        int sorted = 0;
        node<T> *cur_in = head;
        node<T> *cur_out = head;
        while(cur_out != tail && sorted==0)
        {
            sorted =1;
            while(cur_in != tail)
            {
                if (*(cur_in->data)  >  *(cur_in->next->data))
                {
                    swap_items(*(cur_in->data) , *(cur_in->next->data));
                    sorted = 0;
                }
                cur_in = cur_in->next;
                iteration++;
            }
            cur_in = cur_out;
            cur_out = cur_out->next;
        }
        cout <<"Iteration = "<<iteration<<endl;
    }
 //----------------------------------------------------------------------------------------------------
    void special_swap(node<T> *n1, node<T> *n2)
    {
        n1->prev->next = n2;
        n2->next->prev = n1;

        n1->next = n2->next;
        n1->prev = n2;

        n2->prev = n1->prev;
        n2->next = n1;
    }
    void bubble_sort_special()
    {
        int iteration =0;
        int sorted = 0;
        node<T> *cur_in = head;
        node<T> *cur_out = head;
        while(cur_out != tail && sorted==0)
        {
            sorted =1;
            while(cur_in != tail)
            {
                if (*(cur_in->data)  >  *(cur_in->next->data))
                {
                    special_swap(cur_in , cur_in->next);
                    sorted = 0;
                }
                cur_in = cur_in->next;
                iteration++;
            }
            cur_in = cur_out;
            cur_out = cur_out->next;
        }
        cout <<"Iteration = "<<iteration<<endl;
    }




};

#endif // LINKED_LIST_H
