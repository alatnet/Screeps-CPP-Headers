#pragma once

#include "Common.h"

#include "Structure.h"

namespace Screeps {
	class OwnedStructure : public Structure{
	public:
		OwnedStructure();
	
	public:
		bool my;
		SCREEPS_STR owner;
	};
}