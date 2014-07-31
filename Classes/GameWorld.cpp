#include <algorithm>
#include "GameWorld.h"
#include "GameConfig.h"

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
        CC_BREAK_IF(! CCLayerColor::initWithColor( ccc4(10,10,10,255) ) );

        CCSize visibleSize = CCDirector::sharedDirector()->getVisibleSize();
        CCPoint origin = CCDirector::sharedDirector()->getVisibleOrigin();
        /////////////////////////////
        // 2. add a menu item with "X" image, which is clicked to quit the program
        //    you may modify it.

        // add a "close" icon to exit the progress. it's an autorelease object
        CCMenuItemImage *pCloseItem = CCMenuItemImage::create(
                "CloseNormal.png",
                "CloseSelected.png",
                this,
                menu_selector(GameWorld::menuCloseCallback));

        pCloseItem->setPosition(ccp(origin.x + visibleSize.width - pCloseItem->getContentSize().width/2 ,
                    origin.y + pCloseItem->getContentSize().height/2));

        // create menu, it's an autorelease object
        CCMenu* pMenu = CCMenu::create(pCloseItem, NULL);
        pMenu->setPosition(CCPointZero);
        this->addChild(pMenu, 1);

        /////////////////////////////
        // 3. add your codes below...

        bRet = true;
    }while(0);

    return bRet;
}

void GameWorld::step(float dt)
{

}

void GameWorld::menuCloseCallback( CCObject* pSender)
{

#if (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT) || (CC_TARGET_PLATFORM == CC_PLATFORM_WP8)
    CCMessageBox("You pressed the close button. Windows Store Apps do not implement a close button.","Alert");
#else
    CCDirector::sharedDirector()->end();
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    exit(0);
#endif
#endif
}
