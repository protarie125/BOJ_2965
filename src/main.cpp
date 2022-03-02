#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int a, b, c;
	cin >> a >> b >> c;
	auto g1 = b - a - 1;
	auto g2 = c - b - 1;

	cout << (g1 < g2 ? g2 : g1);

	return 0;
}