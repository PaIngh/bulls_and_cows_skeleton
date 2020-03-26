#include "game_options.hpp"
#include "game.hpp"
#include <fstream>


namespace bulls_and_cows {

	void printOptions(const GameOptions& game_options)
    {
        std::cout << "Caract�re min : " << game_options.minimum_allowed_character << "\n";
        std::cout << "Caract�re max : " << game_options.maximum_allowed_character << "\n";
        std::cout << "Nbr caract�re par code : " << game_options.number_of_characters_per_code << "\n";
        std::cout << "Nbr attemps : " << game_options.max_number_of_attempts << "\n";
        std::cout << "Save Game : " << game_options.save_game << "\n";
        std::cout << "Doublons accept�s : " << game_options.accept_doublons << "\n";
    }

    void modifOptions(GameOptions& gameoption1)
    {
        std::cout << "Caract�re min : ";
        std::cin >> gameoption1.minimum_allowed_character;

        std::cout << "Caract�re max : ";
        std::cin >> gameoption1.maximum_allowed_character;

        std::cout << "Nbr caract�re par code : ";
        std::cin >> gameoption1.number_of_characters_per_code;

        std::cout << "Nbr attemps : ";
        std::cin >> gameoption1.max_number_of_attempts;

        char choice(0);
        std::cout << "Save Game (T / F) : ";
        std::cin >> choice;
        if (choice == 'T')
            gameoption1.save_game = true;
        else
            gameoption1.save_game = false;

        choice = 0;
        std::cout << "Doublons accept�s (T / F) : ";
        std::cin >> choice;
        if (choice == 'T')
            gameoption1.accept_doublons = true;
        else
            gameoption1.accept_doublons = false;
    }
} // namespace bulls_and_cows
