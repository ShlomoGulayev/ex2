#pragma once
#include "Validator.h"

template <class T>
class MinValidator : public Validator <T> {
public:
	MinValidator(const T min) : m_min(min) {}
	virtual bool validate(const T obj, std::string& error_message) override;
private:
	T m_min;
};

/*
template <class T>
bool operator<(const T obj1, const T obj2) {
	return obj1 < obj2;
}*/

template <class T>
bool MinValidator<T>::validate(const T obj, std::string& error_message) {
	if (obj < m_min)
	{
		error_message = "Out of range";
		return false;
	}
	return true;
}