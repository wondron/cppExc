#ifndef ARRAY_H
#define ARRAY_H

#include "qdebug.h"

template <typename T>
class Array
{
private:
    T entry;
};

template <typename Type>
class GrowArray : public Array<Type>
{

};

template <typename Tp>
class Stack
{
    Array<Tp> ar;
};

Array<Stack<int>> asi;

#endif // ARRAY_H
