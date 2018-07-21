#pragma once

#include "Common.h"

#include "RoomObject.h"
#include "TargetableObject.h"

namespace Screeps {
	class Structure : public RoomObject, TargetableObject {
	public:
		Structure();

	public:
		int hits;
		int hitsMax;
		SCREEPS_STR id;
		SCREEPS_STR string;
		
	public:
		int destroy();
		bool isActive();
		int notifyWhenAttacked();
	};
}