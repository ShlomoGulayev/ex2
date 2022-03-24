#pragma once
#include "Validator.h"

template <class  T>
class RangeValidator : public Validator<T> {
public:
	RangeValidator(T min, T max) : m_min(min), m_max(max) {}
	bool validate(const T obj, std::string& error_message);

private:
	T m_min;
	T m_max;
};

template <class T>
bool operator<(const T obj1, const T obj2) {
	return obj1 < obj2;
}

template <class T>
bool operator>(const T obj1, const T obj2) {
	return obj1 > obj2;
}

template <class T>
bool RangeValidator<T>::validate(const T obj, std::string& error_message) {
	if (obj < m_min || obj > m_max)
	{
		error_message = "Out of range";
		return false;
	}
	return true;
}