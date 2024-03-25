#pragma once
class CINEMAROOM
{
	public:
	
	
	int  sofa,film,black;
public:

	CINEMAROOM(void)
	{
	}

	~CINEMAROOM(void)
	{
	}

	void init()
	{
	sofa=LoadTexture("data//image//sofa.bmp",255);
	film=LoadTexture("data//image//film.bmp",255);
	black=LoadTexture("data//image//black.bmp",255);

	}
	
	
	void DrawUnitCube1(int x,int y,int z,int id1,int id2)
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

     	
		//right
		glTexCoord2f(1,0) ; 		glVertex3f(x,-y,-z);
		glTexCoord2f(0,0) ; 		glVertex3f(x,y,-z);
		glTexCoord2f(0,1) ; 		glVertex3f(x,y,z);
		glTexCoord2f(1,1) ;			glVertex3f(x,-y,z);

		
		//up
		
		 glTexCoord2f(1,0) ; 		glVertex3f(x,-y,z); 
		glTexCoord2f(1,1) ;			glVertex3f(x,y,z);
		glTexCoord2f(0,1) ;			glVertex3f(-x,y,z);
		glTexCoord2f(0,0) ;			glVertex3f(-x,-y,z);
		//down
		glTexCoord2f(1,0) ; 		glVertex3f(x,y,-z);
		glTexCoord2f(1,1) ; 		glVertex3f(x,y,-z);
		glTexCoord2f(0,1) ; 		glVertex3f(-x,y,-z);
		glTexCoord2f(0,0) ; 		glVertex3f(-x,y,-z);
	//back
	    glTexCoord2f(0,1) ; 	    glVertex3f(x,y,z);
		glTexCoord2f(0,0) ;  		glVertex3f(x,y,-z);
		glTexCoord2f(1,0) ;		    glVertex3f(-x,y,-z);
		glTexCoord2f(1,1) ;		    glVertex3f(-x,y,z);
		glEnd();

		glBindTexture(GL_TEXTURE_2D,id2);
		glBegin(GL_QUADS);
	
	//left
		glTexCoord2f(0,1) ; 		glVertex3f(-x,-y,z);
		glTexCoord2f(1,1) ; 		glVertex3f(-x,y,z);
		glTexCoord2f(1,0) ; 		glVertex3f(-x,y,-z);
		glTexCoord2f(0,0) ;			glVertex3f(-x,-y,-z);

		  
		
	glEnd();

	glPopMatrix();
}


	void DrawUnitCube(float x,float y,float z,int id1,int id2)
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




	void sofa1(){
		glPushMatrix();
		glTranslated(0,0,9);
		glRotated(-90,1,0,0);	   
		glRotatef(180,0.0f,0.0f,1.0f);
		glTranslatef(-6,-4.5,1);
		DrawUnitCube(-2.5,4,1,sofa,sofa);
		glPopMatrix();
	}

	void sofa1_desk(){
		glPushMatrix();
		glTranslated(0,0,9);
		glRotated(-90,1,0,0);	   
		glRotatef(180,0.0f,0.0f,1.0f);
		glTranslatef(-4,-4.5,2.7);
		DrawUnitCube(0.5,4,4,sofa,sofa);
		glPopMatrix();
	}

		void sofa2(){
		glPushMatrix();
		glTranslated(0,0,9);
		glRotated(-90,1,0,0);	   
		glRotatef(180,0.0f,0.0f,1.0f);
		glTranslatef(-12,-4.5,1);
		DrawUnitCube(-2.5,4,1,sofa,sofa);
		glPopMatrix();
		}


		void sofa2_desk(){	
		glPushMatrix();
		glTranslated(0,0,9);
		glRotated(-90,1,0,0);	   
		glRotatef(180,0.0f,0.0f,1.0f);
		glTranslatef(-10,-4.5,2.7);
		DrawUnitCube(0.5,4,3,sofa,sofa);

		glPopMatrix();
		}

		void sofa3(){
		glPushMatrix();
		glTranslated(0,0,9);
		glRotated(-90,1,0,0);	   
		glRotatef(180,0.0f,0.0f,1.0f);
		glTranslatef(-18,-4.5,1);
		DrawUnitCube(-2.5,4,1,sofa,sofa);
		glPopMatrix();
		}

		void sofa3_desk(){
		glPushMatrix();
		glTranslated(0,0,9);
		glRotated(-90,1,0,0);	   
		glRotatef(180,0.0f,0.0f,1.0f);
		glTranslatef(-16,-4.5,2.7);
		DrawUnitCube(0.5,4,2,sofa,sofa);
		glPopMatrix();
		}

		void screen(){
		glPushMatrix();
		glTranslated(0,0,9);
		glRotated(-90,1,0,0);	   
		glRotatef(180,0.0f,0.0f,1.0f);
		glTranslatef(-25,-4.5,4);
		DrawUnitCube1(-1,4,2,black,film);
		glPopMatrix();
		}

};

