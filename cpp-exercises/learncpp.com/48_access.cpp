class Quadruped { // Can access name, run() and legs

private:
	std::string name; // Only accessible from an Quadruped object

protected:
	Leg legs[4]; // Accessible from an Quadruped or derived object

public:
	void run(); // Accessible from wherever
};

// genelde 3 farklı ihtimal vardır: public, private, protected
// if you omit the access specifier, it defaults to private


