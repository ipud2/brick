/*
 *  StaticObject.cpp
 *  sfml
 *
 *  Created by Adam Tomeček on 1/31/13.
 *  Copyright 2013 Brain Dead Cookie. All rights reserved.
 *
 */

#include "StaticObject.h"

void StaticObject::CreateBody(void){
	b2BodyDef bodyDef;
	bodyDef.type = b2_staticBody;
	bodyDef.position.Set((this->xPos + this->width / 2) / RATIO,
						 (this->yPos + this->height / 2)/ RATIO);
	bodyDef.angle = this->angle * (M_PI / 180);
	
	this->body = this->world->CreateBody(&bodyDef);

	return ;
}

