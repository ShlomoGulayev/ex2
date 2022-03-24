#pragma once
#include "BaseField.h"
#include "Validator.h"

template <class T>
class Field : public BaseField {
public:
	Field() = default;
	virtual void readInput() override;

	Field(const std::string& question) : m_answer(), m_validator() {
		m_question = question;
	};
	
	void addValidator(Validator<T>* validator) {}

private:
	T m_answer;
	Validator<T>* m_validator;
};
/*
template <class T>
std::istream& operator>>(std::istream& is, T obj) {
	is >> obj;
	return is;
}*/

template <class T>
void Field<T>::readInput() {
	std::cout << m_question << std::endl;
	//std::cin >> m_answer;
}