#pragma once
#include "ValidatorForm.h"
#include "Field.h"

template <class T1, class T2>
class Courses2YearValidator : public ValidatorForm {
public:
	Courses2YearValidator(Field<short>* type1, Field<int>* type2) {
		m_field = type1;
		m_value = type2;
	};
private:
	Field<short>* m_field;
	Field<int>* m_value;
};