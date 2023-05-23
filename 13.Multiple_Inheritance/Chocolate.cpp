#include "Chocolate.h"

template<typename T>
inline Chocolate<T>::Chocolate(T id, int con) : identificator(id), content(con)
{

}

template<typename T>
Chocolate<T>::Chocolate(int con) : content(con)
{

}

template<typename T>
Chocolate<T>::Chocolate()
{
}
