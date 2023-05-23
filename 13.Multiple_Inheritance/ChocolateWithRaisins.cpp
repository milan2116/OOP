#include "ChocolateWithRaisins.h"

template<typename T>
ChocolateWithRaisins<T>::ChocolateWithRaisins(T id, int con) : Chocolate(id, con)
{
	
}

template<typename T>
ChocolateWithRaisins<T>::ChocolateWithRaisins(T id) : Chocolate(id, 20)
{
}
