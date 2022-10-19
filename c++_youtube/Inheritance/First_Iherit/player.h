#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <iostream>
#include <string_view>
#include "person.h"

class Player : private Person
{
    friend std::ostream& operator<<(std::ostream& out, const Player& player);
public:
    Player() = default;
    Player(std::string_view game_param);
    
public : 
    std::string m_game{"None"};
};

#endif // PLAYER_H