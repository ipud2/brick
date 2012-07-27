/*
 *  BoxObject.h
 *  sfml
 *
 *  Created by Adam Tomeček on 7/27/12.
 *  Copyright 2012 Brain Dead Cookie. All rights reserved.
 *
 */

#ifndef BOXOBJECT_H
#define BOXOBJECT_H

#include "Game.h"
#include "Object.h"

class BoxObject : public Object {
	public:
		explicit BoxObject(b2World *world, float width, float height, 
				float xPos, float yPos, float angle = 0.0f): 
			Object::Object(world, width, height, xPos, yPos, angle) {
				this->DefineBody();
			}
		explicit BoxObject(b2World *world, Sprite *sprite) : 
			Object::Object(world, sprite) {
				this->DefineBody();
			}

		virtual void DefineBody(void);
};

#endif