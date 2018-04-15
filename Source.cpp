// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include <vector>
#include <random>
#include <ctime>
#include <iostream>
#include <list>
#include <algorithm>
#include <functional>
#include <array>

using namespace std;

int main()
{
	srand(time(NULL));
	cout << "podaj n" << endl;
	int n;
	cin >> n;
	vector<int> x;
	x.resize(n);

	cout << "for" << endl;

	for (int i = 0; i < n; i++) {
		x[i] = rand() % 40 - 20;
	}

	for (int i = 0; i < n; i++) {
		cout << x[i] << " ";
	}
	cout << endl << "iterator" << endl;

	std::vector<int>::iterator result = std::min_element(std::begin(x), std::end(x));
	std::cout << "min element at: " << std::distance(std::begin(x), result);
	cout << endl;

	std::vector<int>::iterator result2 = std::max_element(std::begin(x), std::end(x));
	std::cout << "max element at: " << std::distance(std::begin(x), result2);
	cout << endl;

	for (auto it = x.begin(); it != x.end(); ++it)
	{
		cout << *it << " ";
	}
	int usun;
	cout << endl << "podaj wartosc do usuniecia" << endl;
	cin >> usun;

	vector<int>::iterator it;
	for (it = x.begin(); it != x.end(); ++it)
	{
		if (*it == usun) {
			//x.erase(x.begin() + usun);
			break;
		}

	}
	cout << endl;
	x.erase(it);
	for (auto it = x.begin(); it != x.end(); ++it)
	{
		cout << *it << " ";
	}
	cout << endl;
	sort(x.begin(), x.end());
	for (auto a : x) {
		std::cout << a << " ";
	}
	reverse(x.begin(), x.end());
	std::cout << '\n';
	for (auto it = x.begin(); it != x.end(); ++it)
	{
		cout << *it << " ";
	}
	cout << endl << "abs" << endl;
	std::sort(x.begin(), x.end(), [](int i, int j) { return abs(i) < abs(j); });

	for (auto it = x.begin(); it != x.end(); ++it)
	{
		cout << *it << " ";
	}
	cout << endl << "lista" << endl;
	list<int> l;
	for (int i = 0; i < n; i++) {
		int x = rand() % 40 - 20;
		l.push_back(x);
	}
	//nie da sie metoda indeksowa
	for (auto v : l) {
		std::cout << v << " ";
	}
	cout << endl;
	cout << "iterator" << endl;
	for (list<int>::iterator i = l.begin(); i != l.end(); ++i) {
		cout << *i << " ";
	}

	//std::list<int>::iterator result = std::min(std::begin(l), std::end(l));
	//std::cout << "min element at: " << std::distance(std::begin(l), result);

	//std::vector<int>::iterator result = std::max(std::begin(l), std::end(l));
	//std::cout << "max element at: " << std::distance(std::begin(l), result);


	cout << endl << "podaj wartosc do usuniecia: " << endl;
	cin >> usun;
	list<int>::iterator it2;
	for (it2 = l.begin(); it2 != l.end(); ++it2)
	{
		if (*it2 == usun) {
			//x.erase(x.begin() + usun);
			break;
		}
	}
	l.erase(it2);
	for (list<int>::iterator i = l.begin(); i != l.end(); ++i) {
		cout << *i << " ";
	}
	cout << endl;
	l.sort();
	for (auto a : l) {
		std::cout << a << " ";
	}
	l.reverse();
	cout << endl;
	for (auto a : l) {
		std::cout << a << " ";
	}

	cin.ignore(2);
	return 0;
}

