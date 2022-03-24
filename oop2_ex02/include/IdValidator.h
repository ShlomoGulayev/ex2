#pragma once
#include "Validator.h"

class IDValidator : public Validator <uint32_t> {
public:
	IDValidator() = default;
	virtual bool validate(const uint32_t id, std::string& error_message) override;
private:
};