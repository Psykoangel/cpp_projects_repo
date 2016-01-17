#ifndef SCENE_H
#define SCENE_H

#include <iostream>
#include <vector>
using namespace std;

#include "Bot.h"

class Scene
{
    public:
        Scene();
        ~Scene();

    protected:
    private:
        vector<Bot*> externBots;
        Bot* localBot;
        int** map;
};

#endif // SCENE_H
