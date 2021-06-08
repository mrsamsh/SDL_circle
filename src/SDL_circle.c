//
//
// SDL_circle.c
//
// Created by Usama Alshughry 08.06.2021
//
// This file is part of SDL_circle
//
// SDL_Circle  is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Foobar is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Foobar.  If not, see <https://www.gnu.org/licenses/>.>
//

#include "SDL_circle.h"

void _drawCircle(SDL_Renderer *renderer, float x, float y, float r) {
	r = (r >= 0 ? r : -r);
	SDL_FPoint points[30];
	points[0].x  = x +  0.976621 * r; points[0].y  = y +  0.214971 * r;
	points[1].x  = x +  1.000000 * r; points[1].y  = y +  0.000000 * r;
	points[2].x  = x +  0.976621 * r; points[2].y  = y + -0.214971 * r;
	points[3].x  = x +  0.907575 * r; points[3].y  = y + -0.419889 * r;
	points[4].x  = x +  0.796093 * r; points[4].y  = y + -0.605174 * r;
	points[5].x  = x +  0.647386 * r; points[5].y  = y + -0.762162 * r;
	points[6].x  = x +  0.468408 * r; points[6].y  = y + -0.883512 * r;
	points[7].x  = x +  0.267528 * r; points[7].y  = y + -0.963550 * r;
	points[8].x  = x +  0.054139 * r; points[8].y  = y + -0.998533 * r;
	points[9].x  = x + -0.161782 * r; points[9].y  = y + -0.986827 * r;
	points[10].x = x + -0.370138 * r; points[10].y = y + -0.928977 * r;
	points[11].x = x + -0.561187 * r; points[11].y = y + -0.827689 * r;
	points[12].x = x + -0.725996 * r; points[12].y = y + -0.687699 * r;
	points[13].x = x + -0.856857 * r; points[13].y = y + -0.515554 * r;
	points[14].x = x + -0.947653 * r; points[14].y = y + -0.319301 * r;
	points[15].x = x + -0.994138 * r; points[15].y = y + -0.108119 * r;
	points[16].x = x + -0.994138 * r; points[16].y = y +  0.108119 * r;
	points[17].x = x + -0.947653 * r; points[17].y = y +  0.319302 * r;
	points[18].x = x + -0.856857 * r; points[18].y = y +  0.515554 * r;
	points[19].x = x + -0.725995 * r; points[19].y = y +  0.687699 * r;
	points[20].x = x + -0.561187 * r; points[20].y = y +  0.827689 * r;
	points[21].x = x + -0.370138 * r; points[21].y = y +  0.928977 * r;
	points[22].x = x + -0.161782 * r; points[22].y = y +  0.986827 * r;
	points[23].x = x +  0.054139 * r; points[23].y = y +  0.998533 * r;
	points[24].x = x +  0.267528 * r; points[24].y = y +  0.963550 * r;
	points[25].x = x +  0.468408 * r; points[25].y = y +  0.883512 * r;
	points[26].x = x +  0.647386 * r; points[26].y = y +  0.762162 * r;
	points[27].x = x +  0.796093 * r; points[27].y = y +  0.605174 * r;
	points[28].x = x +  0.907575 * r; points[28].y = y +  0.419889 * r;
	points[29].x = x +  0.976621 * r; points[29].y = y +  0.214970 * r;
	SDL_RenderDrawLinesF(renderer, points, 30);
}

void _drawEllipse(SDL_Renderer *renderer, float x, float y, float rx, float ry) {
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
	SDL_RenderDrawLinesF(renderer, points, 30);
}

void _fillCircle(SDL_Renderer *renderer, float x, float y, float r) {
	r = (r >= 0 ? r : -r);
	int cx = (int)x;
	int cy = (int)y;
	int rr = (int)r;
	int x1, x2, y1;
	for (int i = 1; i <= rr; ++i) {
		int line = sqrt(r * r - (r - i) * (r - i));
		x1 = cx - line;
		x2 = cx + line;
		y1 = cy - (rr - i);
		SDL_RenderDrawLine(renderer, x1, y1, x2, y1);
		x1 = cx - line;
		x2 = cx + line;
		y1 = cy + (rr - i);
		SDL_RenderDrawLine(renderer, x1, y1, x2, y1);
	}
}

void _fillEllipse(SDL_Renderer *renderer, float x, float y, float rx, float ry) {
	rx = (rx >= 0 ? rx : -rx);
	ry = (ry >= 0 ? ry : -ry);
	int cx = (int)x;
	int cy = (int)y;
	int rrx = (int)rx;
	int rry = (int)ry;
	int x1, x2, y1;
	for (int i = 1; i <= rry; ++i) {
		int line = (int)(sqrt(ry * ry - (ry - i) * (ry - i)) * rx / ry);
		x1 = cx - line;
		x2 = cx + line;
		y1 = cy - (rry - i);
		SDL_RenderDrawLine(renderer, x1, y1, x2, y1);
		x1 = cx - line;
		x2 = cx + line;
		y1 = cy + (rry - i);
		SDL_RenderDrawLine(renderer, x1, y1, x2, y1);
	}
}

void SDL_RenderDrawCircle(SDL_Renderer *renderer, const SDL_Circle *circle) {
	_drawCircle(renderer, circle->x, circle->y, circle->r);
}

void SDL_RenderDrawCircleF(SDL_Renderer *renderer, const SDL_FCircle *circle) {
	_drawCircle(renderer, circle->x, circle->y, circle->r);
}

void SDL_RenderDrawEllipse(SDL_Renderer *renderer, const SDL_Ellipse *ellipse) {
	_drawEllipse(renderer, ellipse->x, ellipse->y, ellipse->rx, ellipse->ry);
}

void SDL_RenderDrawEllipseF(SDL_Renderer *renderer, const SDL_FEllipse *ellipse) {
	_drawEllipse(renderer, ellipse->x, ellipse->y, ellipse->rx, ellipse->ry);
}

void SDL_RenderFillCircle(SDL_Renderer *renderer, const SDL_Circle *circle) {
	_fillCircle(renderer, circle->x, circle->y, circle->r);
}

void SDL_RenderFillCircleF(SDL_Renderer *renderer, const SDL_FCircle *circle) {
	_fillCircle(renderer, circle->x, circle->y, circle->r);
}

void SDL_RenderFillEllipse(SDL_Renderer *renderer, const SDL_Ellipse *ellipse) {
	_fillEllipse(renderer, ellipse->x, ellipse->y, ellipse->rx, ellipse->ry);
}

void SDL_RenderFillEllipseF(SDL_Renderer *renderer, const SDL_FEllipse *ellipse) {
	_fillEllipse(renderer, ellipse->x, ellipse->y, ellipse->rx, ellipse->ry);
}
