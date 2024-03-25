#include<iostream>
#include <windows.h>		// Header File For Windows
#include <gl/GL.h>			// Header File For The OpenGL32 Library
#include <gl/glu.h>			// Header File For The GLu32 Library
#include <glut.h>			// Header File For The GLut32 Library
#include <fstream>
#include <math.h>
#include "math3d.h"
#include "texture.h"
#include <glaux.h>
#include "camera.h"
#include "Model_3DS.h"
#include "GLTexture.h"
#include "DRIVERROOM.h"
#include "TRAILER.h"
#include "PASSENGER.h"
#include "BACKGROUND.h"
#include "BACKROUNDDES.h"
#include "SKYBOX.h"
#include "SKYBOX2.h"
#include "SKYBOX3.h"
#include "BABYROOM.h"
#include "CINEMAROOM.h"
#include "BEDROOM.h"
#include "KITCHEN.h"




//include lib file
#pragma comment(lib,"opengl32.lib")
#pragma comment(lib,"glut32.lib")
#pragma comment(lib,"glu32.lib")
#pragma comment(lib,"GLAUX.LIB")

using namespace std;

HDC			hDC=NULL;		// Private GDI Device Context
HGLRC		hRC=NULL;		// Permanent Rendering Context
HWND		hWnd=NULL;		// Holds Our Window Handle
HINSTANCE	hInstance;		// Holds The Instance Of The Application

bool	keys[256];			// Array Used For The Keyboard Routine
bool	active=TRUE;		// Window Active Flag Set To TRUE By Default
bool	fullscreen=TRUE; 	// Fullscreen Flag Set To Fullscreen Mode By Default

Camera cam;
LRESULT	CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);	// Declaration For WndProc
//******************************************
// ============= Members Definition =========

float backx=0,changex=0;

GLvoid ReSizeGLScene(GLsizei width, GLsizei height)		// Resize And Initialize The GL Window
{
	if (height==0)										// Prevent A Divide By Zero By
	{
		height=1;										// Making Height Equal One
	}
	glViewport(0,0,width,height);						// Reset The Current Viewport
	glMatrixMode(GL_PROJECTION);						// Select The Projection Matrix
	glLoadIdentity();									// Reset The Projection Matrix
	// Calculate The Aspect Ratio Of The Window
	gluPerspective(45.0f,(GLfloat)width/(GLfloat)height,0.1f,10000.0f);
	glMatrixMode(GL_MODELVIEW);							// Select The Modelview Matrix
	glLoadIdentity();									// Reset The Modelview Matrix
}

int mapMode=1;
	Model_3DS *woman1;
	Model_3DS *man;
	Model_3DS *lampp;
	Model_3DS *child;
PASSENGER passenger;
TRAILER trailer;
SkyBox sky;
SKYBOX2 sky2;
SKYBOX3 sky3;
BACKGROUND background;
BACKROUNDDES backrounddes;
BABYROOM babyroom;
CINEMAROOM cinemaroom;
BEDROOM bedroom;
KITCHEN kitchen;
DRIVERROOM d_room;

int InitGL(GLvoid)										// All Setup For OpenGL Goes Here
{
	glShadeModel(GL_SMOOTH);							// Enable Smooth Shading
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);				// Black Background
	glClearDepth(1.0f);									// Depth Buffer Setup
	glEnable(GL_DEPTH_TEST);							// Enables Depth Testing
	glDepthFunc(GL_LEQUAL);								// The Type Of Depth Testing To Do
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);	// Really Nice Perspective Calculations	
	glEnable(GL_TEXTURE_2D);

   //texture here

	sky.init();
	sky2.init();
	sky3.init();

	trailer.init();
	passenger.init();
	babyroom.init();
	d_room.init();
	cinemaroom.init();
	bedroom.init();
	kitchen.init();
	background.init();
	backrounddes.init();
	
   //models here

	woman1=new Model_3DS();
	woman1->Load("data//model//woman1.3DS");
	GLTexture woman1_tex;
	woman1_tex.LoadBMP("data//image//woman1.bmp");
	woman1->Materials[0].tex=woman1_tex;

	child=new Model_3DS();
	
	child->Load("data//model//kkk.3DS");
	GLTexture child_tex,child1_tex;
	child_tex.LoadBMP("data//image//kids.bmp");
	child1_tex.LoadBMP("data//image//kideyes.bmp");
	child->Materials[0].tex=child_tex;
	child->Materials[1].tex=child1_tex;
	
	child->scale = 0.005;


	man=new Model_3DS();
	man->Load("data//model//man1.3DS");
	GLTexture man_tex , Gray1, Carbon , Gray,trophy_tex;
	man_tex.LoadBMP("data//image//man1.bmp");
	man->Materials[0].tex=man_tex;

	//camera here
	cam.MoveForward(-15);
	//cam.RotateX(90);

	return true;										// Initialization Went OK
}

void keyss(){
	if(keys['O']){
		 PlaySound(TEXT("Data/Sound/train.wav"),NULL,SND_FILENAME | SND_ALIAS | SND_ASYNC | SND_LOOP);
			changex=0.5;
	 }
	if(keys['H']){
		 PlaySound(TEXT("Data/Sound/trainwhistle.wav"),NULL,SND_FILENAME | SND_ALIAS | SND_ASYNC | SND_LOOP);
	}
	if(keys['P']){
		PlaySound(NULL, 0, 0);
		changex=0;
	}
	if(keys['1']){	mapMode=1; }
	if(keys['2']){	mapMode=2; }
	if(keys['3']){	mapMode=3; }


	if( backx > 700 ){ backx = -500 ;} 


}



int main( HINSTANCE hInstance, HINSTANCE hPrevInstance,
LPSTR lpCmdLine, int nCmdShow)
{
  cout<<"بيانيات";
  return WinMain(hInstance,hPrevInstance,lpCmdLine,nCmdShow);;
}


void drawwomen(float x , float y , float z , float teta){
	woman1->pos.x=x;
	woman1->pos.y=y;
	woman1->pos.z=z;
	woman1->rot.y=teta;
	woman1->scale=0.03;
    woman1->Draw();

}
void Draw()
{
	glPushMatrix();

	child->pos.z=1-50;
	child->pos.x=1-160;
	child->pos.y=1-125;
	//child->rot.y=-90;
	  
	glPopMatrix();





}

void drawmen(){
	man->pos.z=1.5;
	man->pos.x=15;
	man->pos.y=0;
	man->rot.y=130;
	man->scale=4.03;
    man->Draw();

}



void kitchen_room(){
	
	 glPushMatrix();
	 	glRotated(-90,1,0,0);	

		kitchen.oven1();
		kitchen.shelves();
		kitchen.water_filter();
		kitchen.braad();
		kitchen.table1();
		kitchen.chairs();
		kitchen.furniture();
		glPopMatrix();

}

void bed_room(){
	glPushMatrix(); 	

	  bedroom.bed1_body();		//bed1 body
	  bedroom.bed1_desk();		//bed1 desk
	  bedroom.bed1_mattress();	//bed1 mattress

	  bedroom.bed2_body();		 //bed2 body
	  bedroom.bed2_desk();		 //bed2 desk
	  bedroom.bed2_mattress();	 //bed2 mattress

	  bedroom.furniture();		 //furniture
	  bedroom.drawer();			 //drawer 
	  bedroom.mirror();			 //mirror
	  bedroom.carpet();			 //carpet
	  bedroom.paint();			 //paint

	 glPopMatrix();
}


void baby_room(){
		glPushMatrix(); 	

		babyroom.bed1();
		babyroom.pillow1();

		babyroom.bed2();
		babyroom.pillow2();

		babyroom.paint();

		babyroom.carpet();

		babyroom.furniture();
	
	glPushMatrix();		
		glRotated(-180,0,1,0);
		glTranslated(-6,0,-6);
		glTranslated(0,4,0);
		child->Draw();
	glPopMatrix();
 


		glPopMatrix();
}


void cinema_room(){

	cinemaroom.sofa1();
	cinemaroom.sofa1_desk();
	cinemaroom.sofa2();
	cinemaroom.sofa2_desk();
	cinemaroom.sofa3();
	cinemaroom.sofa3_desk();
	cinemaroom.screen();


}
void driverroom(){
	d_room.chairdriver();
	d_room.chairdriverdesk();
	d_room.chairdriver1();
	d_room.chairdriverdesk1();
	d_room.controlpanel();
	d_room.screen();
	d_room.eee();
}

void passengerRoom(){

	passenger.drowbench();		// bench 1
	drawwomen(4,0.6,2.5,170);

	glPushMatrix();				// bench 2
	glRotated(-180,0,1,0);
	glTranslated(-12.5,0,-9.5);
	passenger.drowbench();
	drawwomen(4,0.6,2.5,170);
	glPopMatrix();
 
	glPushMatrix();				// bench 3
	glRotated(-180,0,1,0);
	glTranslated(-28.5,0,-9.5);
	passenger.drowbench();
	drawwomen(4,0.6,2.5,170);
	glPopMatrix();
	 
	glPushMatrix();				// bench 4
	glTranslated(15.5,0,0);
	passenger.drowbench();
	drawwomen(4,0.6,2.5,170);
	glPopMatrix();

	passenger.drawcarpet();		//carpet
	passenger.drawClock();		//Clock
	passenger.drawtable1();		//table



}


void drawtrailer(){
		trailer.trailerwall();
		trailer.trailerbody();
		trailer.trailerwheel();
		trailer.buildwindow();
		trailer.window_glass();
		trailer.door();
}


void buildtrailer(int a , int x){
	glPushMatrix(); 	
	glTranslated(x,0,0);

	switch (a)  {
    case 1:
		passengerRoom();
		break;

    case 2:
		baby_room();	
		break;
	case 3:
		cinema_room();	
		break;
	case 4:
		bed_room();	
		break;
	case 5:
		kitchen_room();	
		break;
    	case 6:
		driverroom();
		break;
       
       
}
		drawtrailer();

		glPopMatrix();
}

void buildtrain(){

	//+32
	buildtrailer(6 ,0);
	buildtrailer(3 ,33);
	buildtrailer(1 ,66);
	buildtrailer(4 ,99);
	buildtrailer(1 ,130);
	buildtrailer(5 ,162);
	buildtrailer(4 ,195);
	buildtrailer(1 ,228);
	buildtrailer(2 ,260);
	buildtrailer(1 ,292);

}


void drawbackground(){

	switch (mapMode)  {
    case 1:
		sky.Draw_Skybox(0, 10 ,0,10000, 10000, 10000);
		background.drawherb();
		background.drawtrees();
		background.buildings();
		break;
	case 2:
		sky2.Draw_Skybox(0, 10 ,0,10000, 10000, 10000);
		sky2.drowDesert();
		backrounddes.drawbox();
		break;
	case 3:
		sky3.Draw_Skybox(0, 10 ,0,10000, 10000, 10000);
		sky3.drowMoon();
		break;
	}

	background.drowrail();
}

int DrawGLScene(GLvoid)									
{	
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	
	glLoadIdentity();
	cam.Render();
	cam.Control_With_KeyBoard(keys);
	glColor3f(1.0f,1.0f,1.0f);

	keyss();


	backx=backx+changex;
	glPushMatrix(); //background 
	glTranslated(backx,0,0);
	drawbackground();
	glPopMatrix();

	drawmen();
		buildtrain();

	return true;
	
} 

GLvoid KillGLWindow(GLvoid)								// Properly Kill The Window
{
	if (fullscreen)										// Are We In Fullscreen Mode?
	{
		ChangeDisplaySettings(NULL,0);					// If So Switch Back To The Desktop
		ShowCursor(TRUE);								// Show Mouse Pointer
	}

	if (hRC)											// Do We Have A Rendering Context?
	{
		if (!wglMakeCurrent(NULL,NULL))					// Are We Able To Release The DC And RC Contexts?
		{
			MessageBox(NULL,"Release Of DC And RC Failed.","SHUTDOWN ERROR",MB_OK | MB_ICONINFORMATION);
		}

		if (!wglDeleteContext(hRC))						// Are We Able To Delete The RC?
		{
			MessageBox(NULL,"Release Rendering Context Failed.","SHUTDOWN ERROR",MB_OK | MB_ICONINFORMATION);
		}
		hRC=NULL;										// Set RC To NULL
	}

	if (hDC && !ReleaseDC(hWnd,hDC))					// Are We Able To Release The DC
	{
		MessageBox(NULL,"Release Device Context Failed.","SHUTDOWN ERROR",MB_OK | MB_ICONINFORMATION);
		hDC=NULL;										// Set DC To NULL
	}

	if (hWnd && !DestroyWindow(hWnd))					// Are We Able To Destroy The Window?
	{
		MessageBox(NULL,"Could Not Release hWnd.","SHUTDOWN ERROR",MB_OK | MB_ICONINFORMATION);
		hWnd=NULL;										// Set hWnd To NULL
	}

	if (!UnregisterClass("OpenGL",hInstance))			// Are We Able To Unregister Class
	{
		MessageBox(NULL,"Could Not Unregister Class.","SHUTDOWN ERROR",MB_OK | MB_ICONINFORMATION);
		hInstance=NULL;									// Set hInstance To NULL
	}
}

/*	This Code Creates Our OpenGL Window.  Parameters Are:					*
 *	title			- Title To Appear At The Top Of The Window				*
 *	width			- Width Of The GL Window Or Fullscreen Mode				*
 *	height			- Height Of The GL Window Or Fullscreen Mode			*
 *	bits			- Number Of Bits To Use For Color (8/16/24/32)			*
 *	fullscreenflag	- Use Fullscreen Mode (TRUE) Or Windowed Mode (FALSE)	*/
 
BOOL CreateGLWindow(char* title, int width, int height, int bits, bool fullscreenflag)
{
	GLuint		PixelFormat;			// Holds The Results After Searching For A Match
	WNDCLASS	wc;						// Windows Class Structure
	DWORD		dwExStyle;				// Window Extended Style
	DWORD		dwStyle;				// Window Style
	RECT		WindowRect;				// Grabs Rectangle Upper Left / Lower Right Values
	WindowRect.left=(long)0;			// Set Left Value To 0
	WindowRect.right=(long)width;		// Set Right Value To Requested Width
	WindowRect.top=(long)0;				// Set Top Value To 0
	WindowRect.bottom=(long)height;		// Set Bottom Value To Requested Height

	fullscreen=fullscreenflag;			// Set The Global Fullscreen Flag

	hInstance			= GetModuleHandle(NULL);				// Grab An Instance For Our Window
	wc.style			= CS_HREDRAW | CS_VREDRAW | CS_OWNDC;	// Redraw On Size, And Own DC For Window.
	wc.lpfnWndProc		= (WNDPROC) WndProc;					// WndProc Handles Messages
	wc.cbClsExtra		= 0;									// No Extra Window Data
	wc.cbWndExtra		= 0;									// No Extra Window Data
	wc.hInstance		= hInstance;							// Set The Instance
	wc.hIcon			= LoadIcon(NULL, IDI_WINLOGO);			// Load The Default Icon
	wc.hCursor			= LoadCursor(NULL, IDC_ARROW);			// Load The Arrow Pointer
	wc.hbrBackground	= NULL;									// No Background Required For GL
	wc.lpszMenuName		= NULL;									// We Don't Want A Menu
	wc.lpszClassName	= "OpenGL";								// Set The Class Name

	if (!RegisterClass(&wc))									// Attempt To Register The Window Class
	{
		MessageBox(NULL,"Failed To Register The Window Class.","ERROR",MB_OK|MB_ICONEXCLAMATION);
		return FALSE;											// Return FALSE
	}
	
	if (fullscreen)												// Attempt Fullscreen Mode?
	{
		DEVMODE dmScreenSettings;								// Device Mode
		memset(&dmScreenSettings,0,sizeof(dmScreenSettings));	// Makes Sure Memory's Cleared
		dmScreenSettings.dmSize=sizeof(dmScreenSettings);		// Size Of The Devmode Structure
		dmScreenSettings.dmPelsWidth	= width;				// Selected Screen Width
		dmScreenSettings.dmPelsHeight	= height;				// Selected Screen Height
		dmScreenSettings.dmBitsPerPel	= bits;					// Selected Bits Per Pixel
		dmScreenSettings.dmFields=DM_BITSPERPEL|DM_PELSWIDTH|DM_PELSHEIGHT;

		// Try To Set Selected Mode And Get Results.  NOTE: CDS_FULLSCREEN Gets Rid Of Start Bar.
		if (ChangeDisplaySettings(&dmScreenSettings,CDS_FULLSCREEN)!=DISP_CHANGE_SUCCESSFUL)
		{
			// If The Mode Fails, Offer Two Options.  Quit Or Use Windowed Mode.
			if (MessageBox(NULL,"The Requested Fullscreen Mode Is Not Supported By\nYour Video Card. Use Windowed Mode Instead?","NeHe GL",MB_YESNO|MB_ICONEXCLAMATION)==IDYES)
			{
				fullscreen=FALSE;		// Windowed Mode Selected.  Fullscreen = FALSE
			}
			else
			{
				// Pop Up A Message Box Letting User Know The Program Is Closing.
				MessageBox(NULL,"Program Will Now Close.","ERROR",MB_OK|MB_ICONSTOP);
				return FALSE;									// Return FALSE
			}
		}
	}

	if (fullscreen)												// Are We Still In Fullscreen Mode?
	{
		dwExStyle=WS_EX_APPWINDOW;								// Window Extended Style
		dwStyle=WS_POPUP;										// Windows Style
		ShowCursor(FALSE);										// Hide Mouse Pointer
	}
	else
	{
		dwExStyle=WS_EX_APPWINDOW | WS_EX_WINDOWEDGE;			// Window Extended Style
		dwStyle=WS_OVERLAPPEDWINDOW;							// Windows Style
	}

	AdjustWindowRectEx(&WindowRect, dwStyle, FALSE, dwExStyle);		// Adjust Window To True Requested Size

	// Create The Window
	if (!(hWnd=CreateWindowEx(	dwExStyle,							// Extended Style For The Window
								"OpenGL",							// Class Name
								title,								// Window Title
								dwStyle |							// Defined Window Style
								WS_CLIPSIBLINGS |					// Required Window Style
								WS_CLIPCHILDREN,					// Required Window Style
								0, 0,								// Window Position
								WindowRect.right-WindowRect.left,	// Calculate Window Width
								WindowRect.bottom-WindowRect.top,	// Calculate Window Height
								NULL,								// No Parent Window
								NULL,								// No Menu
								hInstance,							// Instance
								NULL)))								// Dont Pass Anything To WM_CREATE
	{
		KillGLWindow();								// Reset The Display
		MessageBox(NULL,"Window Creation Error.","ERROR",MB_OK|MB_ICONEXCLAMATION);
		return FALSE;								// Return FALSE
	}

	static	PIXELFORMATDESCRIPTOR pfd=				// pfd Tells Windows How We Want Things To Be
	{
		sizeof(PIXELFORMATDESCRIPTOR),				// Size Of This Pixel Format Descriptor
		1,											// Version Number
		PFD_DRAW_TO_WINDOW |						// Format Must Support Window
		PFD_SUPPORT_OPENGL |						// Format Must Support OpenGL
		PFD_DOUBLEBUFFER,							// Must Support Double Buffering
		PFD_TYPE_RGBA,								// Request An RGBA Format
		bits,										// Select Our Color Depth
		0, 0, 0, 0, 0, 0,							// Color Bits Ignored
		0,											// No Alpha Buffer
		0,											// Shift Bit Ignored
		0,											// No Accumulation Buffer
		0, 0, 0, 0,									// Accumulation Bits Ignored
		16,											// 16Bit Z-Buffer (Depth Buffer)  
		0,											// No Stencil Buffer
		0,											// No Auxiliary Buffer
		PFD_MAIN_PLANE,								// Main Drawing Layer
		0,											// Reserved
		0, 0, 0										// Layer Masks Ignored
	};
	
	if (!(hDC=GetDC(hWnd)))							// Did We Get A Device Context?
	{
		KillGLWindow();								// Reset The Display
		MessageBox(NULL,"Can't Create A GL Device Context.","ERROR",MB_OK|MB_ICONEXCLAMATION);
		return FALSE;								// Return FALSE
	}

	if (!(PixelFormat=ChoosePixelFormat(hDC,&pfd)))	// Did Windows Find A Matching Pixel Format?
	{
		KillGLWindow();								// Reset The Display
		MessageBox(NULL,"Can't Find A Suitable PixelFormat.","ERROR",MB_OK|MB_ICONEXCLAMATION);
		return FALSE;								// Return FALSE
	}

	if(!SetPixelFormat(hDC,PixelFormat,&pfd))		// Are We Able To Set The Pixel Format?
	{
		KillGLWindow();								// Reset The Display
		MessageBox(NULL,"Can't Set The PixelFormat.","ERROR",MB_OK|MB_ICONEXCLAMATION);
		return FALSE;								// Return FALSE
	}

	if (!(hRC=wglCreateContext(hDC)))				// Are We Able To Get A Rendering Context?
	{
		KillGLWindow();								// Reset The Display
		MessageBox(NULL,"Can't Create A GL Rendering Context.","ERROR",MB_OK|MB_ICONEXCLAMATION);
		return FALSE;								// Return FALSE
	}

	if(!wglMakeCurrent(hDC,hRC))					// Try To Activate The Rendering Context
	{
		KillGLWindow();								// Reset The Display
		MessageBox(NULL,"Can't Activate The GL Rendering Context.","ERROR",MB_OK|MB_ICONEXCLAMATION);
		return FALSE;								// Return FALSE
	}

	ShowWindow(hWnd,SW_SHOW);						// Show The Window
	SetForegroundWindow(hWnd);						// Slightly Higher Priority
	SetFocus(hWnd);									// Sets Keyboard Focus To The Window
	ReSizeGLScene(width, height);					// Set Up Our Perspective GL Screen

	if (!InitGL())									// Initialize Our Newly Created GL Window
	{
		KillGLWindow();								// Reset The Display
		MessageBox(NULL,"Initialization Failed.","ERROR",MB_OK|MB_ICONEXCLAMATION);
		return FALSE;								// Return FALSE
	}

	return TRUE;									// Success
}

LRESULT CALLBACK WndProc(	HWND	hWnd,			// Handle For This Window
							UINT	uMsg,			// Message For This Window
							WPARAM	wParam,			// Additional Message Information
							LPARAM	lParam){
	switch (uMsg)									// Check For Windows Messages
	{
		case WM_ACTIVATE:							// Watch For Window Activate Message
		{
			if (!HIWORD(wParam))					// Check Minimization State
			{
				active=TRUE;						// Program Is Active
			}
			else
			{
				active=FALSE;						// Program Is No Longer Active
			}

			return 0;								// Return To The Message Loop
		}

		case WM_SYSCOMMAND:							// Intercept System Commands
		{
			switch (wParam)							// Check System Calls
			{
				case SC_SCREENSAVE:					// Screensaver Trying To Start?
				case SC_MONITORPOWER:				// Monitor Trying To Enter Powersave?
				return 0;							// Prevent From Happening
			}
			break;									// Exit
		}

		case WM_CLOSE:								// Did We Receive A Close Message?
		{
			PostQuitMessage(0);						// Send A Quit Message
			return 0;								// Jump Back
		}

		case WM_KEYDOWN:							// Is A Key Being Held Down?
		{
			keys[wParam] = TRUE;					// If So, Mark It As TRUE
			return 0;								// Jump Back
		}

		case WM_KEYUP:								// Has A Key Been Released?
		{
			keys[wParam] = FALSE;					// If So, Mark It As FALSE
			return 0;								// Jump Back
		}

		case WM_SIZE:								// Resize The OpenGL Window
		{
			ReSizeGLScene(LOWORD(lParam),HIWORD(lParam));  // LoWord=Width, HiWord=Height
			return 0;								// Jump Back
		}
	}

	// Pass All Unhandled Messages To DefWindowProc
	return DefWindowProc(hWnd,uMsg,wParam,lParam);
}

int WINAPI WinMain(	HINSTANCE	hInstance,			// Instance
					HINSTANCE	hPrevInstance,		// Previous Instance
					LPSTR		lpCmdLine,			// Command Line Parameters
					int			nCmdShow)			// Window Show State
{
	MSG		msg;									// Windows Message Structure
	BOOL	done=FALSE;								// Bool Variable To Exit Loop

	// Ask The User Which Screen Mode They Prefer
	//if (MessageBox(NULL,"Would You Like To Run In Fullscreen Mode?", "Start FullScreen?",MB_YESNO|MB_ICONQUESTION)==IDNO)
	//{
		fullscreen=FALSE;							// Windowed Mode
	//}

	// Create Our OpenGL Window
	if (!CreateGLWindow("train",700,500,16,fullscreen))
	{
		return 0;									// Quit If Window Was Not Created
	}

	while(!done)									// Loop That Runs While done=FALSE
	{
		if (PeekMessage(&msg,NULL,0,0,PM_REMOVE))	// Is There A Message Waiting?
		{
			if (msg.message==WM_QUIT)				// Have We Received A Quit Message?
			{
				done=TRUE;							// If So done=TRUE
			}
			else									// If Not, Deal With Window Messages
			{
				TranslateMessage(&msg);				// Translate The Message
				DispatchMessage(&msg);				// Dispatch The Message
			}
		}
		else										// If There Are No Messages
		{
			// Draw The Scene.  Watch For ESC Key And Quit Messages From DrawGLScene()
			if (active)								// Program Active?
			{
				if (keys[VK_ESCAPE])				// Was ESC Pressed?
				{
					done=TRUE;						// ESC Signalled A Quit
				}
				else								// Not Time To Quit, Update Screen
				{
					DrawGLScene();					// Draw The Scene
					SwapBuffers(hDC);				// Swap Buffers (Double Buffering)
				}
			}
			if (keys[VK_F1])						// Is F1 Being Pressed?
			{
				keys[VK_F1]=FALSE;					// If So Make Key FALSE
				KillGLWindow();						// Kill Our Current Window
				fullscreen=!fullscreen;				// Toggle Fullscreen / Windowed Mode
				// Recreate Our OpenGL Window
				if (!CreateGLWindow("Mahmoud Shahoud && Israa Othman (summer 2010)",700,500,16,fullscreen))
				{
					return 0;						// Quit If Window Was Not Created
				}

			}
		}
	}

	// Shutdown
	KillGLWindow();									// Kill The Window
	return (msg.wParam);							// Exit The Program
}


