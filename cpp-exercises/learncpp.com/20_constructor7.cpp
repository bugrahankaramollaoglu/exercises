#include <iostream>
using namespace std;

class Ball
{
private:
	string m_color;
	double m_radius;

public:
	Ball()
	{
		m_color = "black";
		m_radius = 10.0;
	}

	Ball(string a)
	{
		m_color = a;
		m_radius = 10.0;
	}

	Ball(double a)
	{
		m_color = "black";
		m_radius = a;
	}

	Ball(string a, double b)
	{
		m_color = a;
		m_radius = b;
	}

	void print()
	{
		cout << "color: " << m_color << endl;
		cout << "radius: " << m_radius << endl;
	}
};

int main()
{
	Ball def{};
	def.print();

	Ball blue{"blue"};
	blue.print();

	Ball twenty{20.0};
	twenty.print();

	Ball blueTwenty{"blue", 20.0};
	blueTwenty.print();

	return 0;
}
