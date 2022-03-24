#include "IdValidator.h"

//-----------------------------------------------------------------------------
bool IDValidator::validate(const uint32_t id, std::string& error_message) {
	auto id_tmp = id;
	auto control_digit = id_tmp % 10;
	id_tmp /= 10;
	uint32_t sum = 0;
	for (int i = 0; i < 9; i++)
	{
		auto curr_digit= id_tmp % 10;
		curr_digit = i % 2 == 0 ? curr_digit*2 : curr_digit;
		sum += curr_digit > 9 ? (curr_digit % 10) + (curr_digit / 10) : curr_digit;
		id_tmp /= 10;
	}
	auto complete_ten = ((sum / 10) + 1) * 10;
	if (complete_ten - sum == control_digit)
		return true;
	error_message = "Wrong control digit!";
	return false;
}