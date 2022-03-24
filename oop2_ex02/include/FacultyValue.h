#pragma once
#include <iostream>

class FacultyValue {
public:
	FacultyValue() = default;
	FacultyValue(const int& faculty_number);
	int getFacultyNumber() const;
	FacultyValue& operator=(const FacultyValue& faculty_value);
private:
	int m_faculty_value;
};