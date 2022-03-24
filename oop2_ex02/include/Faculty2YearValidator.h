#pragma once
#include "ValidatorForm.h"
#include "Field.h"
#include "FacultyValue.h"

template <class T1, class T2>
class Faculty2YearValidator : public ValidatorForm {
public:
	Faculty2YearValidator(Field <FacultyValue>* type1, Field <int>* type2) {}

private:
	Field<FacultyValue>* m_field;
	Field<int>* m_value;
};