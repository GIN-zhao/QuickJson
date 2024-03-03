#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <functional>
template <class T>
void dump_vector(const std::vector<T> &v, std::pair<typename std::vector<T>::iterator, typename std::vector<T>::iterator> range)

{
    for (typename std::vector<T>::const_iterator i = v.begin(); i != v.end(); ++i)
    {
        if (i == range.first)
            std::cout << "[";
        if (i == range.second)
            std::cout << "]";
        std::cout << *i << " ";
    }
    std::cout << std::endl;
}

//equal_range 返回的是一对迭代器
template <class T>
void equal_range_demo(const std ::vector<T> &original_vector, T value)
{
    std::vector<T> v(original_vector);
    std::sort(v.begin(),v.end());
    cout<<"Vector sorted by the default binary predicate<:"<<std::endl<<'\t';
    for (typename std::vector<T>::const_iterator i=v.begin();i！=v.end();++i)
        std::cout<<*i<<" ";
    std::cout>>std::endl<<std::endl;
    std::pair<typename vector<T>:: iterator,typename vector<T>::iterator>  result
    = std::equal_range(v.begin(),v.end(),value);
    std::cout<<"Result of equal_range with value="<<value<<":"<<std::endl;<<"\t";
    dump_vector(v,result);
    std::cout<<std::endl; 
}

int main()
{
    std::vector<int> v1, v2, v3;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);
    // assign的用法
    // #region
    // for (auto &v_1 : v1)
    //     std::cout << v_1 << "" << std::endl;
    // std::cout << std::endl;
    // v2.assign(v1.begin(), v1.end()); // void assign(InputIterator first, InputIterator last);
    // for (auto &v_2 : v2)
    //     std::cout << v_2 << "" << std::endl;
    // v3.assign(7, 4);
    // std::cout << std::endl;
    // for (auto &v_3 : v3) // void assign(size_type count, const Type& value);插入到矢量的元素的副本数。
    //     std::cout << v_3 << "" << std::endl;
    // v3.assign({5, 6, 7});
    // std::cout << std::endl;
    // for (auto &v_3 : v3) // void assign(size_type count, const Type& value);插入到矢量的元素的副本数。
    //     std::cout << v_3 << "" << std::endl;
    // #endregion

    // at的用法
    // std::cout << v1.at(3);
    // std::cout << std::endl;

    std::vector<int> c1;
    std::vector<int>::iterator c1_Iter;
    std::vector<int>::const_iterator c1_cIter;

    // #region
    //  c1.push_back(1);
    //  c1.push_back(2);
    //  std::cout << std::endl;
    //  c1_Iter = c1.begin();
    //  for (; c1_Iter != c1.end(); c1_Iter++)
    //      std::cout << " " << *c1_Iter;
    //  std::cout << std::endl;
    // c1_Iter=c1.begin();
    // *c1_Iter=20;
    // for(;c1_Iter!=c1.end();c1_Iter++)
    //     std::cout << " " << *c1_Iter;
    // #endregion
    // std::cout << std::endl;

    // #region
    // const int &i = v1.front();
    // std::cout << &i;
    // std::cout << std::endl;
    // #endregion

    // #region
    // std::vector<int>::iterator iter_1;
    // std::vector<int>::reverse_iterator Riter_1;
    // iter_1 = v1.begin();
    // Riter_1 = v1.rbegin();
    // std::cout << *iter_1 << std::endl;
    // std::cout << std::endl;
    // std::cout << *Riter_1 << std::endl;
    // #endregion

    // v1.reserve(20);
    // std::cout << v1.capacity() << std::endl;
    // v1.shrink_to_fit();
    // std::cout << v1.capacity() << std::endl;
    // size_t n = v1.size();
    // size_t是标准C库中定义的，它是一个基本的与机器相关的无符号整数的C/C + +类型，
    // 它是sizeof操作符返回的结果类型，该类型的大小可选择。
    // 其大小足以保证存储内存中对象的大小（简单理解为 unsigned int就可以了，64位系统中为 long unsigned int）。
    // 通常用sizeof(XX)操作，这个操作所得到的结果就是size_t类型。

    // std::vector<int>::iterator Iter;
    // std::vector<std::vector<int>> vv1;
    // vv1.emplace(vv1.begin(), std::move(v1));
    // if (vv1.size() != 0 && vv1[0].size() != 0)
    // {
    //     for (auto v : vv1[0])
    //         std::cout << v << std::endl;
    // }

    // std::vector<int> v5(5);
    // for (auto& i : v5)
    // {
    //     v5[i] = i;
    //     std::cout << i << "" << std::endl;

    // }
    // for (auto v : v5)
    // {
    //     std::cout << v << "" << std::endl;
    //     /* code */
    // }

    std::list<int> L;
    std::list<int>::iterator Iter;
    std::list<int>::iterator result1, result2;

    L.push_back(50);
    L.push_back(40);
    L.push_back(10);
    L.push_back(20);
    L.push_back(20);

    // std::cout << "L = ( ";
    // for (Iter = L.begin(); Iter != L.end(); Iter++)
    //     std::cout << *Iter << " ";
    // std::cout << ")" << std::endl;
    // auto is_even = [](int elem)
    // { return !(elem % 2); };
    // if (all_of(L.begin(), L.end(), is_even))
    //     std::cout << "all is even" << std::endl;
    // else
    //     std::cout << "not all is even" << std::endl;
    // int result = count(L.begin(), L.end(), 10);
    // std::cout << "The number of 20s in L:" << result << std::endl;

    return 0;
}
