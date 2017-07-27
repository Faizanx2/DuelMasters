#ifndef PLAYER_H_
#define PLAYER_H_

#include <string>
#include <vector>

class Player
{

private:
	Shield* shield;
	Hand* hand;
	Deck* deck;
	std::vector<Card> battlezone;
	int mana;
	std::string name;
public:
	Player();
	Player(std::string _name);
	~Player();
	void Summon();
	std::vector<Card> getBattleZone();
	std::string getName();
	Shield* getShield();
	int getManaCount();
	void addMana();
	Hand* getHand();
	void printBattleZone();

};
#endif //PLAYER_H_