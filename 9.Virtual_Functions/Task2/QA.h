#ifndef _QA_H
#define _QA_H

#include "ITSpecialist.h"

class QA : public ITSpecialist {
	QATYPE type;
public:
	QA(const char* name, int intership, int salary, const char* type);
	void annual_raise();
};

#endif 
