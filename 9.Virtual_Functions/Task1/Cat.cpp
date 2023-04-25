#include "Cat.h"
Cat::Cat(const char* name) : Animal(name, "Cat")
{

}
void Cat::talk(){
	std::cout << "Meow!" << "\n";
}