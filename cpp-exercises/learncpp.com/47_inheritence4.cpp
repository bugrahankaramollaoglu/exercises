#include <iostream>

class Animal {
private:
    int _numOfLegs;
public:
    Animal();
    ~Animal();
    Animal(Animal const &other);
    Animal& operator=(Animal const &other);

    void run(int distance);
    void call(void);
    void walk(int distance);
};

class Cat : public Animal {
public:
    Cat();
    Cat(Cat const &other);
    Cat& operator=(Cat const &other);
    ~Cat();
};
