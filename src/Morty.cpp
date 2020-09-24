/*
 __  __            _
|  \/  | ___  _ __| |_ _   _        ___ _ __  _ __
| |\/| |/ _ \| '__| __| | | |      / __| '_ \| '_ \
| |  | | (_) | |  | |_| |_| |  _  | (__| |_) | |_) |
|_|  |_|\___/|_|   \__|\__, | (_)  \___| .__/| .__/
                       |___/           |_|   |_|
*/

// Include the Morty header file
#include "Morty.hpp"

void C137::Morty(int start, int stop, int step)
{
    std::cout << "Morty C137 says: " << std::endl;


    for (start; start <= stop; start += step) {
        std::cout << start << ":";

        if ((start % 3) == 0) {
            std::cout << " Aww";
        }

        if ((start % 5) == 0) {
            std::cout << " Geez";
        }

        if ((start % 15) == 0) {
            std::cout << " Man";
        }
        std::cout << std::endl;

    }
}

void C137::Morty(int start, int stop)
{
}

void Z286::Morty(int start, int stop, int step)
{
    std::cout << "Morty Z286 says: " << std::endl;

    for (start; start <= stop; start += step) {
        std::cout << start << ":";

        if ((start % 15) == 0) {
            std::cout << " naM";
        }

        if ((start % 5) == 0) {
            std::cout << " zeeG";
        }

        if ((start % 3) == 0) {
            std::cout << " wwA";
        }
        std::cout << std::endl;

    }
}

void Z286::Morty(int start, int stop)
{
}
