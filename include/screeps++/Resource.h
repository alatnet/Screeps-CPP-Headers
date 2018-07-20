#pragma once

#include "Common.h"

#include "RoomObject.h"
#include "TargetableResource.h"

namespace Screeps {
	class Resource : public RoomObject, TargetableResource {
	public:
		Resource();
	
	public:
		int amount;
		SCREEPS_STR id;
		SCREEPS_STR resourceType;
	};
}