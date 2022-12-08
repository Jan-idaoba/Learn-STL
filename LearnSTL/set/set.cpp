#include <iostream>
#include <set>
#include <string>

// Member functions
// ==========================
// constructor
// destructor
// operator=

// Iterators
// ==========================
// begin
// end
// rbegin
// rend
// cbegin
// cend
// crbegin
// crend

// Capacity
// ==========================
// empty
// size
// max_size

// Modifiers
// ==========================
// insert
// erase
// swap
// clear
// emplace
// empalce_hint

// Observers
// ==========================
// key_comp
// value_comp

// Operations
// ==========================
// find
// count
// lower_bound
// upper_bound
// equal_range

int main()
{
	std::set<std::string> _set{ std::string("a"),std::string("b"), std::string("c") };

	_set.insert(std::string("z"));
	_set.emplace(std::string("y"));
	_set.emplace_hint(_set.begin(), std::string("q"));

	for (auto& i : _set)
	{
		std::cout << i << std::endl;
	}

	system("pause");
}
