// Created by Yevhen Danylchenko on 21.06.2025. This file for function of const number for Explicit type casting

#pragma once

#include <iostream>
#include <string>

namespace MyConst {
	void AddNumber(double* ptr) {
		int number;
		std::cout << "¬ведiть цiле число: " << std::endl;
		std::cin >> number;

		*ptr += static_cast<double>(number);

		std::cout << "–езультат: " << *ptr << std::endl;
	}
}
