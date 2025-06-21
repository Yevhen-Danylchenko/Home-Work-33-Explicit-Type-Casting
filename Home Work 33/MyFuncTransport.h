// Created by Yevhen Danylchenko on 21.06.2025. This file for function of class Transport for Explicit type casting

#pragma once

#include <iostream>
#include <string>

#include "Transport.h"

namespace MyFuncTransport {

	using namespace MyTransport;

	void MyFuncTrans() {
		Velo* obj = new Velo();
		Moto* obj_1 = new Moto();
		Auto* obj_2 = new Auto();

		Transport* test_obj = static_cast<Velo*>(obj);
		Transport* test_obj_1 = static_cast<Moto*>(obj_1);
		Transport* test_obj_2 = static_cast<Auto*>(obj_2);

		Transport* test = new Velo();
		Transport* test_1 = new Moto();
		Transport* test_2 = new Auto();

		if (Velo* tmp = dynamic_cast<Velo*>(test)) {
			tmp->info();
		}
		if (Moto* tmp = dynamic_cast<Moto*>(test_1)) {
			tmp->info();
		}
		if (Auto* tmp = dynamic_cast<Auto*>(test_2)) {
			tmp->info();
		}

		test_obj->info();
		test_obj_1->info();
		test_obj_2->info();

		obj->info();
		obj_1->info();
		obj_2->info();		
	}
}
