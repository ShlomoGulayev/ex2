#pragma once
#include <iostream>
#include <vector>
#include "BaseField.h"
#include "Field.h"
#include "ValidatorForm.h"

class Form {
public:
	Form() = default;
	void addValidator(ValidatorForm* validator) {}
	void fillForm() {}
	bool validateForm() const { return true; }

	template <class T>
	void addField(Field<T>* field) {};
	
private:
	std::vector <BaseField> m_fields;
	std::vector <ValidatorForm*> m_validators;
};
/*
template <class T>
void Form::addField(Field<T>* field) {
	m_fields.push_back(field);
}*/

std::ostream& operator <<(std::ostream& os, const Form& form) { return os; }