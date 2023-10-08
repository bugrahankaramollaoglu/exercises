#include <iostream>
using namespace std;

// const değişkenler tek satırda ilklendirilmelidir bc sonradan değiştirilemezler

// const int m_value; // error: const vars must be initialized with a value
// m_value = 5;	   //  error: const vars can not be assigned to

// bu sorunu çözmek için member-initialization-list denen şeyi kullaniyoruz

// normalde 3 şekilde bir değişkeni cppde ilklendirebiliyoduk: copy, direct, uniform
// copy initialization -> int a = 30;
// direct initialization -> int a(30);
// uniform initialization -> int a{30};

// classlarda ise memberlari yani class içerisindeki değişkenleri ilklendirmek için
// iki yol seçebiliyoruz: klasik assignment ve list initialize

// assignment

class Something
{
private:
	int m_value1{};
	double m_value2{};
	char m_value3{};

public:
	Something()
	{
		// These are all assignments, not initializations
		m_value1 = 1;
		m_value2 = 2.2;
		m_value3 = 'c';
	}
};

// member list initialization

class Something2
{
private:
	int m_value1{};
	double m_value2{};
	char m_value3{};

public:
	Something2() : m_value1{1}, m_value2{2.2}, m_value3('c')
	{
		// No need for assignment here
	}
};
