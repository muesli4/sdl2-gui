#include "geometry.hpp"

bool within_rect(int32_t x, int32_t y, SDL_Rect const & r)
{
    return x >= r.x && x < r.x + r.w && y >= r.y && y < r.y + r.h;
}
