#ifndef MYQUEUE_H
#define MYQUEUE_H
using namespace std;

class Myqueue
{
    int size;
    int front;
    int rear;
    int * qu;
public:
    Myqueue(int s) {
        size = s;
        front = rear = -1;
        qu = new int[s];
    }
    bool isEmpty()
    {
        return (front == rear);
    }
    bool isFull()
    {
        return ((front==0 && rear==size-1)||(front == rear+1));
    }

    bool enQueue(int d)
    {
        if (isFull())
            return 0;
        else
        {
            if(rear==size-1)  rear=0;
            else            rear++;
            qu[rear] = d;
            return 1;
        }
    }
    bool deQueue(int &d)
    {
        if (isEmpty())
            return 0;
        else
        {
            if(front==size-1)  front=0;
            else
                front++;
            d = qu[front];
            return 1;
        }
    }
    bool Getfront(int &d)
    {
        if (isEmpty())
            return 0;
        else
        {
            d = qu[front];
            return 1;
        }
    }

     bool GetRear(int &d)
    {
        if (isEmpty())
            return 0;
        else
        {
            d = qu[rear];
            return 1;
        }
    }
    void display()
    {
        if(isEmpty())
            cout<<"Empty...\n";
        else
        {
            cout<<"[";
            int counter = front;
            while(counter != rear)
            {
                cout<<qu[counter]<<",";
                if (counter == size-1) counter=0;
                else counter++;
            }
            cout<<"\b]\n";
        }
    }

    ~Myqueue()
    {
        delete[] qu;
    }
};

#endif // MYQUEUE_H
