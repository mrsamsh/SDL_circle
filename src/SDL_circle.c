//
//
// SDL_circle.c
//
// Created by Usama Alshughry 08.06.2021
//
// This file is part of SDL_circle
//
// SDL_circle  is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// SDL_circle is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with SDL_circle.  If not, see <https://www.gnu.org/licenses/>.>
//

#include "SDL_circle.h"

static int DrawEllipse(SDL_Renderer *renderer, float x, float y, float rx, float ry) {
	rx = (rx >= 0 ? rx : -rx);
	ry = (ry >= 0 ? ry : -ry);
	SDL_FPoint points[30];
	points[0].x  = x +  0.976621 * rx; points[0].y  = y +  0.214971 * ry;
	points[1].x  = x +  1.000000 * rx; points[1].y  = y +  0.000000 * ry;
	points[2].x  = x +  0.976621 * rx; points[2].y  = y + -0.214971 * ry;
	points[3].x  = x +  0.907575 * rx; points[3].y  = y + -0.419889 * ry;
	points[4].x  = x +  0.796093 * rx; points[4].y  = y + -0.605174 * ry;
	points[5].x  = x +  0.647386 * rx; points[5].y  = y + -0.762162 * ry;
	points[6].x  = x +  0.468408 * rx; points[6].y  = y + -0.883512 * ry;
	points[7].x  = x +  0.267528 * rx; points[7].y  = y + -0.963550 * ry;
	points[8].x  = x +  0.054139 * rx; points[8].y  = y + -0.998533 * ry;
	points[9].x  = x + -0.161782 * rx; points[9].y  = y + -0.986827 * ry;
	points[10].x = x + -0.370138 * rx; points[10].y = y + -0.928977 * ry;
	points[11].x = x + -0.561187 * rx; points[11].y = y + -0.827689 * ry;
	points[12].x = x + -0.725996 * rx; points[12].y = y + -0.687699 * ry;
	points[13].x = x + -0.856857 * rx; points[13].y = y + -0.515554 * ry;
	points[14].x = x + -0.947653 * rx; points[14].y = y + -0.319301 * ry;
	points[15].x = x + -0.994138 * rx; points[15].y = y + -0.108119 * ry;
	points[16].x = x + -0.994138 * rx; points[16].y = y +  0.108119 * ry;
	points[17].x = x + -0.947653 * rx; points[17].y = y +  0.319302 * ry;
	points[18].x = x + -0.856857 * rx; points[18].y = y +  0.515554 * ry;
	points[19].x = x + -0.725995 * rx; points[19].y = y +  0.687699 * ry;
	points[20].x = x + -0.561187 * rx; points[20].y = y +  0.827689 * ry;
	points[21].x = x + -0.370138 * rx; points[21].y = y +  0.928977 * ry;
	points[22].x = x + -0.161782 * rx; points[22].y = y +  0.986827 * ry;
	points[23].x = x +  0.054139 * rx; points[23].y = y +  0.998533 * ry;
	points[24].x = x +  0.267528 * rx; points[24].y = y +  0.963550 * ry;
	points[25].x = x +  0.468408 * rx; points[25].y = y +  0.883512 * ry;
	points[26].x = x +  0.647386 * rx; points[26].y = y +  0.762162 * ry;
	points[27].x = x +  0.796093 * rx; points[27].y = y +  0.605174 * ry;
	points[28].x = x +  0.907575 * rx; points[28].y = y +  0.419889 * ry;
	points[29].x = x +  0.976621 * rx; points[29].y = y +  0.214970 * ry;
	return SDL_RenderDrawLinesF(renderer, points, 30);
}

static int FillEllipse(SDL_Renderer *renderer, float x, float y, float rx, float ry) {
	rx = (rx >= 0 ? rx : -rx);
	ry = (ry >= 0 ? ry : -ry);
	int cx = (int)x;
	int cy = (int)y;
	int rrx = (int)rx;
	int rry = (int)ry;
	int x1, x2, y1;
	int retval;
	int line;

	for (int i = rry; i > 0; --i) {
		line = round(sqrt(ry * ry - (ry - i) * (ry - i)) * rx / ry);
		x1 = cx - line;
		x2 = cx + line;
		y1 = cy - (rry - i);
		retval = SDL_RenderDrawLine(renderer, x1, y1, x2, y1);
		x1 = cx - line;
		x2 = cx + line;
		y1 = cy + (rry - i);
		retval = SDL_RenderDrawLine(renderer, x1, y1, x2, y1);
	}

	line /= 2;
	x1 = cx - line;
	x2 = cx + line;
	y1 = cy - rry;
	retval = SDL_RenderDrawLine(renderer, x1, y1, x2, y1);
	x1 = cx - line;
	x2 = cx + line;
	y1 = cy + rry;
	retval = SDL_RenderDrawLine(renderer, x1, y1, x2, y1);

	return retval;
}

int SDL_RenderDrawCircle(SDL_Renderer *renderer, const SDL_Circle *circle) {
	return DrawEllipse(renderer, circle->x, circle->y, circle->r, circle->r);
}

int SDL_RenderDrawCircleF(SDL_Renderer *renderer, const SDL_FCircle *circle) {
	return DrawEllipse(renderer, circle->x, circle->y, circle->r, circle->r);
}

int SDL_RenderDrawEllipse(SDL_Renderer *renderer, const SDL_Ellipse *ellipse) {
	return DrawEllipse(renderer, ellipse->x, ellipse->y, ellipse->rx, ellipse->ry);
}

int SDL_RenderDrawEllipseF(SDL_Renderer *renderer, const SDL_FEllipse *ellipse) {
	return DrawEllipse(renderer, ellipse->x, ellipse->y, ellipse->rx, ellipse->ry);
}

int SDL_RenderFillCircle(SDL_Renderer *renderer, const SDL_Circle *circle) {
	return FillEllipse(renderer, circle->x, circle->y, circle->r, circle->r);
}

int SDL_RenderFillCircleF(SDL_Renderer *renderer, const SDL_FCircle *circle) {
	return FillEllipse(renderer, circle->x, circle->y, circle->r, circle->r);
}

int SDL_RenderFillEllipse(SDL_Renderer *renderer, const SDL_Ellipse *ellipse) {
	return FillEllipse(renderer, ellipse->x, ellipse->y, ellipse->rx, ellipse->ry);
}

int SDL_RenderFillEllipseF(SDL_Renderer *renderer, const SDL_FEllipse *ellipse) {
	return FillEllipse(renderer, ellipse->x, ellipse->y, ellipse->rx, ellipse->ry);
}
