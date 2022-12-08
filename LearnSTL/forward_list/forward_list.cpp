#include <iostream>
#include <forward_list>
#include <algorithm>

// Member functions
// =========================
// constructor
// destructor
// operator=

// Iterator
// ====================
// before_begin         // 返回首节点迭代器
// begin                // 返回首节点迭代器
// end                  // 返回尾部迭代器
// cbefore_begin        // 
// cbegin               // 
// cend                 // 

// Capacity
// ====================
// empty
// max_size

// Element access
// ====================
// front                // 返回首节点

// Modifiers
// ====================
// assign               // 分配内容
// emplace_front        // 在开头构造和插入元素
// push_front           // 在开头插入元素
// pop_front            // 弹出开头元素
// emplace_after        // 构造和插入元素
// insert_after         // 插入元素
// erase_after          // 擦除元素
// swap                 // 交换
// resize               // 改变大小
// clear                // 清空

// Operations
// ====================
// splice_after         // 拼接
// remove               // 移除
// remove_if            // 移除满足条件的元素
// unique               // 删除重复值
// merge                // 合并排序列表
// sort                 // 排序
// reverse              // 反转列表

int main()
{
    std::forward_list<int> forwardlist{ 1,2,3,4,5,6,7,8 };
    std::forward_list<int> forlist{ 9,15,12,36,25,66,82,28,95,11 };

    auto it = std::begin(forwardlist);
    auto itend = std::end(forwardlist);
    int iSize = std::distance(it, forwardlist.end());   // 可以通过这个方式得到链表的size()

    std::advance(it, 5);        // 获取计数为5的迭代器
   // std::cout << *it << std::endl;

    auto iter = forwardlist.before_begin();

    forwardlist.emplace_front(88);
    forwardlist.emplace_after(it, 888);
    std::advance(it, 1);
    forwardlist.erase_after(it);
    forwardlist.swap(forlist);
    forwardlist.splice_after(forwardlist.begin(), forlist); // 将链表拼接

    forwardlist.remove(11);

    forwardlist.remove_if(      // 移除满足条件的元素
        [](const int a)
        {
            return a < 8;
        }
    );

    forwardlist.emplace_after(it, 16);
    forwardlist.emplace_after(it, 16);

    // 去重方式
    //std::unique(forwardlist.begin(), forwardlist.end());
    forwardlist.emplace_after(it, 88);
    forwardlist.unique();           // 去除重复元素
    forwardlist.sort();
    forwardlist.reverse();
    
    for (std::forward_list<int>::iterator iteror = forwardlist.begin(); iteror != forwardlist.end(); ++iteror)
    {
        std::cout << *iteror << std::endl;
    }

    forwardlist.assign(10, 9);


    system("pause");
}