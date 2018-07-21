#pragma once

#include <emscripten.h>
#include <emscripten/val.h>

namespace Screeps {
	class TargetableObject{
	public:
		TargetableObject();
		
	public:
		val jsVar;
	};
}