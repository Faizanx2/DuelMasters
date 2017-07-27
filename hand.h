#ifndef HAND_H_
#define Hand_H_
#include<vector>

class Hand
{
private:
	std::vector<Card> hand;
	
public:
	Hand();
	~Hand();
	void removeCard(int x);
	std::vector<Card> getHand();
	void addToHand(Card c);


};

#endif