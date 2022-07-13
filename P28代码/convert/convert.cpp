#include <iostream>

using namespace std;

int stonetolb(int sts)
{
	return 14 * sts;
}
//写法问题前一张图片已经有过解释之后也不会再赘述
int main()
{
	int stone;
	cout << "Enter the weight in stone: ";
	cin >> stone;
	int pounds = stonetolb(stone);
	cout << stone << " stone = " << pounds << " pounds.";
	return 0;
}