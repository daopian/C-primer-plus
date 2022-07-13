#include <iostream> 

using namespace std;

void time(int a, int b)
{
	cout << "Time:" << a << ":" << b;
}

int main()
{
	int h, min;
	cout << "请输入小时：";
	cin >> h;
	cout << "请输入分钟：";
	cin >> min;
	time(h, min);
	return 0;
}