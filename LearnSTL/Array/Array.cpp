#include <iostream>
#include <array>

// Member types 
// =======================
// value_type
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
// ===============iterator==============
// begin        // 迭代器头部（起点）
// end          // 迭代器尾部（终点）
// rbegin       // 反向迭代器（起点）
// rend         // 反向迭代器（终点）
// cbegin       // const 迭代器头部（起点）
// cend         // const 迭代器尾部（终点）
// crbegin      // const 反向迭代器头部（起点）
// crend        // const 反向迭代器尾部（终点）
// ===============Capacity==============
// size         // 初始化时的大小（无法变化）
// max_size     // 初始化时的大小（无法变化）
// empty        // 是否是空数组
// ===============Element access==============
// operator[]   // 
// at           // 取第几个元素
// front        // 
// back         // 
// data         // 指向数组的指针
// ===============Modifier==============
// fill         // 填充数据
// swap         // 交换数据

// Non-memberfunction overloads
// get          // 取数据

// Non-member class specializations
// tuple        
int main()
{
    std::array<int, 10> arr;
    
    arr.fill(5);
    std::array<int, 10> arr2(arr);

    int iIndex = arr.at(3);
    int iIndexAnd = 0;
    int iSize = arr.size();
    int iMaxSize = arr.max_size();
    bool bol = arr.empty();

    // begin        // 迭代器头部（起点）
    // end          // 迭代器尾部（终点）
    for (std::array<int, 10>::iterator it = arr.begin(); it != arr.end(); ++it) 
    {
        iIndexAnd += 10;
        *it = iIndexAnd;
    }

    // cbegin       // const 迭代器头部（起点）
    // cend         // const 迭代器尾部（终点）
    for (std::array<int, 10>::const_iterator it = arr.cbegin(); it != arr.cend(); ++it)
    {
        std::cout << *it << std::endl;
    }

    // rbegin       // 反向迭代器（起点）
    // rend         // 反向迭代器（终点）
    for (std::array<int, 10>::reverse_iterator it = arr.rbegin(); it != arr.rend(); ++it)
    {
        std::cout << *it;
        std::cout << std::endl;
    }

    // crbegin      // const 反向迭代器头部（起点）
    // crend        // const 反向迭代器尾部（终点）
    for (std::array<int, 10>::const_reverse_iterator it = arr.crbegin(); it != arr.crend(); ++it)
    {
        std::cout << *it << std::endl;
    }

    // 首&尾
    std::cout << arr.front() << std::endl;
    std::cout << arr.back() << std::endl;

    // 数组交换
    arr.swap(arr2);

    // get的使用
    std::cout << std::get<3>(arr) << std::endl;
    std::cout << std::get<9>(arr2) << std::endl;

    system("pause");
    return 0;
}

