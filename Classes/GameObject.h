#ifndef _GAME_OBJECT_H_
#define _GAME_OBJECT_H_

#include "cocos2d.h"
using namespace cocos2d;

class GObject : public CCObject {

public:
    GObject();
    virtual ~GObject();

    static GObject* create(char *name);
    CCSprite *sprite;
    virtual void GetAABB(CCPoint &o, float &w, float &h);
    virtual void Step(float dt);
    virtual void SetObjectPosition(float x, float y);

protected:
    CCTexture2D *texture;
    char objName[50];
};

#endif





