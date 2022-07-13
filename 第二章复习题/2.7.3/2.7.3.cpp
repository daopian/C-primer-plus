#include <iostream>

using namespace std;

void out1(void)
{
	cout << "Three blind mice" << endl;
}
void out2(void)
{
	cout << "See how they run";
}

int main()
{
	out1();
	out1();
	out2();
	cout << endl;
	out2();
	return 0;
}