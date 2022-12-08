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
// before_begin         // �����׽ڵ������
// begin                // �����׽ڵ������
// end                  // ����β��������
// cbefore_begin        // 
// cbegin               // 
// cend                 // 

// Capacity
// ====================
// empty
// max_size

// Element access
// ====================
// front                // �����׽ڵ�

// Modifiers
// ====================
// assign               // ��������
// emplace_front        // �ڿ�ͷ����Ͳ���Ԫ��
// push_front           // �ڿ�ͷ����Ԫ��
// pop_front            // ������ͷԪ��
// emplace_after        // ����Ͳ���Ԫ��
// insert_after         // ����Ԫ��
// erase_after          // ����Ԫ��
// swap                 // ����
// resize               // �ı��С
// clear                // ���

// Operations
// ====================
// splice_after         // ƴ��
// remove               // �Ƴ�
// remove_if            // �Ƴ�����������Ԫ��
// unique               // ɾ���ظ�ֵ
// merge                // �ϲ������б�
// sort                 // ����
// reverse              // ��ת�б�

int main()
{
    std::forward_list<int> forwardlist{ 1,2,3,4,5,6,7,8 };
    std::forward_list<int> forlist{ 9,15,12,36,25,66,82,28,95,11 };

    auto it = std::begin(forwardlist);
    auto itend = std::end(forwardlist);
    int iSize = std::distance(it, forwardlist.end());   // ����ͨ�������ʽ�õ������size()

    std::advance(it, 5);        // ��ȡ����Ϊ5�ĵ�����
   // std::cout << *it << std::endl;

    auto iter = forwardlist.before_begin();

    forwardlist.emplace_front(88);
    forwardlist.emplace_after(it, 888);
    std::advance(it, 1);
    forwardlist.erase_after(it);
    forwardlist.swap(forlist);
    forwardlist.splice_after(forwardlist.begin(), forlist); // ������ƴ��

    forwardlist.remove(11);

    forwardlist.remove_if(      // �Ƴ�����������Ԫ��
        [](const int a)
        {
            return a < 8;
        }
    );

    forwardlist.emplace_after(it, 16);
    forwardlist.emplace_after(it, 16);

    // ȥ�ط�ʽ
    //std::unique(forwardlist.begin(), forwardlist.end());
    forwardlist.emplace_after(it, 88);
    forwardlist.unique();           // ȥ���ظ�Ԫ��
    forwardlist.sort();
    forwardlist.reverse();
    
    for (std::forward_list<int>::iterator iteror = forwardlist.begin(); iteror != forwardlist.end(); ++iteror)
    {
        std::cout << *iteror << std::endl;
    }

    forwardlist.assign(10, 9);


    system("pause");
}