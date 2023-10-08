#include <string>
#include <array>
#include <vector>
#include <iostream>

#include <iostream>

/* by default all instance attributes of a class are private in cpp
they can only be accessed by other members of the class
o yüzden public altında yazmadıgın class blogların main() fonksiyonunda kullanılamaz, hata verir
şöyle yazmak gerekir: */

class Deneme
{
public:			   // note use of public keyword here, and the colon
	int m_month{}; // public, can be accessed by anyone
	int m_day{};   // public, can be accessed by anyone
	int m_year{};  // public, can be accessed by anyone
};

/* where public is, is called access specifier. that can either be public, private or protected */

/* C'de structlar yalnızca değişken alırlar, fonksiyon yani metot alamazlar. C++'de bu değişmiştir,
structlar içlerinde fonksiyon da barındırabilirler ama hala aralarında bir fark kalmıştır, o da şudur:
class'lar değişkenlerini default olarak private yaparken structlar public yapar.  */
