#include <iostream>
using namespace std;

class Point3d
{
	int m_x, m_y, m_z;

public:
	void setValues(int a, int b, int c)
	{
		m_x = a;
		m_y = b;
		m_z = c;
	}

	void print()
	{
		cout << "<" << m_x << ", " << m_y << ", " << m_z << ">";
	}

	bool isEqual(const Point3d &p)
	{
		if (m_x == p.m_x && m_y == p.m_y && m_z == p.m_z)
			return 1;
		return 0;
	}
};

int main()
{
	Point3d point;
	point.setValues(1, 2, 3);

	point.print();
	std::cout << '\n';
}
