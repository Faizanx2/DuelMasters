#include<cstdio>
#include<iostream>

using namespace std;

class mana
{
private:
	int mana_count;
public:
	mana()
	{
		mana_count = 0;
	};
	~mana();
	int getMana()
	{
		return mana_count;
	};
	int incMana()
	{
		mana_count++;
	};
};

