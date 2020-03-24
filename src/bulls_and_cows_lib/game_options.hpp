#pragma once
#include <string>
#include <vector>
#include <iostream>

namespace bulls_and_cows {

    struct GameOptions
    {
        unsigned int max_number_of_attempts{12};
        unsigned int number_of_characters_per_code{5};
        char minimum_allowed_character{'A'};
        char maximum_allowed_character{'H'};
        bool accept_doublons{false};
        bool save_game{false};
    };

    void printOptions(const GameOptions& game_options);
    GameOptions modifOptions(GameOptions gameoption1);
    //void saveGameMethod(std::vector<FinalBoard> const& finalBoard, unsigned int const& win);

} // namespace bulls_and_cows
