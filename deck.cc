#include <stddef.h>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<string>
#include<iostream>
#include<fstream>

#include <algorithm>
#include <random>
#include <sstream>

#include "csv.h"
#include "deck.h"


Deck::Deck()
{
	
}

Deck::~Deck()
{

}


std::vector<Card> Deck::loadCardsFromFile(std::string filename)
{	
	io::CSVReader<8> in(filename);  //Providing the file for User Deck 1
	
	in.read_header(io::ignore_extra_column, "name", "race", "civilization","mana","power","isCreature","condition","c");   // The , seperated parameters in the Csv file
  std::string name; std::string race; std::string civilization;  int mana; int power; std::string isCreature; std::string condition;int c; 
  std::vector<Card> deck1; //c suggests the count of the cards
  while(in.read_row(name, race, civilization,mana,power,isCreature,condition,c)){
  	Card card;
  	card.setCard(name,race,civilization,mana,power,isCreature,condition); //loop to add multiple cards inside the deck
  	for (int i = 0; i < c; ++i)
  	{
//  		std::cout<<name<<" "<<race<<" "<<civilization<<" "<<mana<<" "<<power<<" "<<isCreature<<" "<<condition<<std::endl;
  		deck1.push_back(card);

  	}
  	deckVector=deck1;
  }
  return deck1;
  }
void Deck::Shuffle(std::vector<Card>& x)
{
	auto engine = std::default_random_engine{};
    std::shuffle(std::begin(x), std::end(x), engine);

}
Card Deck::Draw(std::vector<Card>& z)
{
	int x=z.size();
	Card a = z[x-1];
	z.pop_back();
	return a;
}

std::vector<Card> Deck::getDeck()
{
	return deckVector;
}
/*
int main(int argc, char const *argv[])
{
	Deck* deck = new Deck;
	std::vector<Card> dv;
	dv = deck->loadCardsFromFile("duel.csv");
	deck->Shuffle(dv);
	int s = 0;
	s = dv.size();
	std::cout<<"GIMME SIZE"<< s <<"/n";
	/*
	dv = deck.deckVector;
	int s = 0;
	s = dv.size();
	std::cout<<"GIMME SIZE"<< s <<"/n";
	delete deck;
	return 0;
}*/