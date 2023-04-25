#include "Dog.h"
Dog::Dog(const char* name) : Animal(name, "Dog")
{

}
void Dog::talk() {
	std::cout << "Woof!" << "\n";
}