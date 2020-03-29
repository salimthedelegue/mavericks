#ifndef PERSONNAGE_H_
#define PERSONNAGE_H_

typedef struct
{
SDL_Surface *p[6][4];
SDL_Rect pos;
int direction;
int previous_direction;
int num;
int hp[2];
int score[2];
SDL_Surface *images_hp[2][11];
int pos_absolue;
SDL_Surface *background[4];
SDL_Rect bg;
int next;
int jump;
int cheat;
int speed;
int fade;
int ralenti;
int jetpack;
}perso;

typedef struct
{
SDL_Surface *image;
SDL_Rect pos;
int xmin;
int xmax;
int d;
int num;
int speed;
}test;
typedef struct
{
SDL_Surface *image[2][5];
SDL_Rect pos;
int d;
int d1;
int num;
int num_animation;
int animation_speed;
int speed;
}ea;   //entite_aleatoire
typedef struct
{
SDL_Surface *background;
SDL_Rect pos;
SDL_Surface * question;
SDL_Surface * answers[4];
int correct;
int type;
int used; // initialisation used=0;
}enigme;


#endif
