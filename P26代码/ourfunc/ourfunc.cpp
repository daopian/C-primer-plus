#include <iostream>

using namespace std;

void simon(int n)
{
	cout << "Simon say touch your toes " << n << " times." << endl;
}
//我不太喜欢把原型和定义过程分开感觉这样太分散
int main()
{
	simon(3);
	cout << "Pick an integer: ";
	int count;
	cin >> count;
	simon(count);
	cout << "Done!" << endl;
	//模板函数类型推导，>=17

	template <typename T>

	auto value(T t) {

		return t;

	}
	return 0;
}
//书上的代码可能比较老反正不是很符合我的习惯
//我就对书上的代码格式进行了修改
