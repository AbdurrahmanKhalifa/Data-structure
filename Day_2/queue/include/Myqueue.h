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
        front = rear = 0;
        qu = new int[s];
    }
    bool isEmpty()
    {
        return (front == rear);
    }
    bool isFull()
    {
        return ((front==0 && rear==size)||(front == rear+1));
    }

    bool enQueue(int d)
    {
        if (isFull())
            return 0;
        else
        {
            qu[rear] = d;
            if(rear==size)  rear=0;
            else            rear++;
            return 1;
        }
    }
    bool deQueue(int &d)
    {
        if (isEmpty())
            return 0;
        else
        {
            d = qu[front];
            if(front==size)  front=0;
            else
                front++;
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
            d = qu[rear-1];
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
                if (counter == size) counter=0;
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
