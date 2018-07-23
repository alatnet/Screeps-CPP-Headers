#pragma once

#include "Common.h"

#include <emscripten.h>
#include <emscripten/val.h>

#include "RoomObject.h"
#include "TargetableResource.h"

namespace Screeps {
	class Resource : public RoomObject, TargetableResource {
	public:
		Resource();
		Resource(emscripten::val resource);
	
	public:
		int amount;
		SCREEPS_STR id;
		SCREEPS_STR resourceType;
	};
}