#pragma once

#include "Common.h"

#include <vector>
#include <pair>

#include "RoomPosition.h"

namespace Screeps {
	class RoomVisual {
	public:
		RoomVisual(SCREEPS_STR roomName = "");

	public:
		SCREEPS_STR roomName;

	public:
		struct CommonStyle {
			float opacity;
			SCREEPS_STR lineStyle;
			
			CommonStyle() {
				this->opacity = 0.5f;
				this->lineStyle = "undefined";
			}
		};

		struct CommonFilledStyle : CommonStyle {
			SCREEPS_STR fill;
			SCREEPS_STR stroke;
			SCREEPS_STR strokeWidth;

			CommonFilledStyle() {
				this->fill = "#ffffff";
				this->stroke="undefined"
				this->strokeWidth = 0.1f;
			}
		};

		struct LineStyle : CommonStyle {
			float width;
			SCREEPS_STR color;

			Style() {
				this->width = 0.1f;
				this->color = "#ffffff";
			};
		};

		RoomVisual& line(int x1, int y1, int x2, int y2, LineStyle style = LineStyle());
		RoomVisual& line(RoomPosition pos1, RoomPosition pos2, LineStyle style = LineStyle());

		struct CircleStyle : CommonFilledStyle {
			float radius;

			CircleStyle() {
				this->radius = 0.15f;
			};
		};

		RoomVisual& circle(int x, int y, CircleStyle style = CircleStyle());
		RoomVisual& circle(RoomPosition pos, CircleStyle style = CircleStyle());

		RoomVisual& rect(int x, int y, int width, int height, CommonFilledStyle style = CommonFilledStyle());
		RoomVisual& rect(RoomPosition topLeftPos, int width, int height, CommonFilledStyle style = CommonFilledStyle());

		RoomVisual& poly(std::vector<std::pair<int, int>>, CommonFilledStyle style = CommonFilledStyle());
		RoomVisual& poly(std::vector<RoomPosition>, CommonFilledStyle style = CommonFilledStyle());

		struct TextStyle {
			SCREEPS_STR color;
			union {
				float fontSize
				SCREEPS_STR font;
			};
			SCREEPS_STR stroke;
			float strokeWidth;
			SCREEPS_STR backgroundColor;
			float backgroundPadding;
			SCREEPS_STR align;
			float opacity;

			TextStyle() {
				this->color = "#ffffff";
				this->fontSize = 0.7f;
				this->stroke = "undefined";
				this->strokeWidth = 0.15f;
				this->backgroundColor = "undefined";
				this->backgroundPadding = 0.3f;
				this->align = "center";
				this->opacity = 1.0f;
			};
		};

		RoomVisual& text(SCREEPS_STR text, int x, int y, TextStyle style);
		RoomVisual& text(SCREEPS_STR text, RoomPosition pos, TextStyle style);

		RoomVisual& clear();
		RoomVisual& getSize();
	};
}