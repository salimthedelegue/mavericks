perso mouvementv2(perso p,int *should_move,int *exit)
{Uint8 *keystate = SDL_GetKeyState(NULL);
if(keystate[SDLK_LEFT]==1)
p.direction=1;
if(keystate[SDLK_RIGHT]==1)
p.direction=0;
if(keystate[SDLK_ESCAPE]==1)
(*exit)=1;
if((keystate[SDLK_LEFT]!=1)&&(keystate[SDLK_RIGHT]!=1)) (*should_move)=0;else(*should_move)=1;
return p;}