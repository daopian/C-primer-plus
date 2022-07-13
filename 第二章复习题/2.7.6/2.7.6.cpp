#include <iostream>

using namespace std;

int main()
{
	double ly;
	cout << "请输入距离（单位 光年）:";
	cin >> ly;
	cout << ly << " 光年= " << ly * 63240 << " 个天文单位";
	return 0;
}