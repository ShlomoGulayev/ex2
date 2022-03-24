#pragma once
#include <iostream>
#include "ValidatorForm.h"

template <class T>
class Validator : ValidatorForm {
public:
	Validator() = default;
	virtual bool validate(const T obj, std::string& error_message) = 0;
	~Validator() = default;
private:
};