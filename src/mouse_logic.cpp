#include "mouse_logic.hpp"
#include <iostream>

LButton::LButton()
{
    mPosition.x = 0;
    mPosition.y = 0;
}

void LButton::setPosition( int x, int y )
{
    mPosition.x = x;
    mPosition.y = y;
}

bool LButton::handleEvent( SDL_Event* e, int &x, int &y )
{
    if( e->type == SDL_MOUSEMOTION || e->type == SDL_MOUSEBUTTONDOWN ||
	e->type == SDL_MOUSEBUTTONUP )
    {
	SDL_GetMouseState( &x, &y );
	switch( e->type )
	{
	case SDL_MOUSEBUTTONDOWN:
	    return true;
	    break;
	}
       
    }
}
