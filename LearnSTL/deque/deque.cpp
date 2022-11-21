#include <iostream>
#include <deque>

// Member types 
// =======================
// value_type
// allocator_type
// reference
// const_reference
// pointer
// const_pointer
// iterator
// const_iterator
// reverse_iterator
// const_reverse_iterator
// size_type
// difference_type

// Member functions
// ========================
// constructor      // 构造
// destructor       // 析构
// operator=        // 操作符重载
// ================
// iterator
// ========================
// begin            // 正向迭代器起点
// end              // 正向迭代器终点
// rbegin           // 反向迭代器起点
// rend             // 反向迭代器终点
// cbegin           // const正向迭代器起点
// cend             // const正向迭代器终点
// crbegin          // const反向迭代器起点
// crend            // const反向迭代器终点

// Capacity
// =========================
// size             // 大小
// max_size         // 最大长度
// resize           // 调整大小
// empty            // 清空双向队列
// shrink_to_fit    // 调整双向队列长度(自适应)

// Element access
// =========================
// operator[]       // 操作符重载[] 访问元素
// at               // 访问元素
// front            // 首个原始
// back             // 末尾元素

// Modifiers 
// =========================
// assign           // 容器分配内容
// push_back        // 末尾添加元素
// push_front       // 首部添加元素
// pop_back         // 末尾弹出
// pop_front        // 首部弹出
// insert           // 插入
// erase            // 擦除
// swap             // 队列进行交换
// clear            // 清除队列元素
// emplace          // 插入元素
// emplace_front    // 首部插入
// emplace_back     // 末尾插入

// Allocator
// =========================
// get_allocator

int main()
{
    std::deque<int> que(10,1);
    que.resize(15);
    que.shrink_to_fit();

    int i = 0;
    for (std::deque<int>::iterator it = que.begin(); it != que.end(); ++it) 
    {
        *it = ++i;
        std::cout << *it << std::endl;
    }

    std::cout << std::endl;
    for (int j = 0; j < que.size(); ++j)
    {
        que[j] = ++i;
        std::cout << que[j] << std::endl;
    }

    std::cout << std::endl;
    for (auto& q : que)
    {
        q = ++i;
        std::cout << q << std::endl;
    }

    std::cout << std::endl;
    for (int k = 0; k < 3; ++k) 
    {
        que.push_front(++i);
        que.push_back(++i);
    }
    for (auto re = que.rbegin(); re != que.rend(); ++re)
    {
        std::cout << *re << std::endl;
    }

    std::deque<int> de(5, 8);
    std::swap(de, que);
    for (auto a = que.cbegin(); a != que.cend(); ++a)
    {
        std::cout << *a << std::endl;
    }

    que.clear();
    system("pause");
}