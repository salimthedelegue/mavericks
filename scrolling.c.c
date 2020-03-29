perso scrolling_background(perso p)
{if(color_test(p.background[1],p)==0)
if(p.direction==0)
  {
  if ((p.pos.x<420)&&(p.bg.x+p.bg.w>1440)) {p.pos.x=p.pos.x+p.speed;p.bg.x=p.bg.x-p.speed;p.pos_absolue=-p.speed;}
  else if(p.bg.x+p.bg.w>1920) {p.bg.x=p.bg.x-(2*p.speed);p.pos_absolue=-(2*p.speed);}  
  else if(p.pos.x+p.pos.w<1920) p.pos.x=p.pos.x+(2*p.speed);   
  }
if(color_test(p.background[1],p)==0)if(p.direction==1)
  {
  if (p.pos.x>0) {p.pos.x=p.pos.x-p.speed;p.bg.x=p.bg.x+p.speed;p.pos_absolue=p.speed;}
  else if(p.bg.x<-10) {p.bg.x=p.bg.x+(2*p.speed);p.pos_absolue=(2*p.speed);}    
  else if(p.pos.x+p.pos.w>500) p.pos.x=p.pos.x-(2*p.speed);     
  }
return p;
}