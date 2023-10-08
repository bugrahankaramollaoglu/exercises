#include <iostream>
#include <vector>
using namespace std;

int main()
{

	vector<int> vec1{};
	vector<int> vec2{};

	vec1.push_back(10);
	vec1.push_back(20);

	cout << "vec1 at first:" << endl;
	cout << vec1.at(0) << " ";
	cout << vec1.at(1) << " ";
	cout << vec1.size() << "\n";

	vec2.push_back(100);
	vec2.push_back(200);

	cout << "vec2 at first:" << endl;
	cout << vec2.at(0) << " ";
	cout << vec2.at(1) << " ";
	cout << vec2.size() << "\n";

	vector<vector<int>> vector_2d{};
	vector_2d.push_back(vec1);
	vector_2d.push_back(vec2);

	cout << "vec_2d at first:" << endl;
	cout << vector_2d[0].at(0) << " ";
	cout << vector_2d[0].at(1) << " ";
	cout << vector_2d[1].at(0) << " ";
	cout << vector_2d[1].at(1) << "\n";

	// bu ifade vec1'in ilk elemanını 1000 yapar ama
	// vector_2d'nin içine vec1 önceden atmış olsan da
	// 2d'yi yazdırdıgında 1000 olmaz. sebebi vec1'in "kopyasını"
	// vec_2d'ye atamış olman
	vec1.at(0) = 1000;

	cout << "vec_2d now:" << endl;
	cout << vector_2d[0].at(0) << " ";
	cout << vector_2d[0].at(1) << " ";
	cout << vector_2d[1].at(0) << " ";
	cout << vector_2d[1].at(1) << "\n";
}
