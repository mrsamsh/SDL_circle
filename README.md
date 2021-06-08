# SDL_circle

This is an implementation for SDL2 library that enables drawing and filling
circles and ellipsed. It has a fixed percision for drawing (30 lines), and
it is fase because sin and cos values are pre calculated and hardcoded.

Fill relies on a simple concept of calculating line lengthes for half of the
circle / ellipse. It is fast when circle / ellipse are small in size.
