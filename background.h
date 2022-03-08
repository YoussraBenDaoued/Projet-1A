#ifndef Header_H
#define Header_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_mixer.h>

typedef struct {
    Mix_Music son;
	SDL_Rect position;
	SDL_Rect zone;
	SDL_Surface *img;
	SDL_Surface *obj1;
	SDL_Surface *obj2;
    SDL_Rect p_obj1;
    SDL_Rect p_obj2;
}Background;

void initBack(Background * b);
void aficherBack(Background b, SDL_Surface * screen);
void animerBackground( Background * e);
int collisionPP( Personne p, SDL_Surface * Masque);
void scrolling (background * b, int direction, int pasAvancement);

#endif
