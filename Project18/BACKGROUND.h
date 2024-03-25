#pragma once
class BACKGROUND
{
	public:
	Model_3DS *tree;
	int rail,herb,build1,build2,build3,buildtop1,road,circl;
	GLTexture BARK,Leaf;
public:

	BACKGROUND(void)
	{
	}

	~BACKGROUND(void)
	{
	}

	void init()
	{
			rail=LoadTexture("data//image//rail.bmp",255);
			herb=LoadTexture("data//image//herb1.bmp",255);

			build1=LoadTexture("build1.bmp",255);
			build2=LoadTexture("build4.bmp",255);
			build3=LoadTexture("build3.bmp",255);
			buildtop1=LoadTexture("buldtop1.bmp",255);
			road=LoadTexture("road2.bmp",255);
			circl=LoadTexture("road1.bmp",255);


			tree=new Model_3DS();
			tree->Load("data//model//M_TREE5.3ds");
			Leaf.LoadBMP("data//image//Leaf.bmp");
			BARK.LoadBMP("data//image//BARK.bmp");
			tree->Materials[0].tex=BARK;
			tree->Materials[1].tex=Leaf;
	}

	void tree1(float x , float y , float z ){
		tree->scale=1;
		tree->pos.x = x;
		tree->pos.y = y;
		tree->pos.z = z;
		tree->Draw();
	}

	void drawtrees(){
		for( int i =-1000;i<1000;i=i+100 ){
			tree1(-5+i,-5,-30);	

			tree1(-5+i,-5,30);	

		}
/*
	tree1(-5,-5,-20);	
	tree1(20,-5,-20);	
	tree1(45,-5,-20);	
	tree1(68,-5,-20);	
	tree1(500,-5,-20);*/

	}
	
void drowrail(){
	glPushMatrix();
	glTranslated(0,-2,5);
	for(int i = -30 ;i<30;i++){
		glBindTexture(GL_TEXTURE_2D,rail);
		glBegin(GL_QUADS); //UP
		glTexCoord2f(0,1); glVertex3d(15+i*30,-2,15);
		glTexCoord2f(0,0); glVertex3d(15+i*30,-2,-15);
		glTexCoord2f(1,0); glVertex3d(-15+i*30,-2,-15);
		glTexCoord2f(1,1); glVertex3d(-15+i*30,-2,15);
		glEnd();}
	glPopMatrix();
}

void drawherb() //grass
{
	 glPushMatrix();
	 	glRotated(-90,1,0,0);	   
	    glBindTexture(GL_TEXTURE_2D,herb); // Bind texture
		glBegin(GL_QUADS);
        glTexCoord2f(200,0);     glVertex3f(-1000,1000,-5);
        glTexCoord2f(200,200);     glVertex3f(1000, 1000,-5);
        glTexCoord2f(0,200);     glVertex3f(1000, -500,-5);
        glTexCoord2f(0,0);     glVertex3f(-1000,-1000,-5);
		glEnd();
	glPopMatrix();
}



void circle() // circle and middle grass 
{
	glPushMatrix();
		glRotated(-90,1,0,0);
		glTranslated(0,0,-5);
		glBindTexture(GL_TEXTURE_2D,circl); // Bind texture

	for(int i=0;i<=7;i++)
   {	
        glColor3f(1, 1, 1);
		glBegin(GL_QUADS);

	    glTexCoord2f(1,0);      glVertex2f(-9, 39);
        glTexCoord2f(1,10);     glVertex2f(9, 39);

        glTexCoord2f(0,10);   glVertex2f(9, -39+60);
        glTexCoord2f(0,0);     glVertex2f(-9, -39+60);

		glEnd();
		glRotatef(51.428, 0, 0, 1);
	}


	glPopMatrix();//heab 

	 glPushMatrix();
	 		 glTranslated(0,0,-5);
			 	glRotated(-90,1,0,0);
		glColor3f(1, 1, 1);
	   
	    glBindTexture(GL_TEXTURE_2D,herb); // Bind texture
		glBegin(GL_QUADS);

        glTexCoord2f(10,0);      glVertex2f(-23,23);
        glTexCoord2f(10,10);     glVertex2f(23, 23);

        glTexCoord2f(0,10);     glVertex2f(23, -23);
        glTexCoord2f(0,0);       glVertex2f(-23, -23);

		
		glEnd();
		

	glPopMatrix();

	  


	
	glPushMatrix();
			 glTranslated(0,0,-5);
			 	glRotated(-90,1,0,0);
			glBindTexture(GL_TEXTURE_2D,circl); // Bind texture

	for(int i=0;i<=360;i++)
    {		glColor3f(1, 1, 1);
		glBegin(GL_QUADS);

	    glTexCoord2f(1,0);      glVertex2f(-1, 39-2);
        glTexCoord2f(1,10);     glVertex2f(1, 39-2);

        glTexCoord2f(0,10);   glVertex2f(1, -39+60);
        glTexCoord2f(0,0);     glVertex2f(-1, -39+60);

		glEnd();
		glRotatef(1, 0, 0, 1);
		
	}
	glPopMatrix();
	

	
}


void way()
{
	glPushMatrix();
		glRotated(-90,1,0,0);
		 glTranslated(0,0,-5);

	for (int i = 0; i < 7; i++)
	{
        glLineWidth(2);
		glColor3f(1, 1, 1);
		glBindTexture(GL_TEXTURE_2D,road); // Bind texture
		glBegin(GL_QUADS);

	    glTexCoord2f(50,0);      glVertex2f(-9, 39);
        glTexCoord2f(50,2);     glVertex2f(9, 39);

        glTexCoord2f(0,2);    glVertex2f(9, -120);
        glTexCoord2f(0,0);     glVertex2f(-9, -120);

		glEnd();

		///////////////////////////
		glRotatef(51.428, 0, 0, 1);
	}
	glPopMatrix();
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
		glTexCoord2f(1,0) ; 		glVertex3f(x,y,-z);
		glTexCoord2f(1,1) ; 		glVertex3f(x,y,-z);
		glTexCoord2f(0,1) ; 		glVertex3f(-x,y,-z);
		glTexCoord2f(0,0) ; 		glVertex3f(-x,y,-z);
	glEnd();

	glPopMatrix();
}

void bulding()
{
	glPushMatrix();
		glRotated(-90,1,0,0);
		glScalef(4,4,4);
		glTranslated(-500 ,20,6.5);
	for(int i=1;i<=20;i++)
	{
	 glPushMatrix();
	 glTranslated(i*40 ,0,0);
	 DrawUnitCube(8,5,8,build1,buildtop1);

	 glPushMatrix();
	      glTranslated(i*40,0,0);
          DrawUnitCube(5,5,8,build2,buildtop1);
	    glPopMatrix();

	 glPopMatrix();
    // glRotatef(51.428, 0, 0, 1);
}
	glTranslated(20 ,0,0);
	for(int i=1;i<=20;i++)
	{
	 glPushMatrix();

	      glTranslated(i*40,0,0);
          DrawUnitCube(5,5,8,build2,buildtop1);
	    glPopMatrix();

    // glRotatef(51.428, 0, 0, 1);
}
	
	glPopMatrix();
}
void buildings(){
bulding();
	 glPushMatrix();
	 glTranslated(0 ,0,160);
		bulding();
	    glPopMatrix();

}


void buildingner()
{
	glPushMatrix();
		glRotated(-90,1,0,0);
			 glTranslated(0,0,-5);

	for(int i=0;i<=7;i++)
	{
		glPushMatrix();
	      glTranslated(-11,60,3);
	      glRotated(115,0,0,1);
          DrawUnitCube(5,5,8,build2,buildtop1);
	    glPopMatrix();

	    glPushMatrix();
	      glTranslated(-20,60+20,3);
          glRotated(115,0,0,1);
	      DrawUnitCube(5,5,8,build3,buildtop1);
    	glPopMatrix();

	  glRotatef(51.428, 0, 0, 1);
	}
	glPopMatrix();


	glPushMatrix();
			 glTranslated(0,0,-5);
			 		glRotated(-90,1,0,0);

	for(int i=0;i<=7;i++)
	{
        glPushMatrix();
	      glTranslated(13,60,8);
	      glRotated(-115,0,0,1);
	      DrawUnitCube(5,5,8,build2,buildtop1);
	    glPopMatrix();

	    glPushMatrix();
	     glTranslated(23,60+20,8);
	     glRotated(-115,0,0,1);
	     DrawUnitCube(5,5,8,build3,buildtop1);
	    glPopMatrix();

	glRotatef(51.428, 0, 0, 1);
	}
	glPopMatrix();
}


};

