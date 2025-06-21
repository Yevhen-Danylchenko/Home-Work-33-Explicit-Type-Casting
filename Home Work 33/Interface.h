// Created by Yevhen Danylchenko on 21.06.2025. This file for choice any program for Explicit type casting

#pragma once

#include <iostream>
#include <string>

#include "MyFuncNumb.h"
#include "MyFuncTransport.h"
#include "MyConstNumb.h"

namespace MyInterface {
	using namespace MyFuncNumb;
	using namespace MyFuncTransport;
	using namespace MyFuncConst;

	void MyFuncInterface() {
		char choice = 'y';
		while (tolower(choice) != 'n') {
			std::cout << "1.) �����i� ������������ ���� ��������� ����� � �i���." << std::endl;
			std::cout << "2.) ����� ��������� �� ������������ �������������� ���i�." << std::endl;
			std::cout << "3.) �����i� ��� ������ const-����i�i������." << std::endl;
			std::cout << "������ ����������? (Y/N)." << std::endl;
			std::cin >> choice;

			switch (choice)
			{
			case '1':
				MyFuncNumber();
				break;
			case '2':
				MyFuncTrans();
				break;
			case '3':
				AddNumberConst();
				break;
			default:
				break;
			}
		}
	}
}