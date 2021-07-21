#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <cmath>

using namespace std;

int main()
{
	string s, stemp;
	cin >> s;
	string a, b, c, d;
	int i = 1;
	double B, D, result;
	a = s[0];
	while (s[i] != 'E')
	{
		stemp = s[i++];
		b.append(stemp);
	}
	i++;
	c = s[i];
	i++;
	while (i < (int)s.length())
	{
		stemp = s[i++];
		d.append(stemp);
	}
	stringstream geek(b);
	geek >> B;
	stringstream aaaa(d);
	aaaa >> D;
	result = B * pow(10, D);
	printf("%c%f", a, result);
	return 0;
}