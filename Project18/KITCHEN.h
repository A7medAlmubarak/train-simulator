#pragma once
class KITCHEN
{
	public:
	
	
	int  oven,topoven,oven0,wood,magla,saqf,babmagla,rikhammagla,dishwasher;
	int	s1,s2,s3,s4,brad,rightt,tablecover,filter,rfof,white,backk;
public:

	KITCHEN(void)
	{
	}

	~KITCHEN(void)
	{
	}

	void init()
	{
		oven=LoadTexture("nourhan//oven.bmp",255);
		topoven=LoadTexture("nourhan//topoven.bmp",255);
		oven0=LoadTexture("nourhan//oven0.bmp",255);
		wood=LoadTexture("nourhan//wood.bmp",255);
		magla=LoadTexture("nourhan//magla.bmp",255);
		saqf=LoadTexture("nourhan//saqf.bmp",255);
		babmagla=LoadTexture("nourhan//babmagla.bmp",255);
		rikhammagla=LoadTexture("nourhan//rikhammagla.bmp",255);
		dishwasher=LoadTexture("nourhan//dishwasher.bmp",255);
		s1=LoadTexture("nourhan//s1.bmp",255);
		s2=LoadTexture("nourhan//s2.bmp",255);
		s3=LoadTexture("nourhan//s3.bmp",255);
		s4=LoadTexture("nourhan//s4.bmp",255);
		brad=LoadTexture("nourhan//brad.bmp",255);
		rightt=LoadTexture("nourhan//rightt.bmp",255);
		tablecover=LoadTexture("nourhan//tablecover.bmp",255);
		filter=LoadTexture("nourhan//filter.bmp",255);
		rfof=LoadTexture("nourhan//rfof.bmp",255);
		white=LoadTexture("nourhan//white.bmp",255);
		backk=LoadTexture("nourhan//backk.bmp",255);

	}

	void oven1(){
	glPushMatrix();
		glTranslated(2.2,-2,1);
		glRotatef(90 , 0.0f, 0.0f, 1.0f);
		DrawUnitCube1(2,2,2,oven,topoven,oven);				
		glPopMatrix();
	
	}

	void shelves(){ //
	glPushMatrix();
		  glScaled(0.5,0.5,0.5);
		glTranslated(10,-3,13);
		//glTranslatef(16.5,13,12);
		glRotatef(0 , 0.0f, 0.0f, 1.0f);
		DrawUnitCube1(2,1,2,rfof,oven0,oven0);				
	glPopMatrix();
	}

	void oven3(){
	glPushMatrix();{
		glTranslated(30,0,0);
		glTranslatef(2,2, 2);
		glRotatef(180 , 0.0f, 0.0f, 1.0f);
		DrawUnitCube1(2,2,2,oven0,oven0,dishwasher);
					}
	glPopMatrix();
	}

	void water_filter(){
	glPushMatrix();{
		glTranslated(6,-9,2);
		glRotatef(180 , 0.0f, 0.0f, 1.0f);
		DrawUnitCube1(1,1,2,white,white,filter);
					}
	glPopMatrix();
	
	}

	void braad(){
	glPushMatrix();
	glScaled(0.7,0.7,0.7);
	glTranslatef(2,-12.5,5);
	DrawUnitCube1(2,2,6,oven0,oven0,brad);				
	glPopMatrix();
	}

	void table1(){
			glPushMatrix();

					  glScaled(0.5,0.5,0.5);
					  glTranslated(30,-12,0);

	glPushMatrix();
	glTranslated(-30,0,0);
	glTranslatef(30,3.5,4.5);
	glRotatef(90 , 0.0f, 1.0f, 0.0f);
	DrawUnitCube1(0.3,6,12,wood,wood,wood);
	glPopMatrix();
	
	glPushMatrix();{
		glTranslated(-30,0,0);
		glTranslatef(23,9.2, 1.8);
		glRotatef(90 , 0.0f, 1.0f, 0.0f);
		DrawUnitCube1(2.4,0.2,0.2,wood,wood,wood);
		glRotatef(51.428, 0, 0, 1);
		}
	glPopMatrix();

	glPushMatrix();{
		glTranslated(-30,0,0);
		glTranslatef(23,-1, 1.8);
		glRotatef(90 , 0.0f, 1.0f, 0.0f);
		DrawUnitCube1(2.4,0.2,0.2,wood,wood,wood);
		glRotatef(51.428, 0, 0, 1);
		}
	glPopMatrix();

	glPushMatrix();{
		glTranslatef(10,-1, 1.8);
		glRotatef(90 , 0.0f, 1.0f, 0.0f);
		DrawUnitCube1(2.4,0.2,0.2,wood,wood,wood);
		glRotatef(51.428, 0, 0, 1);
		}
	glPopMatrix();

	glPushMatrix();{
		glTranslatef(10,9.2, 1.8);
		glRotatef(90 , 0.0f, 1.0f, 0.0f);
		DrawUnitCube1(2.4,0.2,0.2,wood,wood,wood);
		glRotatef(51.428, 0, 0, 1);
		}
	glPopMatrix();





	glPopMatrix();
	}
	
	void chairs(){
					glPushMatrix();

					  glScaled(0.5,0.5,0.5);
					  glTranslated(30,-12,0);

	glPushMatrix();{
		glTranslatef(-9,15, -5);
		glRotatef(180 , 0.0f, 1.0f, 1.0f);
		glRotatef(90 , 0.0f, 1.0f, 0.0f);
		glRotatef(180 , 0.0f, 0.0f, 1.0f);
		//glTranslatef(70,0, 10);
		glScaled(1,2,2);
		chair(wood);
					}
	glPopMatrix();
	glPushMatrix();{
		glTranslatef(-13,18, -5);
		glRotatef(180 , 0.0f, 1.0f, 1.0f);
			glRotatef(180 , 0.0f, 0.0f, 1.0f);
		glScaled(1,2,2);
		chair(wood);
					}
	glPopMatrix();

	


	/*idk*/
	glPushMatrix();{
		glTranslated(-30,0,0);
		glTranslatef(29.4,12, 2);
		glRotatef(90 , 0.0f, 1.0f, 0.0f);
		DrawUnitCube1(1,1.01,0.2,wood,wood,wood);
		glRotatef(51.428, 0, 0, 1);
		}
	glPopMatrix();
	glPushMatrix();{
		glTranslated(-30,0,0);
		glTranslatef(40,12, 2);
		glRotatef(90 , 0.0f, 1.0f, 0.0f);
		DrawUnitCube1(1,1.01,0.2,wood,wood,wood);
		glRotatef(51.428, 0, 0, 1);
		}
	glPopMatrix();
	glPushMatrix();{
		glTranslated(-30,0,0);
		glTranslatef(14,9, 2);
		//glRotatef(360 , 0.0f, 1.0f, 0.0f);
		glRotatef(90 , 1.0f, 0.0f, 0.0f);
		//glRotatef(90 , 0.0f, 1.0f, 0.0f);
		DrawUnitCube1(1,1.8,0.2,wood,wood,wood);
		glRotatef(51.428, 0, 0, 1);
		}
	glPopMatrix();
	glPushMatrix();{
		glTranslated(-30,0,0);
		glTranslatef(14,-1, 2);
		//glRotatef(360 , 0.0f, 1.0f, 0.0f);
		glRotatef(90 , 1.0f, 0.0f, 0.0f);
		//glRotatef(90 , 0.0f, 1.0f, 0.0f);
		DrawUnitCube1(1,1.8,0.2,wood,wood,wood);
		glRotatef(51.428, 0, 0, 1);
		}
	glPopMatrix();


		glPopMatrix();


	}

	
	


	void furniture(){
		glPushMatrix();
					glScaled(0.5,0.5,0.5);
					  glTranslated(30,-15,0);

	glPushMatrix();{
		//glTranslated(-30,0,0);
		glTranslatef(29,5,2.8);
		glRotatef(360 , 0.0f, 0.0f, 1.0f);
		DrawUnitCube1(1,2,2.8,oven0,magla,s3);
					}
	glPopMatrix();

	glPushMatrix();{
		//glTranslated(-30,0,0);
		glTranslatef(29,9,2.8);
		glRotatef(360 , 0.0f, 0.0f, 1.0f);
		DrawUnitCube1(1,2,2.8,oven0,rikhammagla,s3);
					}
	glPopMatrix();

/////////////////////////
	glPushMatrix();{
		glTranslatef(29,1,2.8);
		glRotatef(360 , 0.0f, 0.0f, 1.0f);
		DrawUnitCube1(1,2,2.8,oven0,rikhammagla,s3);
					}
	glPopMatrix();
	/////////////
	glPushMatrix();{
		glTranslatef(29,-2.9,2.8);
		glRotatef(360 , 0.0f, 0.0f, 1.0f);
		DrawUnitCube1(1,2,2.8,oven0,rikhammagla,s3);
					}
	glPopMatrix();
///////////////////////////
		glPushMatrix();{
		glTranslatef(29,12.9,2.8);
		glRotatef(360 , 0.0f, 0.0f, 1.0f);
		DrawUnitCube1(1,2,2.8,oven0,rikhammagla,s3);
					}
	glPopMatrix();
/////////////////////////////////
	//„ÿ«»Œ «·—› «·›Êﬁ«‰Ì
	glPushMatrix();{
		//glTranslated(-30,0,0);
		glTranslatef(29,5,12);
		glRotatef(360 , 0.0f, 0.0f, 1.0f);
		DrawUnitCube1(1,2,2.8,oven0,oven0,s3);
					}
	glPopMatrix();
	//„ÿ«»Œ «·—› «·›Êﬁ«‰Ì
	glPushMatrix();{
		glTranslatef(29,9,12);
		glRotatef(360 , 0.0f, 0.0f, 1.0f);
		DrawUnitCube1(1,2,2.8,oven0,oven0,s3);
					}
	glPopMatrix();

	//„ÿ«»Œ «·—› «·›Êﬁ«‰Ì

	glPushMatrix();{
		glTranslatef(29,1,12);
		glRotatef(360 , 0.0f, 0.0f, 1.0f);
		DrawUnitCube1(1,2,2.8,oven0,oven0,s3);
					}
	glPopMatrix();
	//„ÿ«»Œ «·—› «·›Êﬁ«‰Ì
	glPushMatrix();{
		glTranslatef(29,-2.9,12);
		glRotatef(360 , 0.0f, 0.0f, 1.0f);
		DrawUnitCube1(1,2,2.8,oven0,oven0,s3);
					}
	glPopMatrix();
	//„ÿ«»Œ «·—› «·›Êﬁ«‰Ì
		glPushMatrix();{
		glTranslatef(29,12.9,12);
		glRotatef(360 , 0.0f, 0.0f, 1.0f);
		DrawUnitCube1(1,2,2.8,oven0,oven0,s3);
					}
	glPopMatrix();

		glPopMatrix();

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

	
void Drawtrain(int x,int y,int z,int id1,int id2,int id3,int id4,int id5,int id6)
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
	//back
	glBindTexture(GL_TEXTURE_2D,id2);
	glColor3f(1, 1, 1);
	glBegin(GL_QUADS);
	glTexCoord2f(0,1) ; 	    glVertex3f(x,y,z);
	glTexCoord2f(0,0) ;  		glVertex3f(x,y,-z);
	glTexCoord2f(1,0) ;		    glVertex3f(-x,y,-z);
	glTexCoord2f(1,1) ;		    glVertex3f(-x,y,z);
	glEnd();
	//right
	glBindTexture(GL_TEXTURE_2D,id3);
	glColor3f(1, 1, 1);
	glBegin(GL_QUADS);
	glTexCoord2f(1,0) ; 		glVertex3f(x,-y,-z);
	glTexCoord2f(0,0) ; 		glVertex3f(x,y,-z);
	glTexCoord2f(0,1) ; 		glVertex3f(x,y,z);
	glTexCoord2f(1,1) ;			glVertex3f(x,-y,z);
	glEnd();
	//left
	glBindTexture(GL_TEXTURE_2D,id4);
	glColor3f(1, 1, 1);
	glBegin(GL_QUADS);
	glTexCoord2f(0,1) ; 		glVertex3f(-x,-y,z);
	glTexCoord2f(1,1) ; 		glVertex3f(-x,y,z);
	glTexCoord2f(1,0) ; 		glVertex3f(-x,y,-z);
	glTexCoord2f(0,0) ;			glVertex3f(-x,-y,-z);
	glEnd();
	//up
	glBindTexture(GL_TEXTURE_2D,id5);
	glColor3f(1, 1, 1);
	glBegin(GL_QUADS);
	glTexCoord2f(1,0) ; 		glVertex3f(x,-y,z); 
	glTexCoord2f(1,1) ;			glVertex3f(x,y,z);
	glTexCoord2f(0,1) ;			glVertex3f(-x,y,z);
	glTexCoord2f(0,0) ;			glVertex3f(-x,-y,z);
	glEnd();
	//down
	glBindTexture(GL_TEXTURE_2D,id6);
	glColor3f(1, 1, 1);
	glBegin(GL_QUADS);
	glTexCoord2f(1,0) ; 		glVertex3f(x,-y,-z);
	glTexCoord2f(1,1) ; 		glVertex3f(x,y,-z);
	glTexCoord2f(0,1) ; 		glVertex3f(-x,y,-z);
	glTexCoord2f(0,0) ; 		glVertex3f(-x,-y,-z);
	glEnd();

	glPopMatrix();
}

	void chair(int f1)
{

glPushMatrix();
		 glTranslated(-4,-5,-4),
		glBindTexture(GL_TEXTURE_2D,f1);
			glColor3f(1, 1, 1);
	glBegin(GL_QUADS); 
	// FRONT
		glTexCoord2f(1,0) ;
		glVertex3d(0,0,0);
		glTexCoord2f(1,1) ;
		glVertex3d(2,0,0);
		glTexCoord2f(0,1) ;
		glVertex3d(2,1,0);
		glTexCoord2f(0,0) ;
		glVertex3d(0,1,0);

	 //UP
	//glColor3d(0,1,1);
		glTexCoord2f(0,1) ;
		glVertex3d(0,1,0);
		glTexCoord2f(0,0) ;
		glVertex3d(2,1,0);
		glTexCoord2f(1,0) ;
		glVertex3d(2,1,-6);
		glTexCoord2f(1,1) ;
		glVertex3d(0,1,-6);

	 //right
		glTexCoord2f(1,0) ;
		glVertex3d(2,1,-6);
		glTexCoord2f(0,0) ;
		glVertex3d(2,1,0);
		glTexCoord2f(0,1) ;
		glVertex3d(2,0,0);
		glTexCoord2f(1,1) ;
		glVertex3d(2,0,-6);
	// down
		glTexCoord2f(0,1) ;
		glVertex3d(0,0,-6);
		glTexCoord2f(1,1) ;
		glVertex3d(0,0,0);
		glTexCoord2f(1,0);
		glVertex3d(2,0,0);
		glTexCoord2f(0,0) ;
		glVertex3d(2,0,-6);

	 //back
		glTexCoord2f(1,0);
		glVertex3d(0,0,-6);
		glTexCoord2f(1,1) ;
		glVertex3d(2,0,-6);
		glTexCoord2f(0,1) ;
		glVertex3d(2,1,-6);
		glTexCoord2f(0,0) ;
		glVertex3d(0,1,-6);



	 //left
		glTexCoord2f(1,0);
		glVertex3d(0,0,0);
		glTexCoord2f(1,1) ;
		glVertex3d(0,0,-6);
		glTexCoord2f(0,1) ;
		glVertex3d(0,1,-6);
		glTexCoord2f(0,0) ;
		glVertex3d(0,1,0);

	glEnd();

	glPopMatrix();
	
	
}


};

