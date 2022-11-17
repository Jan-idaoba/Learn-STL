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
// begin        // ������ͷ������㣩
// end          // ������β�����յ㣩
// rbegin       // �������������㣩
// rend         // ������������յ㣩
// cbegin       // const ������ͷ������㣩
// cend         // const ������β�����յ㣩
// crbegin      // const ���������ͷ������㣩
// crend        // const ���������β�����յ㣩
// ===============Capacity==============
// size         // ��ʼ��ʱ�Ĵ�С���޷��仯��
// max_size     // ��ʼ��ʱ�Ĵ�С���޷��仯��
// empty        // �Ƿ��ǿ�����
// ===============Element access==============
// operator[]   // 
// at           // ȡ�ڼ���Ԫ��
// front        // 
// back         // 
// data         // ָ�������ָ��
// ===============Modifier==============
// fill         // �������
// swap         // ��������

// Non-memberfunction overloads
// get          // ȡ����

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

    // begin        // ������ͷ������㣩
    // end          // ������β�����յ㣩
    for (std::array<int, 10>::iterator it = arr.begin(); it != arr.end(); ++it) 
    {
        iIndexAnd += 10;
        *it = iIndexAnd;
    }

    // cbegin       // const ������ͷ������㣩
    // cend         // const ������β�����յ㣩
    for (std::array<int, 10>::const_iterator it = arr.cbegin(); it != arr.cend(); ++it)
    {
        std::cout << *it << std::endl;
    }

    // rbegin       // �������������㣩
    // rend         // ������������յ㣩
    for (std::array<int, 10>::reverse_iterator it = arr.rbegin(); it != arr.rend(); ++it)
    {
        std::cout << *it;
        std::cout << std::endl;
    }

    // crbegin      // const ���������ͷ������㣩
    // crend        // const ���������β�����յ㣩
    for (std::array<int, 10>::const_reverse_iterator it = arr.crbegin(); it != arr.crend(); ++it)
    {
        std::cout << *it << std::endl;
    }

    // ��&β
    std::cout << arr.front() << std::endl;
    std::cout << arr.back() << std::endl;

    // ���齻��
    arr.swap(arr2);

    // get��ʹ��
    std::cout << std::get<3>(arr) << std::endl;
    std::cout << std::get<9>(arr2) << std::endl;

    system("pause");
    return 0;
}

