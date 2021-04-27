#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
double weight;
double height;
void solve()
{
	double res = weight / (height*height);
	printf("%.1lf\n", res);
	if (res > 25)cout << "PANG" << endl;
	else cout << "Hai Xing" << endl;
}
int main()
{
	cin >> weight >> height;
	solve();
	return 0;
}