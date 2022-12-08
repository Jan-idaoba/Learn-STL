#include <iostream>
#include <map>
#include <string>

// Member functions
// ===========================
// constructor
// destructor
// operator=

// Iterators
// ===========================
// begin
// end
// rbegin
// rend
// cbegin
// cend
// crbegin
// crend

// Capacity
// ===========================
// empty
// size
// max_size

// Element access
// ===========================
// operator[]
// at

// Modifiers
// ===========================
// insert
// erase
// swap
// clear
// emplace
// emplace_hint

// Obervers
// =========================== 
// key_comp
// value_comp

// Operations
// ===========================
// find
// count
// lower_bound
// upper_bound
// equal_range

// Allocator
// ===========================
// get_allocator

int main()
{
    std::map<int, std::string> _map;
    for (int i = 0; i < 6; ++i)
    {
        _map.insert(std::pair<int, std::string>(i, std::to_string(i)));
    }

    auto iter = _map.begin();
    std::advance(iter, 4);
    _map.erase(iter);

    for (auto& i : _map)
    {
        std::cout << i.first << ":" << i.second << std::endl;
    }

    for (std::map<int, std::string>::iterator it = _map.begin(); it != _map.end(); ++it)
    {
        it->second = std::to_string(8);
    }

    std::string strBuffer = _map.at(2);
    _map.emplace(std::pair<int, std::string>(10, std::to_string(10)));
    _map.emplace_hint(_map.end(), 9, std::to_string(9));

    for (auto& i : _map)
    {
        std::cout << i.first << ":" << i.second << std::endl;
    }

    system("pause");
}
