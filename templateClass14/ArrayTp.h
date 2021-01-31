#ifndef ARRAYTP_H
#define ARRAYTP_H
#include "qdebug.h"

template <class T, int n>
class ArrayTp
{
private :
    T ar[n];
    int siz;

public:
    ArrayTp();
    explicit ArrayTp(const T&);
    explicit ArrayTp(const ArrayTp<T, n>&);
    int size();
    virtual T& operator[](int i);
    virtual T operator[](int i) const;
    virtual ArrayTp<T, n>& operator=(const ArrayTp<T, n> &);
};
template <class T, int n>
ArrayTp<T, n>::ArrayTp()
{
    qDebug()<<"initial ArrayTp()";
}

template <class T, int n>
ArrayTp<T, n>::ArrayTp(const T& v)
{
    for(int i = 0; i < n; i++){
        ar[i] = v;
    }

    qDebug()<<"heheheh"<< n;
}

template <class T, int n>
T& ArrayTp<T, n>::operator[](int i)
{
    if(i < 0 || i >=n){
        qDebug()<<"excess the range";
        std::exit(EXIT_FAILURE);
    }
    return ar[i];
}

template <class T, int n>
T ArrayTp<T, n>::operator[](int i) const
{
    if(i < 0 || i >=n){
        qDebug()<<"excess the range";
        std::exit(EXIT_FAILURE);
    }
    return ar[i];
}

template <class T, int n>
ArrayTp<T, n>& ArrayTp<T, n>::operator=(const ArrayTp<T, n> & st)
{

}
#endif // ARRAYTP_H
