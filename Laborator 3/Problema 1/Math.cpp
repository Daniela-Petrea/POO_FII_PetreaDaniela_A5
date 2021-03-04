#include "Math.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>


int Math::Add(int number1, int number2) {
	return number1 + number2;
}

int Math::Add(int number1, int number2, int number3) {
	return number1 + number2 + number3;
}

int Math::Add(double number1, double number2) {
	return number1 + number2;
}

int Math::Add(double number1, double number2, double number3) {
	return number1 + number2 + number3;
}

int Math::Mul(int number1, int number2) {
	return number1 * number2;
}

int Math::Mul(int number1, int number2, int number3) {
	return number1 * number2 * number3;
}

int Math::Mul(double number1, double number2) {
	return number1 * number2;
}

int Math::Mul(double number1, double number2, double number3) {
	return number1 * number2 * number3;
}

int Math::Add(int count, ...) {
	
	
		va_list vl;
		int sum = 0;
		va_start(vl, count);
		for (int i = 0; i < count; i++)
			sum += va_arg(vl, int);
		va_end(vl);
		return sum;
}

	char* Math::Add(const char* sir1, const char* sir2) {
		if (sir1 == nullptr || sir2 == nullptr )
			return nullptr;
		else
		{
		char* result = (char*)malloc((strlen(sir1) + strlen(sir2) + 1)* sizeof(char));
		memset(result, 0, (strlen(sir1) + strlen(sir2) + 1)* sizeof(char));
		memcpy(result, sir1, strlen(sir1));
		memcpy(result + strlen(sir1), sir2, strlen(sir2));
		return result; 
		}
		
	}
