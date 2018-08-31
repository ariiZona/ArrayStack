#include <iostream>
#include "ArrayStack.h"

using namespace std;

int main() {
	ArrayStack<int> pileA(10);
	ArrayStack<char>* pileB = new ArrayStack<char>(10); // Équivalent à pileA

	pileA.push(42);	  // Instance: on utilise un point
	pileB->push('@'); // Pointeur: on utilise la "flèche"              
	pileB->push('*');

	cout << pileA.top() << "\n";
	cout << pileA.size() << "\n" << "\n";

	cout << pileB->top() << "\n";
	cout << pileB->size() << "\n";

	delete pileB;

	getchar();

	return 0;
}
