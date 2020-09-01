#pragma once
#include <iostream>
#include 'Player.h'
#include 'Skill.h'
#include 'Equipment.h'
#include <string>
using namespace std;
enum gear
{
	Head, UpperLimb, LowerLime, Foot, RightHand, LeftHand, Jewelry
};
class Creature
{
public:
	Creature(string name);
	virtual void Attack(Player player) = 0;
	int getHP();
	void setHP();
	int getMaxHp();
	string getName();
	int getCurHP();
	void setCurHP(int HP);
	int getTrophiesNum();
	void printTrophies();
	bool getTrophies(Player player);
private:
	static int MAX_TROPHIES_SIZE;
	int trophiesNum;

	const int maxHP;
	Equipment trophies[MAX_TROPHIES_SIZE];

	string name;
	int curHP;
};
int Creature::MAX_TROPHIES_SIZE = 3;

