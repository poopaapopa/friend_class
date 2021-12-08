#include <iostream>
using namespace std;

class Banana;
class Apple;
class Apple
{
public:
	void F_apple(Banana ob);
};
class Banana
{
	int x;
	int y;
public:
	Banana()
	{
		x = y = 777;
	}
	friend Apple;
};
void Apple::F_apple(Banana ob)
{
	cout << ob.x << "\n" << ob.y << "\n";
}

int main()
{
	Banana b;
	Apple a;
	a.F_apple(b);
	return 0;
}