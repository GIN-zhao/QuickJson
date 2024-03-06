#include <iostream>
#include <tuple>

#define JSON5_MEMBERS(...) \
	inline auto make_named_tuple() noexcept { \
		return std::tuple((const char*)#__VA_ARGS__, std::tie( __VA_ARGS__ )); } \
	inline auto make_named_tuple() const noexcept { \
		return std::tuple((const char*)#__VA_ARGS__, std::tie( __VA_ARGS__ )); }

class MyClass {
public:
    int x;
    float y;
    bool z;

    // 使用宏定义生成成员变量序列化辅助函数
    JSON5_MEMBERS(x, y, z)

    // 构造函数
    MyClass(int _x, float _y, bool _z) : x(_x), y(_y), z(_z) {}
};

int main() {
    MyClass obj(10, 3.14, true);

    // 调用成员变量序列化辅助函数
    auto tuple = obj.make_named_tuple();

    // 输出元组的内容
    std::cout<<std::get<1>(std::get<1>(tuple))<<std::endl;;
 

    return 0;
}
