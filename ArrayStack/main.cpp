#include <iostream>
#include "ArrayStack.h"

using namespace std;

int main() {
	ArrayStack pileA;
	ArrayStack pileB;

	pileA.push(42);
	pileB.push(404);

	cout << pileA.top() << "\n";
	cout << pileA.size() << "\n" << "\n";

	cout << pileB.top() << "\n";
	cout << pileB.size() << "\n";

	getchar();

	return 0;
}
