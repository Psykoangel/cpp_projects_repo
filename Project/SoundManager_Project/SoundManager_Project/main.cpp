#include <iostream>
#include <string>

#include "SoundManager.h"

int main(int argc, char *argv[])
{
	SoundManager *soundManager = new SoundManager(100, FMOD_INIT_NORMAL);
	int enter = 0;
	
	std::cout << "Enter a number to continue the application :" << std::endl;
	std::cin >> enter;

	std::string soundName = "./PingaTrackTest02.ogg";
	soundManager->PlaySound(soundName);


	std::cout << "Enter a number to shut dow the application :" << std::endl;
	std::cin >> enter;

	soundManager->~SoundManager();

	return EXIT_SUCCESS;
}