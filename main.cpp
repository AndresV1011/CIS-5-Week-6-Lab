#include <iostream>
// Lab 6 — Andres Valenzuela
// CIS 5 Week 06 · Even and odd

int main() {
	int evensum = 0;
	for (int i = 0; i <= 100; i += 2) { evensum = evensum + i; }

	int oddsum = 1;
	int i = 3;
	while (i <= 99) { oddsum = oddsum + i; i += 2; }
	std::cout << "evensum:" << evensum << "\n";
	std::cout << "oddsum:" << oddsum << "\n";
	return 0;
}
