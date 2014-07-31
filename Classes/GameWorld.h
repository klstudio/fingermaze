#ifndef __GameWorld_H__
#define __GameWorld_H__

#include "cocos2d.h"

using namespace cocos2d;
using namespace std;

class GameWorld : public CCLayerColor
{
    public:
        GameWorld();
        ~GameWorld();

        // Here's a difference. Method 'init' in cocos2d-x returns bool,
        // instead of returning 'id' in cocos2d-iphone
        virtual bool init();

        // there's no 'id' in cpp, so we recommand to return the exactly class pointer
        static cocos2d::CCScene* scene();

        // implement the "static node()" method manually
        CREATE_FUNC(GameWorld);

        void step(float dt);
        void menuCloseCallback( CCObject* pSender);

};

#endif

