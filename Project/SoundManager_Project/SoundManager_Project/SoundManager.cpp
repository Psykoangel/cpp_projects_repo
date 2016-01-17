#include <iostream>

#include "SoundManager.h"


SoundManager::SoundManager(void)
{
	result = FMOD::System_Create(&system);
	SoundManager::ERRCHECK(result);
	result = system->init(100, FMOD_INIT_NORMAL, 0);
	SoundManager::ERRCHECK(result);
}

SoundManager::SoundManager(int nbMaxChannel, FMOD_INITFLAGS initFlags)
{
	result = FMOD::System_Create(&system);
	SoundManager::ERRCHECK(result);
	result = system->init(nbMaxChannel, initFlags, 0);
	SoundManager::ERRCHECK(result);
}

SoundManager::~SoundManager(void)
{
	for (int d = 0; d  < listSound.size(); d ++)
	{
		result = listSound[d]->release();
		ERRCHECK(result);
	}
	listSound.clear();
	result = system->release();
	ERRCHECK(result);
}

void SoundManager::PlaySound(std::string soundName)
{
	result = system->createSound(soundName.data(), FMOD_SOFTWARE, 0, &sound);
	ERRCHECK(result);
	listSound.push_back(sound);
	result = listSound[0]->setMode(FMOD_LOOP_OFF);
	ERRCHECK(result);
	result = system->playSound(FMOD_CHANNEL_FREE, listSound[0], false, &channel);
	ERRCHECK(result);
	listChannel.push_back(channel);
}

void SoundManager::ERRCHECK(FMOD_RESULT result)
{
    if (result != FMOD_OK)
    {
        std::cout << "FMOD error! (" << result << ") " << FMOD_ErrorString(result) << std::endl;
        exit(-1);
    }
}
