#pragma once

#include <iostream>

template <typename T>
class ArrayStack {
private:
	unsigned int length;
	unsigned int SP;  // Stack Pointer
	T* SS;			  // Stack Segment

public:
	ArrayStack(unsigned int size) {
		length = size;
		SS = new T[size];
		SP = 0;
	}

	~ArrayStack() {
		delete[] SS; // Important d'ajouter "[]" pour les arrays
	}

	bool push(T data) {
		if (SP < length) {
			SS[SP++] = data;
			return true;
		}

		return false;
	}

	void pop() {
		if (SP)
			SP--;
	}

	T top() {
		if (SP)  // 0 = faux, plus grand = vrai
			return SS[SP - 1];
		else
			return NULL;
	}

	unsigned int size() {
		return SP;
	}
};