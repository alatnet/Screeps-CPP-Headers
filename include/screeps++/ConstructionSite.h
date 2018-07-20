#pragma once

#include "Common.h"

#include "RoomObject.h"

namespace Screeps {
	class ConstructionSite : public RoomObject {
	public:
        	ConstructionSite();

	public:
        	SCREEPS_STR id;
        	bool my;
        	SCREEPS_STR owner;
        	int progress;
        	int progressTotal;
        	SCREEPS_STR structureType;
        	
        public:
        	int remove();
	};
}