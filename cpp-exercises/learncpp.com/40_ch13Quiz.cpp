#include <iostream>
#include <cmath>

class Point2D
{
private:
	double m_x{0.0};
	double m_y{0.0};

public:
	Point2D()
	{
	}

	Point2D(double x, double y)
	{
		m_x = x;
		m_y = y;
	}

	double distanceTo(const Point2D &a) const
	{
		double distans{0};
		distans = std::sqrt(std::pow((m_x - a.m_x), 2) + std::pow((m_y - a.m_y), 2));
		return distans;
	}

	void print()
	{
		std::cout << "Point2D(" << m_x << ", " << m_y << ")\n";
	}
};

int main()
{
	Point2D first{};
	Point2D second{3.0, 4.0};
	first.print();
	second.print();
	std::cout << "Distance between two points: " << first.distanceTo(second) << '\n';

	return 0;
}
