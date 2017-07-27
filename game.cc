#include<cstdio>
#include<iostream>
#include<vector>
#include "Game.h"

using namespace std;
	Game::Game()
	{
		Player1 = new Player("Player1");
		Player2 = new Player("Player2");
	};
	Game::~Game()
	{

	};
	void Game::Play()
	{
		while ((hasWinner(Player1,Player2) == 0))
		{
			UpdateScreen(Player1,Player2);
			if (turn==false)
				cout<<endl;

			else
				cout<<endl;
				




		}
	}

	void Game::UpdateScreen(Player* _Player1, Player* _Player2)
	{
		string nam = _Player1->getName();
		cout<<nam<<"'s side"<<endl;
		int man = _Player1->getManaCount();
		cout<<man<<" mana"<<endl;
		int shields = _Player1->getManaCount();
		cout<<shields<<" sheilds"<<endl;
		_Player1->printBattleZone();
		cout<<endl<<endl;
		_Player2->printBattleZone();
		int shields2 = _Player1->getManaCount();
		cout<<shields2<<" sheilds"<<endl;
		int man2 = _Player1->getManaCount();
		cout<<man2<<" mana"<<endl;
		string nam2 = _Player2->getName();
		cout<<nam2<<"'s side"<<endl;
	}

	void playTurn(Player* _Player)
	{
		string x = "y";
		cout<<"Would you like to charge mana y/n";
		cin>>x;
		int j =0,k=0;
		if (x=="y")
		{
			vector<Card> v= _Player->getHand()->getHand();
			for (std::vector<Card>::iterator i = v.begin(); i != v.end(); ++i)
			{
				string name=i->getCreature();
				int mana=i->getMana();
				cout<<j<<" "<<name<<" ,"<<mana;
				j++;
			}
			int index;
			cout<<"Which card would you like to remove? ";
			cin>>index;
			_Player->getHand()->removeCard(index);
		}
		int tempMana = _Player->getManaCount();
		vector<Card> v= _Player->getHand()->getHand();
		cout<<"Which card would you like to summon?";
		for (std::vector<Card>::iterator i = v.begin(); i != v.end(); ++i)
			{
				string name=i->getCreature();
				int mana=i->getMana();
				cout<<j<<" "<<name<<" ,"<<mana;
				k++;
			}
		cout<<endl;


	}
	int Game::hasWinner(Player* _Player1,Player* _Player2)
	{
		if (_Player1->getShield()->getShieldCount() == -1)
			return 2;
		else if (_Player2->getShield()->getShieldCount() == -1)
			return 1;
		else
			return 0;
	}


int main(int argc, char const *argv[])
{
	Game *game = new Game();
	game->Play();
	return 0;
}