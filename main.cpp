//Stack
//LIFO
//consists of:
//stackArray, stackSize, top
//constructor, destructor, isFull, isEmpty, pop, push
#include <iostream>

using namespace std;

class StacK
{
private:
    int *stackArray;
    int stackSize;
    int top;
public:
    StacK(int size)
    {
        stackArray = new int[size];
        stackSize = size;
        top = -1;
    }
    ~StacK()
    {
        delete [] stackArray;
    }
    bool isFull()
    {
        if (top == stackSize-1)
            return true;
        else
            return false;
    }
    bool isEmpty()
    {
        if (top==-1)
            return true;
        else
            return false;
    }
    void push(int data)
    {
        if (isFull())
            cout << "stack is full" << endl;
        else
        {
            top++;
            stackArray[top] = data;
        }
    }
    int pop()
    {
        if (isEmpty())
            cout << "stack is empty" << endl;
        else
        {
            top--;
            return stackArray[top+1];
        }
    }
    void print_stack()
    {
        if (isEmpty())
            return;
        cout << "top --> ";
        for (int i=top;i>=0;i--)
        {
            cout << stackArray[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    StacK s(5);
    s.push(5);
    s.push(10);
    s.print_stack();
    s.pop();
    s.print_stack();
    s.push(6);
    s.push(100);
    s.push(75);
    s.print_stack();

    return 0;
}
