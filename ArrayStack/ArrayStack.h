#pragma once

#include <iostream>

#define SIZE 10

class ArrayStack {
private:	
	unsigned int SP;  // Stack Pointer
	int SS[SIZE];     // Stack Segment

public:
	ArrayStack() {
		SP = 0;
	}

	bool push(int data) {
		if (SP < SIZE) {
			SS[SP++] = data;
			return true;
		}

		return false;
	}

	void pop() {
		if (SP)
			SP--;
	}

	int top() {
		if (SP)  // 0 = faux, plus grand = vrai
			return SS[SP - 1];
		else
			return NULL;
	}

	unsigned int size() {
		return SP;
	}
};