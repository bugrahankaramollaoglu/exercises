/* encapsulation'da özellikler private idi
bu değişkenlere erişmek için getter denen bir tür
metot kullanılır, accessor methods da denir.
read-only bir fonksiyondur sadece değer döner */

/* genelde publictir */

/* private data member değeri dönerler */

class Student
{
private:
	int age;

public:
	// getter method
	int ageGetter() const { return age; }
};
