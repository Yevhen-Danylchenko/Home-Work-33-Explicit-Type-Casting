// Created by Yevhen Danylchenko on 21.06.2025. This file for function of const number for Explicit type casting

#pragma once

#include <iostream>
#include <string>

#include "MyFuncConst.h"

namespace MyFuncConst {
	using namespace MyConst;	

	void AddNumberConst() {
		const int number = 10;

		const void* rawPtr = &number;

		//���������� ������ const-������������
		//���������� reinterpret_cast
		double* ptr = const_cast<double*>(reinterpret_cast<const double*>(&number));

		AddNumber(ptr);

		std::cout << "���������: " << *ptr << std::endl;
	};
}
