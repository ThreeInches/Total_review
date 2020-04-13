//#include <iostream>
//
//using namespace std;
//
////模板参数分为类类型参数和非类型参数
////类类型参数：出现在模板参数列表中，跟在class或者typename的参数类型名称
////非类型参数：就是用一个常量作为类(函数)模板的一个参数，在类(函数)模板中可以将该参数当成常量使用
//
////注：
////1、浮点数，类对象以及字符串不允许作为非类型模板参数
////2、非类型模板参数必须在编译器就能确认结果
//
//namespace gwp
//{
//	//定义一个模板类型的静态数组
//	template<class T, size_t N= 10>
//	class array
//	{
//	public:
//		T& operator(size_t index)
//		{
//			return m_array[index];
//		}
//
//		const T& operator(size_t index) const
//		{
//			return m_array[index];
//		}
//
//		size_t size() const
//		{
//			return m_size;
//		}
//
//		bool empty() const
//		{
//			return (m_size == 0) ? true : false;
//		}
//	private:
//		T m_array[N];
//		size_t m_size;
//	};
//}
//
//int main()
//{
//
//	system("pause");
//	return 0;
//}
