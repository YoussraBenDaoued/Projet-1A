#ifndef Header_H
#define Header_H
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_mixer.h>

typedef struct {
	SDL_Rect position;
	SDL_Rect zone;
	SDL_Surface *initial;
	SDL_Surface *mouv[10];
	SDL_Surface *saut[10];
	int etat;
}Personne;


void initPerso(Personne *p);
void afficherPerso(Personne p, SDL_Surface * screen);
void deplacerPerso (Personne *p, , int dt);
void animerPerso (Personne* p);
void saut (Personne* p);

#endif
