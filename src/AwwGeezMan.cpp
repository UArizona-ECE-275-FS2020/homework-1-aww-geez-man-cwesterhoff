/*
 _____ ____ _____   ____ _____ ____
| ____/ ___| ____| |___ \___  | ___|
|  _|| |   |  _|     __) | / /|___ \
| |__| |___| |___   / __/ / /  ___) |
|_____\____|_____| |_____/_/  |____/

 _   _                                         _      _
| | | | ___  _ __ ___   _____      _____  _ __| | __ / |
| |_| |/ _ \| '_ ` _ \ / _ \ \ /\ / / _ \| '__| |/ / | |
|  _  | (_) | | | | | |  __/\ V  V / (_) | |  |   <  | |
|_| |_|\___/|_| |_| |_|\___| \_/\_/ \___/|_|  |_|\_\ |_|


Aww Geez Man: Interdimensional Mortys.
One of Morty C137's favorite phrases is "Aww Geez Man". But, in dimension Z286, there
exists a Morty who says everything backwards.
*/

// Include the Morty header file
#include "Morty.hpp"
#include <string>
#include <string.h>



int main(int ac, char** av) {
	// Parse the command line arguments. The program is executed as
	// ./AwwGeezMan {4} {25} {C137}
	// or 
	// ./AwwGeezMan {start} {stop} {step} {dimension}
	if (ac != 4 and ac != 5) {
		std::cout << "Error: Command line arguments are incorrect. Call program as (1) or (2)"
			<< std::endl;
		std::cout << "(1)\t./AwwGeezMan {start} {stop} {dimension}" << std::endl;
		std::cout << "(2)\t./AwwGeezMan {start} {stop} {step} {dimension}" << std::endl;

		return -1;
	}

	// Parse the command line arguments
	int start;
	int stop;
	int step;

	if (ac == 4) { //AwwGeezMan {start} {stop} {dimension}
		start = atoi(*(av + 1));
		stop = atoi(*(av + 2));
		step = 1;
		std::string dimension = av[3];

		if (strcmp(av[3], "C137") == 1) {
			std::cout << "ERROR: Unknown dimension!!" << std::endl;
			return -1;
		}

		C137::Morty(start, stop, step);

		//std::cout << start << '\n' << stop << '\n' << dimension << '\n' << std::endl;
	}

	else if (ac == 5) { //AwwGeezMan {start} {stop} {step} {dimension}
		start = atoi(*(av + 1));
		stop = atoi(*(av + 2));
		step = atoi(*(av + 3));
		std::string dimension = av[4];

		if (strcmp(av[4], "Z286") == 1) {
			std::cout << "ERROR: Unknown dimension!!" << std::endl;
			return -1;
		}

		Z286::Morty(start, stop, step);

		//std::cout << start << '\n' << stop << '\n' << step << '\n' << dimension << '\n' << std::endl;
	}

	return 0;
}