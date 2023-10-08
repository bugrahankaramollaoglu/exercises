/* encapsulation is the act of making a class object private
encapsulation is done tru access specifiers (private-public-protected)
%99 of c++ standard libs are encapsulated */

/* bir classın içinde public mi yoksa private
değişkenleri mi önce yazacağız? bu konuda iki zıt metot var.
ama ideali 1) public 2) protected 3) privates */

#include <iostream>
using namespace std;

class Circle
{
private:
	double radius; // Private data member

public:
	// Constructor
	Circle(double r) : radius(r) {}

	// Getter for radius
	double getRadius() const
	{
		return radius;
	}

	// Setter for radius
	void setRadius(double r)
	{
		if (r > 0)
		{
			radius = r;
		}
	}

	// Calculate and return area
	double calculateArea()
	{
		return 3.14 * radius * radius;
	}
};

int main()
{
	Circle myCircle(5.0);

	cout << "Initial radius: " << myCircle.getRadius() << endl;

	myCircle.setRadius(7.0);
	cout << "Updated radius: " << myCircle.getRadius() << endl;

	double area = myCircle.calculateArea();
	cout << "Area: " << area << endl;

	return 0;
}
