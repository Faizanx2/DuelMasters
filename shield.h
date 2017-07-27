#ifndef SHIELD_H_
#define SHIELD_H_


class Shield
{
private:
		std::vector<Card> shields;
		int shieldCount;
public:
	Shield();
	~Shield();
	void addShield(Card _card);
	Card breakShield();
	int getShieldCount();
};
#endif //SHIELD_H_