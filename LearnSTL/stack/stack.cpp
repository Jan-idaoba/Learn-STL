#include <iostream>
#include <stack>

// Member functions
// =======================
// empty
// size
// top
// push
// emplace
// pop
// swap

int main()
{
    std::stack<int> _stack;
    _stack.push(45);
    _stack.emplace(48);
    int iTop = _stack.top();

    _stack.push(55);
    int iSize = _stack.size();

    std::stack<int> _s(_stack);
    _s.push(66);

    _stack.swap(_s);

    for (int i = 0; i < _stack.size(); ++i)
    {
        std::cout << _stack.top() << std::endl;
        _stack.pop();
    }



    system("pause");
}