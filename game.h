#ifndef Game_H_
#define Game_H_

#include <string>
#include <vector>
#include "card.cc"
#include "deck.cc"
#include "shield.cc"
#include "hand.cc"
#include "player.cc"
class Game
{

private:
	Player *Player1;
	Player *Player2;
	bool turn = false;
public:
	Game();
	~Game();
	void Play();
	int hasWinner(Player* Player1, Player* Player2);
	void UpdateScreen(Player* Player1, Player* Player2);
};
#endif //Game_H_