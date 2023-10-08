#include <vector>
#include <iostream>
using namespace std;

/* vectors in cpp
	mesela bir array tanımlayacaksın ama kaç tane
	eleman olacağını bilmiyosun. 2 seçeneğin var
		1) aşmayacağını bildiğin bir limitle statik array tanımla
		2) define a dynamic array such as vector
	vectors are containers in c++ library
	its size can shrink and enlarge at execution time
	vector deklare etmek için
		i) <vector> include etmelisin
	   ii) vector veri tipiyle deklare etmelisin
 */

int main()
{

	// 10 elements, otomatily set to 0
	vector<int> numbers(10);

	// ilklendirilmiş hâlleri
	vector<char> letters2{'b', 'u', 'g', 'r', 'a', '\0'};
	vector<int> numbers2{10, 20, 30};

	// at() metoduyla o indisteki değere ulaşırsın
	cout << numbers2.at(2) << "\n";

	// push_back() metoduyla append() edebilirsin
	numbers2.push_back(40); // {10,20,30,40}

	// 4 elements, all initialized to 100
	vector<int> numbers3(4, 100);

	// size() metoduyla vektörün boyutunu öğren
	cout << numbers3.size() << endl;
}
