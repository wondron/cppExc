#ifndef STACK_H
#define STACK_H
#include <qdebug.h>

template <class Type>
class Stack
{
private:
    enum {Size = 10};
    int stackSize;
    Type* item;
    int top;

public:
    explicit Stack(int ss = Size);
    Stack(const Stack & st);
    ~Stack() {delete[]  item;}

    bool isempty() {return top == 0;}
    bool isfull() {return top == stackSize;}
    bool push( const Type & item);
    bool pop(Type & item);
    Stack<Type>& operator=(const Stack<Type> &st);
};

template <class Type>
Stack<Type>::Stack(int ss) : stackSize(ss), top(0)
{
    item = new Type[stackSize];
}

template <class Type>
Stack<Type>::Stack(const Stack &st)
{
    stackSize = st.stackSize;
    top = st.top;

    item = new Type[stackSize];

    for(int i = 0; i < stackSize; i++){
        item[i] = st.item[i];
    }
}

template <class Type>
bool Stack<Type>::push(const Type & st){
    if(top >= stackSize) return false;

    item[top++] = st;

    qDebug()<<"push:"<<top<<"value:"<<item[top-1];
    return true;
}

template <class Type>
bool Stack<Type>::pop(Type & st)
{
    if(top < 0) return false;

    st = item[--top];
    qDebug()<<"pop:"<<top;
    return true;
}

template <class Type>
Stack<Type>& Stack<Type>::operator=(const Stack<Type>& st)
{
    if(this == &st) return *this;

    delete item;
    stackSize = st.stackSize;
    top = st.top;

    item = new Type[stackSize];
    for(int i = 0; i < stackSize; i++){
        item[i] = st.item[i];
    }
    return *this;
}

#endif // STACK_H
