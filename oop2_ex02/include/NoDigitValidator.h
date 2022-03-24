#pragma once
#include <string>
#include "Validator.h"

class NoDigitValidator : public Validator <std::string> {
public:
	NoDigitValidator() = default;
	virtual bool validate(const std::string name, std::string& error_message) override;
private:
};