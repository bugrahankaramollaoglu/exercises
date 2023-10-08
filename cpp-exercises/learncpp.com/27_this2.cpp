#include <iostream>

// mostly you don't use this explicitly bu if you do:

class Something
{
private:
	int data;

public:
	Something(int data)
	{
		this->data = data; // this->data is the member, data is the local parameter
	}
};

