#pragma once
#include "Creature.h"
#include <iostream>
#include 'Player.h'
#include 'Skill.h'
#include 'Equipment.h'
#include <string>
using namespace std;
class Animal :
    public Creature
{
public:
    Animal();
    virtual void Attack(Player player);
};

