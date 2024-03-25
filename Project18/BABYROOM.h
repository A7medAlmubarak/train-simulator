#pragma once
class BABYROOM
{
	public:
	
	
	int  wood3,wood4,carpet2,pint,flooar,paiint,cover1,rr,cover2;
public:

	BABYROOM(void)
	{
	}

	~BABYROOM(void)
	{
	}

	void init()
	{
	wood3=LoadTexture("data//image//wood3.bmp",255);
	rr=LoadTexture("data//image//rr.bmp",255);
	cover2=LoadTexture("data//image//cover2.bmp",255);
	wood4=LoadTexture("data//image//wood4.bmp",255);
	carpet2=LoadTexture("data//image//carpet2.bmp",255);
	pint=LoadTexture("data//image//pint.bmp",255);
	flooar=LoadTexture("data//image//flooar.bmp",255);
	cover1=LoadTexture("data//image//cover.bmp",255);
	paiint=LoadTexture("data//image//paiint.bmp",255);
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

	void bed1(){
		glPushMatrix();
		glTranslated(0,0,9);
		glRotated(-90,1,0,0);	   
		glRotatef(180,0.0f,0.0f,1.0f);
		glTranslatef(-7,-4.5,1);
		DrawUnitCube(-2.5,4,1,wood3,cover2);
		glPopMatrix();
	}

	void pillow1(){
		glPushMatrix();
		glTranslated(0,0,9);
		glRotated(-90,1,0,0);	   
		glRotatef(180,0.0f,0.0f,1.0f);
		glTranslatef(-7,-7.5,2.5);
		DrawUnitCube(-2.3,1,0.4,rr,rr);
		glPopMatrix();
	}

		void furniture(){
		glPushMatrix();
		glTranslated(0,0,9);
		glRotated(-90,1,0,0);	   
		glRotatef(180,0.0f,0.0f,1.0f);
		glTranslatef(-13,-8,5);
		DrawUnitCube(-3,0.2,3,paiint,paiint);
		glPopMatrix();
		}

		void bed2(){	
		glPushMatrix();
		glTranslated(0,0,9);
		glRotated(-90,1,0,0);	   
		glRotatef(180,0.0f,0.0f,1.0f);
		glTranslatef(-20,-4.5,1);
		DrawUnitCube(-2.5,4,1,wood3,cover2);
		glPopMatrix();
		}

		void pillow2(){
		glPushMatrix();
		glTranslated(0,0,9);
		glRotated(-90,1,0,0);	   
		glRotatef(180,0.0f,0.0f,1.0f);
		glTranslatef(-20,-7.5,2.5);
		DrawUnitCube(-2.4,1,0.4,rr,rr);
		glPopMatrix();
		}

		void carpet(){
		glPushMatrix();
		glTranslated(0,0,9);
		glRotated(-90,1,0,0);	   
		glRotatef(180,0.0f,0.0f,1.0f);
		glTranslatef(-12,-3,0.05);
		DrawUnitCube(-4,2,0.01,wood4,carpet2);
		glPopMatrix();
		}

		void paint(){
		glPushMatrix();
		glTranslated(0,0,9);
		glRotated(-90,1,0,0);	   
		glRotatef(180,0.0f,0.0f,1.0f);
		glTranslatef(-25,-3,0.05);
		DrawUnitCube(-1,1,0.01,wood4,pint);
		glPopMatrix();
		}


};

