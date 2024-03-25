#pragma once
class TRAILER
{
	public:
	
		  
	float doorX ;
	int doorOpenState ;
	int wall2,train_cover1,train_cover,wood10,doooor;
	Model_3DS *wheel;
	GLTexture Carbon;

public:

	TRAILER(void)
	{
	}

	~TRAILER(void)
	{
	}

	void init()
	{
	train_cover=LoadTexture("data//image//train_complete.bmp");
	train_cover1=LoadTexture("data//image//train_cover1.bmp");
	wall2=LoadTexture("data//image//wall2.bmp",255);
	wood10=LoadTexture("data//image//wood1.bmp",255);
	doooor=LoadTexture("data//image//doooor.bmp",255);
	


	
	wheel=new Model_3DS();
	wheel->Load("data//model//wheel.3DS");

	Carbon.LoadBMP("data//image//metal1.bmp");
	wheel->Materials[0].tex = Carbon;
	wheel->Materials[1].tex = Carbon;
	wheel->Materials[2].tex = Carbon;
	wheel->Materials[3].tex = Carbon;
	wheel->Materials[4].tex = Carbon;
	wheel->Materials[5].tex = Carbon;
	wheel->Materials[6].tex = Carbon;
	wheel->Materials[7].tex = Carbon;
	wheel->Materials[8].tex = Carbon;
	wheel->Materials[9].tex = Carbon;
	wheel->Materials[10].tex = Carbon;
	wheel->Materials[11].tex = Carbon;
	wheel->Materials[12].tex = Carbon;
	wheel->Materials[13].tex = Carbon;
	wheel->Materials[14].tex = Carbon;
	wheel->Materials[15].tex = Carbon;
	wheel->Materials[16].tex = Carbon;


	}


void trailerwall()
{

  glPushMatrix();
  glEnable(GL_TEXTURE_2D);
  glBindTexture(GL_TEXTURE_2D,wall2); // Bind texture

    glBegin(GL_QUADS);
    //front inside

    glTexCoord2f(0,0) ; glVertex3f(0,0,0);
	glTexCoord2f(1,0) ;	glVertex3f(30,0,0);
    glTexCoord2f(1,1) ; glVertex3f(30,10,0);
    glTexCoord2f(0,1) ; glVertex3f(0,10,0);
	
    //right inside
    glTexCoord2f(1,0) ; glVertex3f(30,0,0);
    glTexCoord2f(0,0) ; glVertex3f(30,0,10);
    glTexCoord2f(0,1) ; glVertex3f(30,10,10);
    glTexCoord2f(1,1) ; glVertex3f(30,10,0);

    //left inside
    glTexCoord2f(0,1) ;  glVertex3f(0,0,0);
    glTexCoord2f(1,1);   glVertex3f(0,0,10);
    glTexCoord2f(1,0) ;  glVertex3f(0,10,10);
    glTexCoord2f(0,0) ;  glVertex3f(0,10,0);

	glEnd();

	
    glBegin(GL_QUADS);
    //up
    glTexCoord2f(1,0) ;    glVertex3f(0,10,0); 
    glTexCoord2f(1,1) ;    glVertex3f(30,10,0);
    glTexCoord2f(0,1) ;    glVertex3f(30,10,10);
    glTexCoord2f(0,0) ;    glVertex3f(0,10,10);
	//down
    glTexCoord2f(1,0) ;   glVertex3f(0,0,0); 
    glTexCoord2f(1,1) ;   glVertex3f(30,0,0);
    glTexCoord2f(0,1) ;   glVertex3f(30,0,10);
    glTexCoord2f(0,0) ;   glVertex3f(0,0,10);

	       //window side
    glTexCoord2f(0,1) ;   glVertex3f(0,0,10);
    glTexCoord2f(0,0) ;   glVertex3f(30,0,10);
    glTexCoord2f(1,0) ;   glVertex3f(30,3,10);
    glTexCoord2f(1,1) ;   glVertex3f(0,3,10);

	glTexCoord2f(0,1) ;   glVertex3f(0,7,10);
    glTexCoord2f(0,0) ;   glVertex3f(30,7,10);
    glTexCoord2f(1,0) ;   glVertex3f(30,10,10);
    glTexCoord2f(1,1) ;   glVertex3f(0,10,10);
	glEnd();

    glBegin(GL_QUADS);

    glTexCoord2f(0,1) ;    glVertex3f(0,7,10);
    glTexCoord2f(0,0) ;    glVertex3f(8,7,10);
    glTexCoord2f(1,0) ;    glVertex3f(8,3,10);
    glTexCoord2f(1,1) ;    glVertex3f(0,3,10);

	glTexCoord2f(0,1) ;    glVertex3f(22,7,10);
    glTexCoord2f(0,0) ;    glVertex3f(30,7,10);
    glTexCoord2f(1,0) ;    glVertex3f(30,3,10);
    glTexCoord2f(1,1) ;    glVertex3f(22,3,10);

  glEnd();
  glPopMatrix();
  
}







void trailerbody()
{

  glPushMatrix();
  glEnable(GL_TEXTURE_2D);
  glBindTexture(GL_TEXTURE_2D,train_cover); // Bind texture

    glBegin(GL_QUADS);
      //front
    glTexCoord2f(0,0) ;   glVertex3f(-0.5,-2,-0.5);
    glTexCoord2f(1,0) ;   glVertex3f(30.5,-2,-0.5);
    glTexCoord2f(1,1) ;   glVertex3f(30.5,10.5,-0.5);
    glTexCoord2f(0,1) ;   glVertex3f(-0.5,10.5,-0.5);
	glEnd();

    glBindTexture(GL_TEXTURE_2D,train_cover1); // Bind texture
    glBegin(GL_QUADS);
    //right 
    glTexCoord2f(1,0) ; glVertex3f(30.5,-2,-0.5);
    glTexCoord2f(0,0) ; glVertex3f(30.5,-2,10.5);
    glTexCoord2f(0,1) ; glVertex3f(30.5,10.5,10.5);
    glTexCoord2f(1,1) ; glVertex3f(30.5,10.5,-0.5);
	
    //left 
    glTexCoord2f(0,1) ;   glVertex3f(-0.5,-2,-0.5);
    glTexCoord2f(1,1);    glVertex3f(-0.5,-2,10.5);
    glTexCoord2f(1,0) ;   glVertex3f(-0.5,10.5,10.5);
    glTexCoord2f(0,0) ;   glVertex3f(-0.5,10.5,-0.5);

	glEnd();

	glBindTexture(GL_TEXTURE_2D,train_cover); // Bind texture
    glBegin(GL_QUADS);
    //up
    glTexCoord2f(1,0) ;   glVertex3f(-0.5,10.5,-0.5); 
    glTexCoord2f(1,1) ;   glVertex3f(30.5,10.5,-0.5);
    glTexCoord2f(0,1) ;   glVertex3f(30.5,10.5,10.5);
    glTexCoord2f(0,0) ;   glVertex3f(-0.5,10.5,10.5);

	       //window side
    glTexCoord2f(0,1) ;    glVertex3f(-0.5,-2,10.5);
    glTexCoord2f(0,0) ;    glVertex3f(30.5,-2,10.5);
    glTexCoord2f(1,0) ;    glVertex3f(30.5,3,10.5);
    glTexCoord2f(1,1) ;    glVertex3f(-0.5,3,10.5);

	glTexCoord2f(0,1) ;    glVertex3f(-0.5,7,10.5);
    glTexCoord2f(0,0) ;    glVertex3f(30.5,7,10.5);
    glTexCoord2f(1,0) ;    glVertex3f(30.5,10.5,10.5);
    glTexCoord2f(1,1) ;    glVertex3f(-0.5,10.5,10.5);
    glEnd();

    glBegin(GL_QUADS);
	glTexCoord2f(0,1) ;    glVertex3f(-0.5,7,10.5);
    glTexCoord2f(0,0) ;    glVertex3f(8,7,10.5);
    glTexCoord2f(1,0) ;    glVertex3f(8,3,10.5);
    glTexCoord2f(1,1) ;    glVertex3f(-0.5,3,10.5);

	glTexCoord2f(0,1) ;    glVertex3f(22,7,10.5);
    glTexCoord2f(0,0) ;    glVertex3f(30.5,7,10.5);
    glTexCoord2f(1,0) ;    glVertex3f(30.5,3,10.5);
    glTexCoord2f(1,1) ;    glVertex3f(22,3,10.5);

    glEnd();

  glPopMatrix();
  
}

void trailerwheel(){
	 glPushMatrix();
	 for( int i=1 ; i<5;i++ ){
	glTranslated(6,0,0);
	wheel->pos.z=6.8;
	wheel->pos.x=-4;
	wheel->pos.y=-5.4;
	wheel->rot.y=90;
	wheel->scale=0.01;
    wheel->Draw();

	wheel->pos.z=3;
	wheel->pos.x=1;
	wheel->pos.y=-5.4;
	wheel->rot.y=-90;
	wheel->scale=0.01;
    wheel->Draw();

	 }

	 		glPopMatrix();

}


void buildwindow(){
		glPushMatrix();

		glPushMatrix();
		glTranslated(15,7,10);
		DrawUnitCube1(7,0.3,0.5,wood10,wood10,wood10);
		glPopMatrix();

		glPushMatrix();
		glTranslated(15,3,10);
		DrawUnitCube1(7,0.3,0.5,wood10,wood10,wood10);
		glPopMatrix();

		glPushMatrix();
		glTranslated(22,5,10);
		DrawUnitCube1(0.3,2.2,0.5,wood10,wood10,wood10);
		glPopMatrix();

		glPushMatrix();
		glTranslated(8,5,10);
		DrawUnitCube1(0.3,2.2,0.5,wood10,wood10,wood10);
		glPopMatrix();

		glPopMatrix();

}

void window_glass(){
	glPushMatrix();{
	glBlendFunc(GL_SRC_ALPHA ,GL_ONE_MINUS_SRC_ALPHA); //the blend function
	glEnable(GL_BLEND);	  
	  glColor4f(1.0f,1.0f,1.0f,0.5f);

	glBegin(GL_QUADS);
	glVertex3f(8,3,10);
	glVertex3f(22,3,10);
	glVertex3f(22,7,10);
	glVertex3f(8,7,10);
	glEnd();
		glDisable(GL_BLEND);
	}
	glPopMatrix();
		glColor3f(1, 1, 1);



}


void DrawUnitCube1(float x,float y,float z,int id1,int id2,int id3)
{
	glPushMatrix();
	glBindTexture(GL_TEXTURE_2D,id1);
	glColor3f(1, 1, 1);
	glBegin(GL_QUADS);

	//front
	glTexCoord2f(1,0) ; 		glVertex3f(x,-y,-z);
	glTexCoord2f(1,1) ; 		glVertex3f(x,-y,z);
	glTexCoord2f(0,1) ; 		glVertex3f(-x,-y,z);
	glTexCoord2f(0,0) ; 		glVertex3f(-x,-y,-z);
	glEnd();
	glBindTexture(GL_TEXTURE_2D,id3);
	glBegin(GL_QUADS);
	//back
	glTexCoord2f(0,1) ; 	    glVertex3f(x,y,z);
	glTexCoord2f(0,0) ;  		glVertex3f(x,y,-z);
	glTexCoord2f(1,0) ;		    glVertex3f(-x,y,-z);
	glTexCoord2f(1,1) ;		    glVertex3f(-x,y,z);

	//right
	glTexCoord2f(1,0) ; 		glVertex3f(x,-y,-z);
	glTexCoord2f(0,0) ; 		glVertex3f(x,y,-z);
	glTexCoord2f(0,1) ; 		glVertex3f(x,y,z);
	glTexCoord2f(1,1) ;			glVertex3f(x,-y,z);

	//left
	glTexCoord2f(0,1) ; 		glVertex3f(-x,-y,z);
	glTexCoord2f(1,1) ; 		glVertex3f(-x,y,z);
	glTexCoord2f(1,0) ; 		glVertex3f(-x,y,-z);
	glTexCoord2f(0,0) ;			glVertex3f(-x,-y,-z);

	glEnd();

	glBindTexture(GL_TEXTURE_2D,id2);
	glBegin(GL_QUADS);
	//up

	glTexCoord2f(1,0) ; 		glVertex3f(x,-y,z); 
	glTexCoord2f(1,1) ;			glVertex3f(x,y,z);
	glTexCoord2f(0,1) ;			glVertex3f(-x,y,z);
	glTexCoord2f(0,0) ;			glVertex3f(-x,-y,z);
	//down
	
	glTexCoord2f(1,0) ; 		glVertex3f(x,-y,-z);
	glTexCoord2f(1,1) ; 		glVertex3f(x,y,-z);
	glTexCoord2f(0,1) ; 		glVertex3f(-x,y,-z);
	glTexCoord2f(0,0) ; 		glVertex3f(-x,-y,-z);
	glEnd();
	
	glPopMatrix();
}

	

/////door
/*
void door(){
	  glPushMatrix();{
 glBegin(GL_QUADS);
      //front

   // glTexCoord2f(0,0) ;
 glTranslated(10,4,10);
	glVertex3f(-0.5,-2,-0.5);
   // glTexCoord2f(1,0) ; 
	glVertex3f(10,-2,-0.5);
		// glTexCoord2f(1,1) ; 
	glVertex3f(10,10,-0.5);
   // glTexCoord2f(0,1) ; 
	glVertex3f(-0.5,10,-0.5);
		glEnd();
  }glPopMatrix();
  */


void door(){
	  glPushMatrix();{

     
 //glTranslated(10,4,10);
		 // glTranslated(-5,0,12);
		  glTranslatef(0,5,5);
		DrawUnitCube1(0.5,5,2,doooor,doooor,doooor);
	
  }glPopMatrix();

}







};

