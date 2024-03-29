//
//
// SDL_circle.h
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

#ifndef _SDL_CIRCLE_H_
#define _SDL_CIRCLE_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <SDL2/SDL_render.h>

typedef struct SDL_Circle {
	int x, y, r;
} SDL_Circle;

typedef struct SDL_Ellipse {
	int x, y, rx, ry;
} SDL_Ellipse;

typedef struct SDL_FCircle {
	float x, y, r;
} SDL_FCircle;

typedef struct SDL_FEllipse {
	float x, y, rx, ry;
} SDL_FEllipse;

int SDL_RenderDrawCircle(SDL_Renderer *renderer, const SDL_Circle *circle);

int SDL_RenderDrawCircleF(SDL_Renderer *renderer, const SDL_FCircle *circle);

int SDL_RenderDrawEllipse(SDL_Renderer *renderer, const SDL_Ellipse *ellipse);

int SDL_RenderDrawEllipseF(SDL_Renderer *renderer, const SDL_FEllipse *ellipse);

int SDL_RenderFillCircle(SDL_Renderer *renderer, const SDL_Circle *circle);

int SDL_RenderFillCircleF(SDL_Renderer *renderer, const SDL_FCircle *circle);

int SDL_RenderFillEllipse(SDL_Renderer *renderer, const SDL_Ellipse *ellipse);

int SDL_RenderFillEllipseF(SDL_Renderer *renderer, const SDL_FEllipse *ellipse);

#ifdef __cplusplus
}
#endif

#endif /* _SDL_CIRCLE_H_ */
