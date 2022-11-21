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
// constructor      // ����
// destructor       // ����
// operator=        // ����������
// ================
// iterator
// ========================
// begin            // ������������
// end              // ����������յ�
// rbegin           // ������������
// rend             // ����������յ�
// cbegin           // const������������
// cend             // const����������յ�
// crbegin          // const������������
// crend            // const����������յ�

// Capacity
// =========================
// size             // ��С
// max_size         // ��󳤶�
// resize           // ������С
// empty            // ���˫�����
// shrink_to_fit    // ����˫����г���(����Ӧ)

// Element access
// =========================
// operator[]       // ����������[] ����Ԫ��
// at               // ����Ԫ��
// front            // �׸�ԭʼ
// back             // ĩβԪ��

// Modifiers 
// =========================
// assign           // ������������
// push_back        // ĩβ���Ԫ��
// push_front       // �ײ����Ԫ��
// pop_back         // ĩβ����
// pop_front        // �ײ�����
// insert           // ����
// erase            // ����
// swap             // ���н��н���
// clear            // �������Ԫ��
// emplace          // ����Ԫ��
// emplace_front    // �ײ�����
// emplace_back     // ĩβ����

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