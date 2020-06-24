#include "cpp14stl.h"

// function template
template <typename T>
T larger(T& a, T& b)
{
	return a > b ? a : b;
}

// class template
template <typename T>
class Point
{
private:
	T xPos, yPos;
public:
	Point(T x = 0, T y = 0)
		: xPos(x), yPos(y)
	{ }
	void ShowPosition() const
	{
		cout << '[' << xPos << ", " << yPos << ']' << endl;
	}

};

void Projects_01::m01_01()
{
	cout << "Template !" << endl;
	int a = 5;
	int b = 7;
	double c = 3.14;
	double d = 7.12;
	string first{ "To be or not to be" };
	string second{ "That is the question." };
	cout << larger<int>(a, b) << endl;
	cout << larger<double>(c, d) << endl;
	cout << larger<string>(first, second) << endl;
	cout << endl;

	Point<int> pos1(3, 4);
	pos1.ShowPosition();

	Point<double> pos2(2.4, 3.6);
	pos2.ShowPosition();

	Point<char> pos3('P', 'F');
	pos3.ShowPosition();
}