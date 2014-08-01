#ifndef _GAMECONFIG_H_
#define _GAMECONFIG_H_

#include "cocos2d.h"
using namespace cocos2d;

struct GameConfig : CCObject
{
    ccColor4F gameWorldBgColor;

public:
    static GameConfig &GConf();
    ~GameConfig();

private:
    GameConfig(); 

    GameConfig(const GameConfig &old); //disallow copy constructor
    const GameConfig &operator=( const GameConfig &old );

};


#endif

