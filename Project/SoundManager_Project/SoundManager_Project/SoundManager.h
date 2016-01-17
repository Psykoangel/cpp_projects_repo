#include <vector>

#include "D:/SDK/FMOD/api/inc/fmod.hpp"
#include "D:/SDK/FMOD/api/inc/fmod_errors.h"

class SoundManager
{
public:
	//Constructors
	SoundManager(void);
	SoundManager(int nbMaxChannel, FMOD_INITFLAGS initFlags);
	//Destructors
	~SoundManager(void);

	//Methods
	void PlaySound(std::string soundName);
	void ERRCHECK(FMOD_RESULT result);
//protected:

private:
	//Attributes
	FMOD::System *system;
	FMOD::Sound *sound;
	FMOD::Channel *channel;
	std::vector<FMOD::Sound*> listSound;
	std::vector<FMOD::Channel*> listChannel;
	FMOD_RESULT result;
};

