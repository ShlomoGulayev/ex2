#include "FacultyValue.h"

//-----------------------------------------------------------------------------
FacultyValue::FacultyValue(const int& faculty_number) :m_faculty_value(faculty_number) 
{}
//-----------------------------------------------------------------------------
FacultyValue& FacultyValue::operator=(const FacultyValue& faculty_value) {
	if (this == &faculty_value)
		return *this;
	auto new_faculty_value = FacultyValue(faculty_value.getFacultyNumber());
	return new_faculty_value;
}
//-----------------------------------------------------------------------------
int FacultyValue::getFacultyNumber() const {
	return m_faculty_value;
}