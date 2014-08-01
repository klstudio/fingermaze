#include "cocos2d.h"
#include "GameConfig.h"

using namespace cocos2d;

GameConfig& GameConfig::GConf()
{
    //static variable init only runs once
    static GameConfig *conf = new GameConfig;

    return *conf;
}

GameConfig::GameConfig()
{
    CCLOG("Init game configuration");
}

GameConfig::~GameConfig()
{
}

