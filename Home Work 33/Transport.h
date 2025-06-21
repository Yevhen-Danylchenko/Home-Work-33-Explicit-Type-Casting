// Created by Yevhen Danylchenko on 21.06.2025. This file for Class of Explicit type casting

#pragma once

#include <iostream>
#include <string>

namespace MyTransport {
	class Transport {
	private:
		std::string name;
	public:
		Transport(){}
		Transport(std::string name): name(name){}
		virtual void info() {
			std::cout << "��������� " << name << " ���������." << std::endl;
		}
	};

	class Velo : public Transport {
	private:
		std::string model;
	public:
		Velo(){}
		Velo(std::string name, std::string model): Transport(name), model(model){}
		void info() override {
			Transport::info();
			std::cout << "������ ���������� " << model << " ��������." << std::endl;
		}
	};

	class Moto : public Transport {
	private:
		std::string model;
	public:
		Moto() {}
		Moto(std::string name, std::string model) : Transport(name), model(model) {}
		void info() override {
			Transport::info();
			std::cout << "������ ��������� " << model << " ��������." << std::endl;
		}
	};

	class Auto : public Transport {
	private:
		std::string model;
	public:
		Auto() {}
		Auto(std::string name, std::string model) : Transport(name), model(model) {}
		void info() override {
			Transport::info();
			std::cout << "������ �������i�� " << model << " ��������." << std::endl;
		}
	};
}
