#include <vector>
#include <algorithm>
#include <iostream>
#include <ctime>
using namespace std;
int RandomNumber() { return (std::rand() % 100); }

int main()
{
	srand(unsigned(std::time(0)));
	int N;
	cout << "Enter N: "; cin >> N;
	vector<int> a(N);
	generate(a.begin(), a.end(), RandomNumber);
	for (int& y : a)
		cout << y << "  ";
	cout << endl;
	int min_e = *min_element(a.begin(), a.begin() + N);
	int max_e = *max_element(a.begin(), a.begin() + N);
	cout << "Sum of min(" << min_e << ") and max(" << max_e << "): " << (min_e + max_e) / 2.0;
}