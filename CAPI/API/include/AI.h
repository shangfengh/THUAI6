#pragma once
#ifndef AI_H
#define AI_H

#include "API.h"

class IAI
{
public:
    virtual void play(IAPI& appi) = 0;
};

#endif