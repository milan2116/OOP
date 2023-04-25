#include "ITSpecialist.h"

float ITSpecialist::GetAverageDifficulty()
{
	if (size == 0) {
		throw std::exception("No projects found");
	}
	float sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += projects[i].GetDifficulty();
	}
	return sum / size;
}

int ITSpecialist::GetNumberOfProjects()
{
	return size;
}

ITSpecialist::ITSpecialist(const char* name, int intership, int salary) : Worker(name, intership, salary), size(0), capacity(8)
{

}

ITSpecialist::~ITSpecialist()
{
	delete[] projects;
}

ITSpecialist::ITSpecialist(const ITSpecialist& other) : Worker(), size(other.size), capacity(other.capacity)
{
	
}
