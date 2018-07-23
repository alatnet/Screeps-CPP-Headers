#pragma once

#include "Common.h"

#include <emscripten.h>
#include <emscripten/val.h>

#include "RoomObject.h"

namespace Screeps {
	class ConstructionSite : public RoomObject {
	public:
        	ConstructionSite();
		ConstructionSite(emscripten::val constructionSite);

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