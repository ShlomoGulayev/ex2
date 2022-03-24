#include "NoDigitValidator.h"

//-----------------------------------------------------------------------------
bool NoDigitValidator::validate(const std::string name, std::string& error_message) {
	for (size_t i = 0; i < name.length(); i++)
	{
		if (isdigit(name[i]))
		{
			error_message = "Can't contain digits!";
			return false;
		}
	}
	return true;
}