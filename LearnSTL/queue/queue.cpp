#include <iostream>
#include <queue>

// Member functions
// =========================
// constructor
// empty
// size
// front
// back
// push
// emplace
// pop
// swap

// Non-member function overloads
// =========================
// relation operators
// swap(queue)

int main()
{
    std::queue<int> _queue;
    std::queue<int> _que;
    _queue.push(5);
    _queue.emplace(15);
    _que.push(11);
    _que.emplace(16);
    _queue.pop();
    int iSize = _queue.size();
    _queue.swap(_que);
    std::cout << iSize << std::endl;

    for (int i = 0; i < _queue.size(); ++i) 
    {
        std::cout << _queue.front() << std::endl;
        _queue.pop();
    }
    system("pause");
}
