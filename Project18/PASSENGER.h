#pragma once
class PASSENGER
{
	public:
	
	
	int  bench1,carpet,floor2,clock,wood1,steel1;
public:

	PASSENGER(void)
	{
	}

	~PASSENGER(void)
	{
	}

	void init()
	{
	bench1=LoadTexture("data//image//bench1.bmp",255);
	carpet=LoadTexture("data//image//carpet.bmp");
	floor2=LoadTexture("data//image//dup.bmp");
	clock=LoadTexture("data//image//clock1.bmp");
	wood1=LoadTexture("data//image//wood1.bmp");
	steel1=LoadTexture("data//image//steel2.bmp");

	}

	
void benchset(){
	glPushMatrix();

	glBindTexture(GL_TEXTURE_2D,bench1);
	glBegin(GL_QUADS); //UP
	glTexCoord2f(0,0); glVertex3d(10,2,0.5);
	glTexCoord2f(1,0); glVertex3d(10,2,3);
	glTexCoord2f(1,1); glVertex3d(3,2,3);
	glTexCoord2f(0,1); glVertex3d(3,2,0.5);
	glEnd();

	glBegin(GL_QUADS); //right
	glTexCoord2f(0,0);glVertex3d(10,2,3);
	glTexCoord2f(1,0);glVertex3d(10,2,0.5);
	glTexCoord2f(1,1);glVertex3d(10,1.8,0.5);
	glTexCoord2f(0,1);glVertex3d(10,1.8,3);
	glEnd();

	glBegin(GL_QUADS); //back
	glTexCoord2f(0,0);glVertex3d(10,2,0.5);
	glTexCoord2f(1,0);glVertex3d(3,2,0.5);
	glTexCoord2f(1,1);glVertex3d(3,1.8,0.5);
	glTexCoord2f(0,1);glVertex3d(10,1.8,0.5);
	glEnd();

	glBegin(GL_QUADS); //front
	glTexCoord2f(0,0); glVertex3d(10,2,0.5);
	glTexCoord2f(1,0); glVertex3d(3,2,0.5);
	glTexCoord2f(1,1); glVertex3d(3,1.8,3);
	glTexCoord2f(0,1); glVertex3d(10,1.8,3);
	glEnd();

	glBegin(GL_QUADS); // left
	glTexCoord2f(0,0); glVertex3d(3,2,0.5);
	glTexCoord2f(0,0); glVertex3d(3,2,3);
	glTexCoord2f(0,0); glVertex3d(3,1.8,3);
	glTexCoord2f(0,0); glVertex3d(3,1.8,0.5);
	glEnd();

	glBegin(GL_QUADS); // down
	glTexCoord2f(0,0);glVertex3d(10,1.8,0.5);
	glTexCoord2f(1,0);glVertex3d(10,1.8,3);
	glTexCoord2f(1,1);glVertex3d(3,1.8,3);
	glTexCoord2f(0,1);glVertex3d(3,1.8,0.5);
	glEnd();
	glPopMatrix();

  }

void benchdesk(){
	glPushMatrix();
	glBindTexture(GL_TEXTURE_2D,bench1);

	glBegin(GL_QUADS); //back
	glTexCoord2f(0,0);glVertex3d(10,2,0.5);
	glTexCoord2f(1,0);glVertex3d(10,4,0.2);
	glTexCoord2f(1,1);glVertex3d(3,4,0.2);
	glTexCoord2f(0,1);glVertex3d(3,2,0.5);
	glEnd();

	glBegin(GL_QUADS); //front
	glTexCoord2f(0,0);glVertex3d(10,2,0.7);
	glTexCoord2f(1,0);glVertex3d(10,4,0.4);
	glTexCoord2f(1,1);glVertex3d(3,4,0.4);
	glTexCoord2f(0,1);glVertex3d(3,2,0.7);
	glEnd();

	glBegin(GL_QUADS); //right
	glTexCoord2f(0,0);glVertex3d(10,4,0.2);
	glTexCoord2f(1,0);glVertex3d(10,4,0.4);
	glTexCoord2f(1,1);glVertex3d(10,2,0.7);
	glTexCoord2f(0,1);glVertex3d(10,2,0.5);
	glEnd();

	glBegin(GL_QUADS); //left
	glTexCoord2f(0,0);glVertex3d(3,4,0.2);
	glTexCoord2f(1,0);glVertex3d(3,4,0.4);
	glTexCoord2f(1,1);glVertex3d(3,2,0.7);
	glTexCoord2f(0,1);glVertex3d(3,2,0.5);
	glEnd();
	glPopMatrix();

}

void benchsteel(){
	glPushMatrix();

	glBindTexture(GL_TEXTURE_2D,steel1);
	glBegin(GL_QUADS); //front1
	glTexCoord2f(0,0);glVertex3d(4,1.8,2.5);
	glTexCoord2f(1,0);glVertex3d(4.5,1.8,2.5);
	glTexCoord2f(1,1);glVertex3d(4.5,0,2.5);
	glTexCoord2f(0,1);glVertex3d(4,0,2.5);
	glEnd();

	 glBegin(GL_QUADS); //right1
	glTexCoord2f(0,0);glVertex3d(4.5,1.8,2.5);
	glTexCoord2f(1,0);glVertex3d(4.5,1.8,2);
	glTexCoord2f(1,1);glVertex3d(4.5,0,2);
	glTexCoord2f(0,1);glVertex3d(4.5,0,2.5);
	glEnd();

	 glBegin(GL_QUADS); //left1
	glTexCoord2f(0,0);glVertex3d(4,1.8,2.5);
	glTexCoord2f(1,0);glVertex3d(4,1.8,2);
	glTexCoord2f(1,1);glVertex3d(4,0,2);
	glTexCoord2f(0,1);glVertex3d(4,0,2.5);
	glEnd();

	glBegin(GL_QUADS); //back1
	glTexCoord2f(0,0);glVertex3d(4,1.8,2);
	glTexCoord2f(1,0);glVertex3d(4.5,1.8,2);
	glTexCoord2f(1,1);glVertex3d(4.5,0,2);
	glTexCoord2f(0,1);glVertex3d(4,0,2);
	glEnd();
			/********************/

	 glBegin(GL_QUADS); //front2
	glTexCoord2f(0,0);glVertex3d(8.5,1.8,2.5);
	glTexCoord2f(1,0);glVertex3d(9,1.8,2.5);
	glTexCoord2f(1,1);glVertex3d(9,0,2.5);
	glTexCoord2f(0,1);glVertex3d(8.5,0,2.5);
	glEnd();

	glBegin(GL_QUADS); //right2
	glTexCoord2f(0,0);glVertex3d(9,1.8,2.5);
	glTexCoord2f(1,0);glVertex3d(9,1.8,2);
	glTexCoord2f(1,1);glVertex3d(9,0,2);
	glTexCoord2f(0,1);glVertex3d(9,0,2.5);
	glEnd();

	glBegin(GL_QUADS); //left2
	glTexCoord2f(0,0);glVertex3d(8.5,1.8,2.5);
	glTexCoord2f(1,0);glVertex3d(8.5,1.8,2);
	glTexCoord2f(1,1);glVertex3d(8.5,0,2);
	glTexCoord2f(0,1);glVertex3d(8.5,0,2.5);
	glEnd();

	glBegin(GL_QUADS); //back2
	glTexCoord2f(0,0);glVertex3d(8.5,1.8,2);
	glTexCoord2f(1,0);glVertex3d(9,1.8,2);
	glTexCoord2f(1,1);glVertex3d(9,0,2);
	glTexCoord2f(0,1);glVertex3d(8.5,0,2);
	glEnd();

	/**************/

	glBegin(GL_QUADS); //up3
	glTexCoord2f(0,0);glVertex3d(4,0.5,2);
	glTexCoord2f(1,0);glVertex3d(4.5,0.5,2);
	glTexCoord2f(1,1);glVertex3d(4.5,0.5,0.8);
	glTexCoord2f(0,1);glVertex3d(4,0.5,0.8);
	glEnd();

	glBegin(GL_QUADS); //left3
	glTexCoord2f(0,0);glVertex3d(4,0.5,2);
	glTexCoord2f(1,0);glVertex3d(4,0,2);
	glTexCoord2f(1,1);glVertex3d(4,0,0.8);
	glTexCoord2f(0,1);glVertex3d(4,0.5,0.8);
	glEnd();

	glBegin(GL_QUADS); //right3
	glTexCoord2f(0,0);glVertex3d(4.5,0.5,2);
	glTexCoord2f(1,0);glVertex3d(4.5,0,2);
	glTexCoord2f(1,1);glVertex3d(4.5,0,0.8);
	glTexCoord2f(0,1);glVertex3d(4.5,0.5,0.8);
	glEnd();

				/********************/
	glBegin(GL_QUADS); //up4
	glTexCoord2f(0,0);glVertex3d(8.5,0.5,2);
	glTexCoord2f(1,0);glVertex3d(9,0.5,2);
	glTexCoord2f(1,1);glVertex3d(9,0.5,0.8);
	glTexCoord2f(0,1);glVertex3d(8.5,0.5,0.8);
	glEnd();

	glBegin(GL_QUADS); //left4
	glTexCoord2f(0,0);glVertex3d(8.5,0.5,2);
	glTexCoord2f(1,0);glVertex3d(8.5,0,2);
	glTexCoord2f(1,1);glVertex3d(8.5,0,0.8);
	glTexCoord2f(0,1);glVertex3d(8.5,0.5,0.8);
	glEnd();
	glBegin(GL_QUADS); //right4
	glTexCoord2f(0,0);glVertex3d(9,0.5,2);
	glTexCoord2f(1,0);glVertex3d(9,0,2);
	glTexCoord2f(1,1);glVertex3d(9,0,0.8);
	glTexCoord2f(0,1);glVertex3d(9,0.5,0.8);
	glEnd();
			/*******************/
	glBegin(GL_QUADS); //up5
	glTexCoord2f(0,0);glVertex3d(9,0.5,0.2);
	glTexCoord2f(1,0);glVertex3d(9,0.5,0.8);
	glTexCoord2f(1,1);glVertex3d(4,0.5,0.8);
	glTexCoord2f(0,1);glVertex3d(4,0.5,0.2);
	glEnd();

	glBegin(GL_QUADS); //front5
	glTexCoord2f(0,0);glVertex3d(9,0,0.8);
	glTexCoord2f(1,0);glVertex3d(9,0.5,0.8);
	glTexCoord2f(1,1);glVertex3d(4,0.5,0.8);
	glTexCoord2f(0,1);glVertex3d(4,0,0.8);
	glEnd();

	glBegin(GL_QUADS); //back5
	glTexCoord2f(0,0);glVertex3d(9,0,0.2);
	glTexCoord2f(1,0);glVertex3d(9,0.5,0.2);
	glTexCoord2f(1,1);glVertex3d(4,0.5,0.2);
	glTexCoord2f(0,1);glVertex3d(4,0,0.2);
	glEnd();

	glBegin(GL_QUADS); //right5
	glTexCoord2f(0,0);glVertex3d(9,0.5,0.2);
	glTexCoord2f(1,0);glVertex3d(9,0.5,0.8);
	glTexCoord2f(1,1);glVertex3d(9,0,0.8);
	glTexCoord2f(0,1);glVertex3d(9,0,0.2);
	glEnd();

	glBegin(GL_QUADS); //left5
	glTexCoord2f(0,0);glVertex3d(4,0,0.2);
	glTexCoord2f(1,0);glVertex3d(4,0,0.8);
	glTexCoord2f(1,1);glVertex3d(4,0.5,0.8);
	glTexCoord2f(0,1);glVertex3d(4,0.5,0.2);
	glEnd();

	glPopMatrix();

}

void drawcarpet(){
	glPushMatrix();
	glBindTexture(GL_TEXTURE_2D,carpet);
	glBegin(GL_QUADS);
	glTexCoord2f(0,1);	 glVertex3f(2,0.4,8);
    glTexCoord2f(0,0) ;  glVertex3f(2,0.4,2);
    glTexCoord2f(1,0) ;  glVertex3f(28,0.4,2);
    glTexCoord2f(1,1) ;  glVertex3f(28,0.4,8);
    glEnd();
	glPopMatrix();
}

void floor(){
	glPushMatrix();
	glBindTexture(GL_TEXTURE_2D,floor2);
	glBegin(GL_QUADS);
	glTexCoord2f(1,0) ;   glVertex3f(0,0.13,10);
    glTexCoord2f(1,1) ;   glVertex3f(0,0.13,0);
    glTexCoord2f(0,1) ;   glVertex3f(30,0.13,0);
    glTexCoord2f(0,0) ;   glVertex3f(30,0.13,10);
    glEnd();
	glPopMatrix();
}

void drawClock(){
    glPushMatrix();
	glBindTexture(GL_TEXTURE_2D,clock);
	glBegin(GL_QUADS); //front
	glTexCoord2f(1,0);glVertex3f(1,7,9.8);
    glTexCoord2f(0,0);glVertex3f(2,7,9.8);
    glTexCoord2f(0,1);glVertex3f(2,8,9.8);
    glTexCoord2f(1,1);glVertex3f(1,8,9.8);
    glEnd();

	glBegin(GL_QUADS);//left
	glVertex3f(1,7,9.8);
    glVertex3f(1,7,10);
    glVertex3f(1,8,10);
    glVertex3f(1,8,9.8);
    glEnd();

	glBegin(GL_QUADS); //right
	glVertex3f(2,7,9.8);
    glVertex3f(2,7,10);
    glVertex3f(2,8,10);
    glVertex3f(2,8,9.8);
    glEnd();

	glBegin(GL_QUADS); //up
	glVertex3f(1,8,9.8);
    glVertex3f(2,8,9.8);
    glVertex3f(2,8,10);
    glVertex3f(1,8,10);
    glEnd();

	glBegin(GL_QUADS); //down
	glVertex3f(1,7,9.8);
    glVertex3f(2,7,9.8);
    glVertex3f(2,7,10);
    glVertex3f(1,7,10);
    glEnd();
	glPopMatrix();
}

void drowbench(){
	benchset();
	benchdesk();
	benchsteel();
	//drawwomen();
}

void drawtable1(){
	glPushMatrix();
	glBindTexture(GL_TEXTURE_2D,wood1);
	glBegin(GL_QUADS); //UP
	glTexCoord2f(0,0);glVertex3d(17,2.5,9.5); 
	glTexCoord2f(1,0);glVertex3d(17,2.5,7.7);
	glTexCoord2f(1,1);glVertex3d(11,2.5,7.7);
	glTexCoord2f(0,1);glVertex3d(11,2.5,9.5);
	glEnd();

	glBegin(GL_QUADS); //down
	glVertex3d(17,2.4,9.5);
	glVertex3d(17,2.4,7.7);
	glVertex3d(11,2.4,7.7);
	glVertex3d(11,2.4,9.5);
	glEnd();

	glPopMatrix();

}




};

