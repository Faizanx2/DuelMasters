#ifndef DECK_H_
#define DECK_H_

#include <string>
#include <vector>

class Deck
{
private:
	std::vector<Card> deckVector;
	std::vector<Card> deck2;
protected:
public:
	Deck();
	

	~Deck();

	std::vector<Card> loadCardsFromFile(std::string filename);

	void Shuffle(std::vector<Card>& Deck);
   
	Card Draw(std::vector<Card>& z);
	std::vector<Card> getDeck();
};
#endif //DECK_H_