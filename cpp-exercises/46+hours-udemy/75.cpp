#include <iostream>
using namespace std;

//

class Player
{
	string name;
	int health;
	int xp;

	void talk(string);
	bool isDead();
};

int main()
{
	Player player1;
	Player player2;

	Player *player3 = new Player;
	delete player3;
}
