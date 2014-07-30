#include <algorithm>
#include "GameWorld.h"
#include "GameConfig.h"

using namespace CocosDenshion;
using namespace cocos2d;

GameWorld::GameWorld()
{

}

GameWorld::~GameWorld()
{

}

CCScene* GameWorld::scene()
{
    CCScene * scene = NULL;
    do
    {
        // 'scene' is an autorelease object
        scene = CCScene::create();
        CC_BREAK_IF(! scene);

        // 'layer' is an autorelease object
        GameWorld *layer = GameWorld::create();
        CC_BREAK_IF(! layer);

        // add layer as a child to scene
        scene->addChild(layer);
    } while (0);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool GameWorld::init()
{
    bool bRet = false;
    do {
        CC_BREAK_IF(! CCLayerColor::initWithColor( ccc4(255,255,255,255) ) );

    };
}

