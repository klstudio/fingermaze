#ifndef _GAMECONFIG_H_
#define _GAMECONFIG_H_

#include "cocos2d.h"
using namespace cocos2d;

struct GameConfig : CCObject
{
    ccColor4F gameWorldBgColor;

};

extern GameConfig *GCFG;

#endif

