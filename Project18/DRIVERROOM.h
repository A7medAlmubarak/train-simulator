#pragma once
class DRIVERROOM
{
	public:
	
	
	int  ch_driver, c_panel, location, keys,black ,ee ;
public:

	DRIVERROOM(void)
	{
	}

	~DRIVERROOM(void)
	{
	}

	void init()
	{
	ch_driver=LoadTexture("data//image//ch_driver.bmp",255);
	c_panel=LoadTexture("data//image//c_panel.bmp",255);
	location=LoadTexture("data//image//location.bmp",255);
	keys=LoadTexture("data//image//keys.bmp",255);
	black=LoadTexture("data//image//black.bmp",255);
	ee=LoadTexture("data//image//ee.bmp",255);
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




	/*

	void sofa3(){
		glPushMatrix();
		glTranslated(0,0,9);
		glRotated(-90,1,0,0);	   
		glRotatef(180,0.0f,0.0f,1.0f);
		glTranslatef(-17,-4.5,1);
		DrawUnitCube(-2.5,4,1,sofa,sofa);
		glPopMatrix();
		}

		void sofa3_desk(){
		glPushMatrix();
		glTranslated(0,0,9);
		glRotated(-90,1,0,0);	   
		glRotatef(180,0.0f,0.0f,1.0f);
		glTranslatef(-15,-4.5,2.7);
		DrawUnitCube(0.5,4,2,sofa,sofa);
		glPopMatrix();
		}
		}*/

	void chairdriver(){
		glPushMatrix();
		glTranslated(-9,0,7);
		glRotated(-90,1,0,0);	   
		glRotatef(180,0.0f,0.0f,1.0f);
		glTranslatef(-18,-4.5,1);
		DrawUnitCube(2,2,0.5,ch_driver,ch_driver);
		glPopMatrix();
		}
	
	void chairdriverdesk(){
		glPushMatrix();
		glTranslated(-5,0,7);
		glRotated(-90,1,0,0);	   
		glRotatef(180,0.0f,0.0f,1.0f);
		glTranslatef(-16,-4.5,2.7);
		DrawUnitCube(0.2,2,2,ch_driver,ch_driver);
		glPopMatrix();
	}

	void chairdriver1(){
		glPushMatrix();
		glTranslated(-9,0,12);
		glRotated(-90,1,0,0);	   
		glRotatef(180,0.0f,0.0f,1.0f);
		glTranslatef(-18,-4.5,1);
		DrawUnitCube(2,2,0.5,ch_driver,ch_driver);
		glPopMatrix();
		}
	
	void chairdriverdesk1(){
		glPushMatrix();
		glTranslated(-5,0,12);
		glRotated(-90,1,0,0);	   
		glRotatef(180,0.0f,0.0f,1.0f);
		glTranslatef(-16,-4.5,2.7);
		DrawUnitCube(0.2,2,2,ch_driver,ch_driver);
		glPopMatrix();
	}
	
		void controlpanel(){
		glPushMatrix();
		glTranslated(-20,0,9);
		glRotated(-90,1,0,0);	   
		glRotatef(180,0.0f,0.0f,1.0f);
		glTranslatef(-25,-4.5,4);
		DrawUnitCube(2,5,0.3,keys,c_panel);
		glPopMatrix();
		}

		
		void screen(){
		glPushMatrix();
		glTranslated(-20,4,9);
		glRotated(-90,1,0,0);	   
		glRotatef(180,0.0f,0.0f,1.0f);
		glTranslatef(-25,-4.5,4);
		DrawUnitCube(0.5,3,2,location,black);
		glPopMatrix();
		}

		void eee(){
	glPushMatrix();
	glTranslated(-2,4,6);
		glRotated(-90,1,0,0);	   
		glRotatef(180,0.0f,0.0f,1.0f);
		glTranslatef(-30,0,0);
	DrawUnitCube(2,4,4,ee,black);				
	glPopMatrix();
	}

};

