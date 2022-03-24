#pragma once
#include <iostream>
#include <string>
#include <vector>

class BaseField {
public:
	BaseField() = default;
	virtual void readInput() = 0;
	/*virtual bool ValidateField() = 0;
	virtual std::string getInput() const = 0*/;
	//BaseField(const std::string& question);
	~BaseField() = default;
protected:
	std::string m_question;
};