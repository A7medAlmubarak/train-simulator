#pragma once
class BACKROUNDDES
{
	public:
	//Model_3DS *tree;
	int box;
	//GLTexture BARK,Leaf;
public:

	BACKROUNDDES(void)
	{
	}

	~BACKROUNDDES(void)
	{
	}

	void init()
	{
			
			box=LoadTexture("data//image//box.bmp",255);

			
			
	}


void DrawUnitCube(int x,int y,int z,int id1,int id2)
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

void drawbox(){
	for (int i = -6; i < 6; i++)
	{
		glPushMatrix();{
	//	glTranslated(30,0,0);
		glTranslatef(i*8+2, 0, -15);
			glTranslatef(i*8+2, 0, -15);
		glTranslatef(20,0, 2);
		glRotatef(180 , 0.0f, 0.0f, 1.0f);
		glScaled(3,3,3);
		DrawUnitCube(2,2,2,box,box);
					}
	glPopMatrix();	
	}
}
};