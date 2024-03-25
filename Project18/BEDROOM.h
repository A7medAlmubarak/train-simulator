#pragma once
class BEDROOM
{
	public:
	
	
	int  wood3,wood4,carpet2,pint,flooar,cover1;
	int m1,m2,m3,m4,m5,m6,m7,m8,m9,m10,m11,m12,m13;
public:

	BEDROOM(void)
	{
	}

	~BEDROOM(void)
	{
	}

	void init()
	{
	/*wood3=LoadTexture("data//image//wood3.bmp",255);
	wood4=LoadTexture("data//image//wood4.bmp",255);
	carpet2=LoadTexture("data//image//carpet2.bmp",255);
	pint=LoadTexture("data//image//pint.bmp",255);
	flooar=LoadTexture("data//image//flooar.bmp",255);
	cover1=LoadTexture("enas//image//cover.bmp",255);*/

	m1=LoadTexture("enas//2109931-2-L.bmp",255);
	m2=LoadTexture("enas//images (32).bmp",255);
	m3=LoadTexture("enas//image1.bmp",255);
	m4=LoadTexture("enas//medium (2).bmp",255);
	m5=LoadTexture("enas//images (32).bmp",255);
	m6=LoadTexture("enas//images (18).bmp",255);
	m7=LoadTexture("enas//images (11).bmp",255);
	m8=LoadTexture("enas//images (32).bmp",255);
	m9=LoadTexture("enas//images (15).bmp",255);
	m10=LoadTexture("enas//image33.bmp",255);
	m11=LoadTexture("enas//download (14).bmp",255);
	m12=LoadTexture("enas//2053687.bmp",255);
	m13=LoadTexture("enas//images (39).bmp",255);

	}
	

void bed1_body(){
	glPushMatrix();
	glRotated(-90,1,0,0);
	glTranslated(0,-10,0);



    glPushMatrix();
    glScaled(5,1.7,0.7);

	/**************** down ***************/
	glBegin(GL_QUADS); 
	glVertex3d(0,0,0);	glVertex3d(2,0,0);
	glVertex3d(2,2,0);	glVertex3d(0,2,0);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glBindTexture(GL_TEXTURE_2D,m8);
	glScaled(5,1.7,0.7);

	/****************right***************/
	glBegin(GL_QUADS);
	glEnable(GL_TEXTURE_2D);
	glTexCoord2f(1,0);	glVertex3d(0,2,0);
	glTexCoord2f(0,0);	glVertex3d(2,2,0);
	glTexCoord2f(1,1);	glVertex3d(2,2,2);
	glTexCoord2f(0,1);	glVertex3d(0,2,2);
	glEnd();
	glPopMatrix();
	
	glPushMatrix();
	glBindTexture(GL_TEXTURE_2D,m6);
	glScaled(5,1.7,0.7);
	/****************front***************/
	glBegin(GL_QUADS); 
	glEnable(GL_TEXTURE_2D);
	glTexCoord2f(1,1);	glVertex3d(2,2,2);
    glTexCoord2f(1,0);	glVertex3d(2,2,0);
	glTexCoord2f(0,0);	glVertex3d(2,0,0);
	glTexCoord2f(0,1);	glVertex3d(2,0,2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glScaled(5,1.7,0.7);
	/****************left***************/
	glBegin(GL_QUADS);  
	glVertex3d(0,0,2);	glVertex3d(0,0,0);
	glVertex3d(2,0,0);	glVertex3d(2,0,2);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glBindTexture(GL_TEXTURE_2D,m7);
	glScaled(5,1.7,0.7);
	/*****************up****************/
	glBegin(GL_QUADS); 
	glEnable(GL_TEXTURE_2D);
	glTexCoord2f(0,0);	glVertex3d(0,0,2);
	glTexCoord2f(1,0);	glVertex3d(2,0,2);
	glTexCoord2f(1,1);	glVertex3d(2,2,2);
	glTexCoord2f(0,1);	glVertex3d(0,2,2);
	glEnd();

	glPopMatrix();
	glPushMatrix();
	glScaled(5,1.7,0.7);
	/*****************back****************/
	glBegin(GL_QUADS); 
	glVertex3d(0,0,0);	glVertex3d(0,0,2);
	glVertex3d(0,2,2);	glVertex3d(0,2,0);
	glEnd();
    glPopMatrix();
	
	glPopMatrix();
}

void bed2_body(){
	glPushMatrix();
	glRotated(-90,1,0,0);	   
	glTranslated(0,-10,0);

    glPushMatrix();
	glTranslated(0,6.5,0);
    glScaled(5,1.7,0.7);
	/*****************down****************/
	glBegin(GL_QUADS); 
	glVertex3d(0,0,0);	glVertex3d(2,0,0);
	glVertex3d(2,2,0);	glVertex3d(0,2,0);
	glEnd();

	glPopMatrix();
	glPushMatrix();
	glBindTexture(GL_TEXTURE_2D,m8);
	glTranslated(0,6.5,0);
	glScaled(5,1.7,0.7);

	/*****************right****************/
	glBegin(GL_QUADS); 
	glEnable(GL_TEXTURE_2D);
	glTexCoord2f(1,0);	glVertex3d(0,2,0);
	glTexCoord2f(0,0);	glVertex3d(2,2,0);
	glTexCoord2f(1,1);	glVertex3d(2,2,2);
	glTexCoord2f(0,1);	glVertex3d(0,2,2);
	glEnd();
	glPopMatrix();
	
	glPushMatrix();
	glBindTexture(GL_TEXTURE_2D,m6);
	glTranslated(0,6.5,0);
	glScaled(5,1.7,0.7);
	/*****************front****************/
	glBegin(GL_QUADS); 
	glEnable(GL_TEXTURE_2D);
	glTexCoord2f(1,1);	glVertex3d(2,2,2);
    glTexCoord2f(1,0);	glVertex3d(2,2,0);
	glTexCoord2f(0,0);	glVertex3d(2,0,0);
	glTexCoord2f(0,1);	glVertex3d(2,0,2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0,6.5,0);
	glScaled(5,1.7,0.7);
	/*****************left****************/
	glBegin(GL_QUADS);
	glVertex3d(0,0,2);	glVertex3d(0,0,0);
	glVertex3d(2,0,0);	glVertex3d(2,0,2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBindTexture(GL_TEXTURE_2D,m7);
	glTranslated(0,6.5,0);
	glScaled(5,1.7,0.7);
	/*****************up****************/
	glBegin(GL_QUADS);
	glEnable(GL_TEXTURE_2D);
	glTexCoord2f(0,0);	glVertex3d(0,0,2);
	glTexCoord2f(1,0);	glVertex3d(2,0,2);
	glTexCoord2f(1,1);	glVertex3d(2,2,2);
	glTexCoord2f(0,1);	glVertex3d(0,2,2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0,6.5,0);
	glScaled(5,1.7,0.7);
	/*****************back****************/
	glBegin(GL_QUADS);
	glVertex3d(0,0,0);	glVertex3d(0,0,2);
	glVertex3d(0,2,2);	glVertex3d(0,2,0);
	glEnd();
    glPopMatrix();

	glPopMatrix();
}

void bed1_desk(){
	glPushMatrix();
	glRotated(-90,1,0,0);	   
	glTranslated(0,-10,0);

    glPushMatrix();
    glScaled(0.2,1.7,1.5);
	/*****************down****************/
	glBegin(GL_QUADS); 
	glVertex3d(0,0,0);	glVertex3d(2,0,0);
	glVertex3d(2,2,0);	glVertex3d(0,2,0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glScaled(0.2,1.7,1.5);
	/*****************right****************/
	glBegin(GL_QUADS);
	glVertex3d(0,2,0);	glVertex3d(2,2,0);
	glVertex3d(2,2,2);	glVertex3d(0,2,2);
	glEnd();
	glPopMatrix();
	
	glPushMatrix();
	glBindTexture(GL_TEXTURE_2D,m6);
	glScaled(0.2,1.7,1.5);
	/*****************front****************/
	glBegin(GL_QUADS);
	glEnable(GL_TEXTURE_2D);
	glTexCoord2f(1,1);	glVertex3d(2,2,2);
    glTexCoord2f(1,0);	glVertex3d(2,2,0);
	glTexCoord2f(0,0);	glVertex3d(2,0,0);
	glTexCoord2f(0,1);	glVertex3d(2,0,2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glScaled(0.2,1.7,1);
	/*****************left****************/
	glBegin(GL_QUADS);
	glVertex3d(0,0,2);	glVertex3d(0,0,0);
	glVertex3d(2,0,0);	glVertex3d(2,0,2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glScaled(0.2,1.7,1.5);
	/*****************up****************/
	glBegin(GL_QUADS); 
	glVertex3d(0,0,2);	glVertex3d(2,0,2);
	glVertex3d(2,2,2);	glVertex3d(0,2,2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glScaled(0.2,1.7,1.5);
	/*****************back****************/
	glBegin(GL_QUADS);
	glVertex3d(0,0,0);	glVertex3d(0,0,2);
	glVertex3d(0,2,2);	glVertex3d(0,2,0);
	glEnd();
    glPopMatrix();

	glPopMatrix();
}

void bed2_desk(){
	glPushMatrix();
	glRotated(-90,1,0,0);
	glTranslated(0,-10,0);

    glPushMatrix();
	glTranslated(0,6.5,0);
    glScaled(0.2,1.7,1.5);
	/*****************down****************/
	glBegin(GL_QUADS); 
	glVertex3d(0,0,0);	glVertex3d(2,0,0);
	glVertex3d(2,2,0);	glVertex3d(0,2,0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0,6.5,0);
	glScaled(0.2,1.7,1.5);
	/*****************right****************/
	glBegin(GL_QUADS);
	glVertex3d(0,2,0);	glVertex3d(2,2,0);
	glVertex3d(2,2,2);	glVertex3d(0,2,2);
	glEnd();
	glPopMatrix();
	
	glPushMatrix();
	glBindTexture(GL_TEXTURE_2D,m6);
	glTranslated(0,6.5,0);
	glScaled(0.2,1.7,1.5);
	/*****************front****************/
	glBegin(GL_QUADS);
	glEnable(GL_TEXTURE_2D);
	glTexCoord2f(1,1);	glVertex3d(2,2,2);
    glTexCoord2f(1,0);	glVertex3d(2,2,0);
	glTexCoord2f(0,0);	glVertex3d(2,0,0);
	glTexCoord2f(0,1);	glVertex3d(2,0,2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0,6.5,0);
	glScaled(0.2,1.7,1);
	/*****************left****************/
	glBegin(GL_QUADS);
	glVertex3d(0,0,2);	glVertex3d(0,0,0);
	glVertex3d(2,0,0);	glVertex3d(2,0,2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0,6.5,0);
	glScaled(0.2,1.7,1.5);
	/*****************up****************/
	glBegin(GL_QUADS);
	glVertex3d(0,0,2);	glVertex3d(2,0,2);
	glVertex3d(2,2,2);	glVertex3d(0,2,2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0,6.5,0);
	glScaled(0.2,1.7,1.5);
	/*****************back****************/
	glBegin(GL_QUADS);
	glVertex3d(0,0,0);	glVertex3d(0,0,2);
	glVertex3d(0,2,2);	glVertex3d(0,2,0);
	glEnd();
    glPopMatrix();
	
	glPopMatrix();
}

void furniture(){
	glPushMatrix();
	glRotated(-90,1,0,0);
	glTranslated(0,-10,0);

    glPushMatrix();
	glTranslated(28,0,0);
    glScaled(1,3,3.5);
	/*****************down****************/
	glBegin(GL_QUADS); 
	glVertex3d(0,0,0);	glVertex3d(2,0,0);
	glVertex3d(2,2,0);	glVertex3d(0,2,0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBindTexture(GL_TEXTURE_2D,m5);
	glTranslated(28,0,0);
    glScaled(1,3,3.5);
	/*****************right****************/
	glBegin(GL_QUADS);
	glEnable(GL_TEXTURE_2D);
	glTexCoord2f(1,0);	glVertex3d(0,2,0);
	glTexCoord2f(0,0);	glVertex3d(2,2,0);
	glTexCoord2f(0,1);	glVertex3d(2,2,2);
	glTexCoord2f(1,1);	glVertex3d(0,2,2);
	glEnd();
	glPopMatrix();
	
	glPushMatrix();
	glTranslated(28,0,0);
    glScaled(1,3,3.5);
	/*****************back****************/
	glBegin(GL_QUADS);
	glVertex3d(2,2,2);	glVertex3d(2,2,0);
	glVertex3d(2,0,0);	glVertex3d(2,0,2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(28,0,0);
    glScaled(1,3,3.5);
	/*****************left****************/
	glBegin(GL_QUADS);
	glVertex3d(0,0,2);	glVertex3d(0,0,0);
	glVertex3d(2,0,0);	glVertex3d(2,0,2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBindTexture(GL_TEXTURE_2D,m5);
	glTranslated(28,0,0);
    glScaled(1,3,3.5);
	/*****************up****************/
	glBegin(GL_QUADS);
	glEnable(GL_TEXTURE_2D);
	glTexCoord2f(1,0);	glVertex3d(0,0,2);
	glTexCoord2f(1,1);	glVertex3d(2,0,2);
	glTexCoord2f(0,1);	glVertex3d(2,2,2);
	glTexCoord2f(0,0);	glVertex3d(0,2,2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBindTexture(GL_TEXTURE_2D,m4);
	glTranslated(28,0,0);
    glScaled(1,3,3.5);
	/*****************front****************/
	glBegin(GL_QUADS);
	glEnable(GL_TEXTURE_2D);
	glTexCoord2f(1,0);	glVertex3d(0,0,0);
	glTexCoord2f(1,1);	glVertex3d(0,0,2);
	glTexCoord2f(0,1);	glVertex3d(0,2,2);
	glTexCoord2f(0,0);	glVertex3d(0,2,0);
	glEnd();
    glPopMatrix();
	
	glPopMatrix();
}

void drawer(){
	glPushMatrix();
	glRotated(-90,1,0,0);
	glTranslated(29,-6,0);
	

	glPushMatrix();
	glTranslated(0,3.4,0);
    glScaled(0.7,1.51,1);
	/*****************down****************/
	glBegin(GL_QUADS); 
	glVertex3d(0,0,0);	glVertex3d(2,0,0);
	glVertex3d(2,2,0);	glVertex3d(0,2,0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBindTexture(GL_TEXTURE_2D,m2);
	glTranslated(0,3.4,0);
    glScaled(0.7,1.51,1);
	/*****************right****************/
	glBegin(GL_QUADS);
	glTexCoord2f(1,0);	glVertex3d(0,2,0);
	glTexCoord2f(0,0);	glVertex3d(2,2,0);
	glTexCoord2f(1,1);	glVertex3d(2,2,2);
	glTexCoord2f(0,1);	glVertex3d(0,2,2);
	glEnd();
	glPopMatrix();
	
	glPushMatrix();
	glBindTexture(GL_TEXTURE_2D,m2);
	glTranslated(0,3.4,0);
    glScaled(0.7,1.51,1);
	/*****************front****************/
	glBegin(GL_QUADS);
	glEnable(GL_TEXTURE_2D);
	glTexCoord2f(1,1);	glVertex3d(2,2,2);
    glTexCoord2f(1,0);	glVertex3d(2,2,0);
	glTexCoord2f(0,0);	glVertex3d(2,0,0);
	glTexCoord2f(0,1);	glVertex3d(2,0,2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBindTexture(GL_TEXTURE_2D,m2);
	glTranslated(0,3.4,0);
    glScaled(0.7,1.51,1);
	/*****************left****************/
	glBegin(GL_QUADS); 
	glEnable(GL_TEXTURE_2D);
	glTexCoord2f(0,1);	glVertex3d(0,0,2);
	glTexCoord2f(0,0);	glVertex3d(0,0,0);
	glTexCoord2f(1,0);	glVertex3d(2,0,0);
	glTexCoord2f(1,1);	glVertex3d(2,0,2);
	glEnd();

	glPopMatrix();
	glPushMatrix();
	glBindTexture(GL_TEXTURE_2D,m2);
	glTranslated(0,3.4,0);
    glScaled(0.7,1.51,1);
	/*****************up****************/
	glBegin(GL_QUADS);
	glEnable(GL_TEXTURE_2D);
	glTexCoord2f(0,0);	glVertex3d(0,0,2);
	glTexCoord2f(1,0);	glVertex3d(2,0,2);
	glTexCoord2f(1,1);	glVertex3d(2,2,2);
	glTexCoord2f(0,1);	glVertex3d(0,2,2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBindTexture(GL_TEXTURE_2D,m1);
	glTranslated(0,3.4,0);
    glScaled(0.7,1.51,1);
	/*****************back****************/
	glBegin(GL_QUADS);
		glEnable(GL_TEXTURE_2D);
		glTexCoord2f(0,0);
	glVertex3d(0,0,0);
	glTexCoord2f(1,0);
	glVertex3d(0,0,2);
		glTexCoord2f(1,1);
	glVertex3d(0,2,2);
	glTexCoord2f(0,1);
	glVertex3d(0,2,0);
	glEnd();
    glPopMatrix();
	
	glPopMatrix();
}

void mirror(){
	glPushMatrix();
	glRotated(-90,1,0,0);
	glTranslated(0,-10,0);

    glPushMatrix();
	glTranslated(0.001,3.4,0);
    glScaled(0.1,1.51,2);
	/*****************down****************/
	glBegin(GL_QUADS); 
	glVertex3d(0,0,0);	glVertex3d(2,0,0);
	glVertex3d(2,2,0);	glVertex3d(0,2,0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0.001,3.4,0);
	glScaled(0.1,1.51,2);
	/*****************right****************/
	glBegin(GL_QUADS);
	glVertex3d(0,2,0);	glVertex3d(2,2,0);
	glVertex3d(2,2,2);	glVertex3d(0,2,2);
	glEnd();
	glPopMatrix();
	
	glPushMatrix();
	glBindTexture(GL_TEXTURE_2D,m3);
	glTranslated(0.001,3.4,0);
	glScaled(0.1,1.51,2);
	/*****************front****************/
	glBegin(GL_QUADS);
	glEnable(GL_TEXTURE_2D);
	glTexCoord2f(1,1);	glVertex3d(2,2,2);
    glTexCoord2f(1,0);	glVertex3d(2,2,0);
	glTexCoord2f(0,0);	glVertex3d(2,0,0);
	glTexCoord2f(0,1);	glVertex3d(2,0,2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0.001,3.4,0);
	glScaled(0.1,1.51,2);
	/*****************left****************/
	glBegin(GL_QUADS);
	glVertex3d(0,0,2);	glVertex3d(0,0,0);
	glVertex3d(2,0,0);	glVertex3d(2,0,2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0.001,3.4,0);
	glScaled(0.1,1.51,2);
	/*****************up****************/
	glBegin(GL_QUADS);
	glVertex3d(0,0,2);	glVertex3d(2,0,2);
	glVertex3d(2,2,2);	glVertex3d(0,2,2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0.001,3.4,0);
	glScaled(0.1,1.51,2);
	/*****************back****************/
	glBegin(GL_QUADS); 
	glVertex3d(0,0,0);	glVertex3d(0,0,2);
	glVertex3d(0,2,2);	glVertex3d(0,2,0);
	glEnd();
    glPopMatrix();
	
	glPopMatrix();
}

void carpet(){
	glPushMatrix();
	glRotated(-90,1,0,0);
	glTranslated(0,-10,0);

    glPushMatrix();
	glTranslated(7,2,0.001);
    glScaled(6,3,0.03);
   	/*****************down****************/
	glBegin(GL_QUADS); 
	glVertex3d(0,0,0);	glVertex3d(2,0,0);
	glVertex3d(2,2,0);	glVertex3d(0,2,0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(7,2,0.01);
    glScaled(6,3,0.03);
	/*****************right****************/
	glBegin(GL_QUADS); //
	glVertex3d(0,2,0);	glVertex3d(2,2,0);
	glVertex3d(2,2,2);	glVertex3d(0,2,2);
	glEnd();
	glPopMatrix();
	
	glPushMatrix();
	glTranslated(7,2,0.001);
    glScaled(6,3,0.03);
	/*****************front****************/
	glBegin(GL_QUADS); 
	glVertex3d(2,2,2);	glVertex3d(2,2,0);
	glVertex3d(2,0,0);	glVertex3d(2,0,2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(7,2,0.001);
    glScaled(6,3,0.03);
	/*****************left****************/
	glBegin(GL_QUADS);
	glVertex3d(0,0,2);	glVertex3d(0,0,0);
	glVertex3d(2,0,0);	glVertex3d(2,0,2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(7,2,0.001);
    glScaled(6,3,0.03);
	glBindTexture(GL_TEXTURE_2D,m10);
	/*****************up****************/
	glBegin(GL_QUADS);
	glEnable(GL_TEXTURE_2D);
	glTexCoord2f(0,0);	glVertex3d(0,0,2);
	glTexCoord2f(1,0);	glVertex3d(2,0,2);
	glTexCoord2f(1,1);	glVertex3d(2,2,2);
	glTexCoord2f(0,1);	glVertex3d(0,2,2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(7,2,0.001);
    glScaled(6,3,0.03);
	/*****************back****************/
	glBegin(GL_QUADS);
	glVertex3d(0,0,0);	glVertex3d(0,0,2);
	glVertex3d(0,2,2);	glVertex3d(0,2,0);
	glEnd();
    glPopMatrix();
	
	glPopMatrix();
}

void paint(){
	glPushMatrix();
	glRotated(-90,1,0,0);
	glTranslated(0,-10,0);

    glPushMatrix();
	glTranslated(0,3.3,4.5);
    glScaled(0.09,1.7,1.2);
	/*****************down****************/
	glBegin(GL_QUADS); 
	glVertex3d(0,0,0);	glVertex3d(2,0,0);
	glVertex3d(2,2,0);	glVertex3d(0,2,0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0,3.3,4.5);
    glScaled(0.09,1.7,1.2);
	/*****************right****************/
	glBegin(GL_QUADS);
	glVertex3d(0,2,0);	glVertex3d(2,2,0);
	glVertex3d(2,2,2);	glVertex3d(0,2,2);
	glEnd();
	glPopMatrix();
	
	glPushMatrix();
	glBindTexture(GL_TEXTURE_2D,m11);
	glTranslated(0,3.3,4.5);
    glScaled(0.09,1.7,1.2);
	/*****************front****************/
	glBegin(GL_QUADS);
	glEnable(GL_TEXTURE_2D);
	glTexCoord2f(1,1);	glVertex3d(2,2,2);
    glTexCoord2f(1,0);	glVertex3d(2,2,0);
	glTexCoord2f(0,0);	glVertex3d(2,0,0);
	glTexCoord2f(0,1);	glVertex3d(2,0,2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0,3.3,4.5);
    glScaled(0.09,1.7,1.2);
	/*****************left****************/
	glBegin(GL_QUADS); 
	glVertex3d(0,0,2);	glVertex3d(0,0,0);
	glVertex3d(2,0,0);	glVertex3d(2,0,2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0,3.3,4.5);
    glScaled(0.09,1.7,1.2);
	/*****************up****************/
	glBegin(GL_QUADS);
	glVertex3d(0,0,2);	glVertex3d(2,0,2);
	glVertex3d(2,2,2);	glVertex3d(0,2,2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0,3.3,4.5);
    glScaled(0.09,1.7,1.2);
	/*****************back****************/
	glBegin(GL_QUADS); 
	glVertex3d(0,0,0);	glVertex3d(0,0,2);
	glVertex3d(0,2,2);	glVertex3d(0,2,0);
	glEnd();
    glPopMatrix();
	
	glPopMatrix();
}

void bed1_mattress(){
	glPushMatrix();
	glRotated(-90,1,0,0);
	glTranslated(0,-10,0);

    glPushMatrix();
	glTranslated(0,0,1.3);
    glScaled(5,1.7,0.2);
	/*****************down****************/
	glBegin(GL_QUADS); 
	glVertex3d(0,0,0);	glVertex3d(2,0,0);
	glVertex3d(2,2,0);	glVertex3d(0,2,0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBindTexture(GL_TEXTURE_2D,m7);
	glTranslated(0,0,1.3);
    glScaled(5,1.7,0.2);
	/*****************right****************/
	glBegin(GL_QUADS);
	glEnable(GL_TEXTURE_2D);
	glTexCoord2f(1,0);	glVertex3d(0,2,0);
	glTexCoord2f(0,0);	glVertex3d(2,2,0);
	glTexCoord2f(1,1);	glVertex3d(2,2,2);
	glTexCoord2f(0,1);	glVertex3d(0,2,2);
	glEnd();
	glPopMatrix();
	
	glPushMatrix();
	glBindTexture(GL_TEXTURE_2D,m6);
	glTranslated(0,0,1.3);
    glScaled(5,1.7,0.2);
	/*****************front****************/
	glBegin(GL_QUADS); 
	glEnable(GL_TEXTURE_2D);
	glTexCoord2f(1,1);	glVertex3d(2,2,2);
	glTexCoord2f(1,0);	glVertex3d(2,2,0);
	glTexCoord2f(0,0);	glVertex3d(2,0,0);
	glTexCoord2f(0,1);	glVertex3d(2,0,2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0,0,1.3);
    glScaled(5,1.7,0.2);
	/*****************left****************/
	glBegin(GL_QUADS); 
	glVertex3d(0,0,2);	glVertex3d(0,0,0);
	glVertex3d(2,0,0);	glVertex3d(2,0,2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBindTexture(GL_TEXTURE_2D,m7);
	glTranslated(0,0,1.3);
    glScaled(5,1.7,0.2);
	/*****************up****************/
	glBegin(GL_QUADS); 
	glEnable(GL_TEXTURE_2D);
	glTexCoord2f(0,0);	glVertex3d(0,0,2);
	glTexCoord2f(1,0);	glVertex3d(2,0,2);
	glTexCoord2f(1,1);	glVertex3d(2,2,2);
	glTexCoord2f(0,1);	glVertex3d(0,2,2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0,0,1.3);
    glScaled(5,1.7,0.2);
	/*****************back****************/
	glBegin(GL_QUADS);
	glVertex3d(0,0,0);	glVertex3d(0,0,2);
	glVertex3d(0,2,2);	glVertex3d(0,2,0);
	glEnd();
    glPopMatrix();
	
	glPopMatrix();
}

void bed2_mattress(){
	glPushMatrix();
	glRotated(-90,1,0,0);
	glTranslated(0,-10,0);

    glPushMatrix();
	glTranslated(0,6.5,1.3);
    glScaled(5,1.7,0.2);
	/*****************down****************/
	glBegin(GL_QUADS); 
	glVertex3d(0,0,0);	glVertex3d(2,0,0);
	glVertex3d(2,2,0);	glVertex3d(0,2,0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBindTexture(GL_TEXTURE_2D,m7);
	glTranslated(0,6.5,1.3);
    glScaled(5,1.7,0.2);
	/*****************right****************/
	glBegin(GL_QUADS);
	glEnable(GL_TEXTURE_2D);
	glTexCoord2f(1,0);	glVertex3d(0,2,0);
	glTexCoord2f(0,0);	glVertex3d(2,2,0);
	glTexCoord2f(1,1);	glVertex3d(2,2,2);
	glTexCoord2f(0,1);	glVertex3d(0,2,2);
	glEnd();
	glPopMatrix();
	
	glPushMatrix();
	glBindTexture(GL_TEXTURE_2D,m6);
	glTranslated(0,6.5,1.3);
    glScaled(5,1.7,0.2);
	/*****************front****************/
	glBegin(GL_QUADS);
	glEnable(GL_TEXTURE_2D);
	glTexCoord2f(1,1);	glVertex3d(2,2,2);
    glTexCoord2f(1,0);	glVertex3d(2,2,0);
	glTexCoord2f(0,0);	glVertex3d(2,0,0);
	glTexCoord2f(0,1);	glVertex3d(2,0,2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBindTexture(GL_TEXTURE_2D,m7);
	glTranslated(0,6.5,1.3);
    glScaled(5,1.7,0.2);
	/*****************left****************/
	glBegin(GL_QUADS); 
	glTexCoord2f(0,0);	glVertex3d(0,0,2);
	glTexCoord2f(1,0);	glVertex3d(0,0,0);
	glTexCoord2f(1,1);	glVertex3d(2,0,0);
	glTexCoord2f(0,1);	glVertex3d(2,0,2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBindTexture(GL_TEXTURE_2D,m7);
	glTranslated(0,6.5,1.3);
    glScaled(5,1.7,0.2);
	/*****************up****************/
	glBegin(GL_QUADS);
	glEnable(GL_TEXTURE_2D);
	glTexCoord2f(0,0);	glVertex3d(0,0,2);
	glTexCoord2f(1,0);	glVertex3d(2,0,2);
	glTexCoord2f(1,1);	glVertex3d(2,2,2);
	glTexCoord2f(0,1);	glVertex3d(0,2,2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0,6.5,1.3);
    glScaled(5,1.7,0.2);
	/*****************back****************/
	glBegin(GL_QUADS);
	glVertex3d(0,0,0);	glVertex3d(0,0,2);
	glVertex3d(0,2,2);	glVertex3d(0,2,0);
	glEnd();
    glPopMatrix();
	
	glPopMatrix();
}

};

