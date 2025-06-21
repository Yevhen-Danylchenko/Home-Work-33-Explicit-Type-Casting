// Created by Yevhen Danylchenko on 21.06.2025. This file of function for Explicit type casting

#pragma once

#include <iostream>
#include <string>


namespace MyFuncNumb {
	void MyFuncNumber(){
		double num;
		std::cout << "¬ведiть дробове число: " << std::endl;
		std::cin >> num;

		int number = static_cast<int>(num);

		std::cout << "¬ведене число: " << num << std::endl;
		std::cout << "ѕеретворене число: " << number << std::endl;
	}
}
