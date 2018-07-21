#pragma once

#include <emscripten.h>
#include <emscripten/val.h>

namespace Screeps {
	class TargetableResource {
	public:
		TargetableResource();
	
	public:
		val jsVar;
	};
}