#pragma once
class SKYBOX2
{
public:
	
	
	int type;
	float x,y,z,L;
	// skybox
int SKYFRONT, SKYBACK, SKYLEFT, SKYRIGHT, SKYUP, SKYDOWN ,desert,desert1;

public:

	SKYBOX2(void)
	{
		this->x=0;
		this->y=0;
		this->z=0;
		this->L=200;
		this->type=1;
	}

	~SKYBOX2(void)
	{
	}

	void init()
	{
	  
		SKYFRONT = LoadTexture("skybox1/front.bmp", 255);
	    SKYBACK = LoadTexture("skybox1/back.bmp", 255);
     	SKYLEFT = LoadTexture("skybox1/left.bmp", 255);
    	SKYRIGHT = LoadTexture("skybox1/right.bmp", 255);
    	SKYUP = LoadTexture("skybox1/up.bmp", 255);
	    SKYDOWN = LoadTexture("skybox1/down.bmp", 255);
		desert = LoadTexture("data//image//desert.bmp", 255);
		desert1 = LoadTexture("data//image//desert1.bmp", 255);
		
	}

	void Draw_Skybox(float x, float y, float z, float width, float height, float length)
{
	glPushMatrix();
	//glRotated(90,1,0,0);
	// Center the Skybox around the given x,y,z position
	x = x - width / 2;
	y = y - height / 2;
	z = z - length / 2;
		glColor3f(1, 0.5, 0);


	// Draw Front side
	glBindTexture(GL_TEXTURE_2D, SKYFRONT);
	
	glBegin(GL_QUADS);
	glTexCoord2f(1.0f, 0.0f); glVertex3f(x, y, z + length);
	glTexCoord2f(1.0f, 1.0f); glVertex3f(x, y + height, z + length);
	glTexCoord2f(0.0f, 1.0f); glVertex3f(x + width, y + height, z + length);
	glTexCoord2f(0.0f, 0.0f); glVertex3f(x + width, y, z + length);
	glEnd();

	// Draw Back side
	glBindTexture(GL_TEXTURE_2D, SKYBACK);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, 0x812F);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, 0x812F);
	glBegin(GL_QUADS);
	glTexCoord2f(1.0f, 0.0f); glVertex3f(x + width, y, z);
	glTexCoord2f(1.0f, 1.0f); glVertex3f(x + width, y + height, z);
	glTexCoord2f(0.0f, 1.0f); glVertex3f(x, y + height, z);
	glTexCoord2f(0.0f, 0.0f); glVertex3f(x, y, z);
	glEnd();

	// Draw Left side
	glBindTexture(GL_TEXTURE_2D, SKYLEFT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, 0x812F);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, 0x812F);
	glBegin(GL_QUADS);
	glTexCoord2f(1.0f, 1.0f); glVertex3f(x, y + height, z);
	glTexCoord2f(0.0f, 1.0f); glVertex3f(x, y + height, z + length);
	glTexCoord2f(0.0f, 0.0f); glVertex3f(x, y, z + length);
	glTexCoord2f(1.0f, 0.0f); glVertex3f(x, y, z);
	glEnd();

	// Draw Right side
	glBindTexture(GL_TEXTURE_2D, SKYRIGHT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, 0x812F);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, 0x812F);
	glBegin(GL_QUADS);
	glTexCoord2f(0.0f, 0.0f); glVertex3f(x + width, y, z);
	glTexCoord2f(1.0f, 0.0f); glVertex3f(x + width, y, z + length);
	glTexCoord2f(1.0f, 1.0f); glVertex3f(x + width, y + height, z + length);
	glTexCoord2f(0.0f, 1.0f); glVertex3f(x + width, y + height, z);
	glEnd();

	// Draw Up side
	glBindTexture(GL_TEXTURE_2D, SKYUP);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, 0x812F);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, 0x812F);
	glBegin(GL_QUADS);
	glTexCoord2f(0.0f, 0.0f); glVertex3f(x + width, y + height, z);
	glTexCoord2f(1.0f, 0.0f); glVertex3f(x + width, y + height, z + length);
	glTexCoord2f(1.0f, 1.0f); glVertex3f(x, y + height, z + length);
	glTexCoord2f(0.0f, 1.0f); glVertex3f(x, y + height, z);
	glEnd();

	// Draw Down side
	glBindTexture(GL_TEXTURE_2D, SKYDOWN);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, 0x812F);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, 0x812F);
	glBegin(GL_QUADS);
	glTexCoord2f(0.0f, 0.0f); glVertex3f(x, y, z);
	glTexCoord2f(1.0f, 0.0f); glVertex3f(x, y, z + length);
	glTexCoord2f(1.0f, 1.0f); glVertex3f(x + width, y, z + length);
	glTexCoord2f(0.0f, 1.0f); glVertex3f(x + width, y, z);
	glEnd();

	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
		glColor3f(1, 1, 1);

	glPopMatrix();
}



	void drowDesert(){
	
	glPushMatrix();
	 	glRotated(-90,1,0,0);	   
	    glBindTexture(GL_TEXTURE_2D,desert1); // Bind texture
		glBegin(GL_QUADS);

		/*
		 glTexCoord2f(200,0);      glVertex2f(-400,400);
        glTexCoord2f(200,200);     glVertex2f(400, 400);

        glTexCoord2f(0,200);     glVertex2f(400, -400);
        glTexCoord2f(0,0);       glVertex2f(-400, -400);
		*/
        glTexCoord2f(150,0);     glVertex3f(-1000,1000,-5);
        glTexCoord2f(150,150);     glVertex3f(1000, 1000,-5);
        glTexCoord2f(0,150);     glVertex3f(1000, -500,-5);
        glTexCoord2f(0,0);     glVertex3f(-1000,-1000,-5);
		glEnd();
	glPopMatrix();
	
	}

};

