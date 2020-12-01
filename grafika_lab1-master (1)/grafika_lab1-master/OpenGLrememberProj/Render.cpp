

#include "Render.h"

#include <Windows.h>
#include <GL\GL.h>
#include <GL\GLU.h>

void Render(double delta_time)
{   
	double A[] = { -1, -1, 0 };
	double B[] = { -1, 1, 0 };
	double C[] = { 1, 1, 0 };
	double D[] = { 1, -1, 0 };


	

		

		glBegin(GL_TRIANGLES);

		glColor3d(0, 1, 0.2);
		
		glVertex3d(0, 0, 0);
		glVertex3d(3, 4, 0);
		glVertex3d(8, 4, 0);

		glVertex3d(3, 4, 0);
		glVertex3d(8, 4, 0);
		glVertex3d(5, 6, 0);

		glVertex3d(3, 4, 0);
		glVertex3d(5, 6, 0);
		glVertex3d(6, 9, 0);

		glVertex3d(3, 4, 0);
		glVertex3d(6, 9, 0);
		glVertex3d(1, 9, 0);

		glVertex3d(14, 6, 0);
		glVertex3d(8, 4, 0);
		glVertex3d(5, 6, 0);

		glVertex3d(14, 6, 0);
		glVertex3d(8, 4, 0);
		glVertex3d(11, 0, 0);

		//----------
		glColor3d(1, 1, 0);

		glVertex3d(0, 0, 4);
		glVertex3d(3, 4, 4);
		glVertex3d(8, 4, 4);

		glVertex3d(3, 4, 4);
		glVertex3d(8, 4, 4);
		glVertex3d(5, 6, 4);

		glVertex3d(3, 4, 4);
		glVertex3d(5, 6, 4);
		glVertex3d(6, 9, 4);

		glVertex3d(3, 4, 4);
		glVertex3d(6, 9, 4);
		glVertex3d(1, 9, 4);

		glVertex3d(14, 6, 4);
		glVertex3d(8, 4, 4);
		glVertex3d(5, 6, 4);

		glVertex3d(14, 6, 4);
		glVertex3d(8, 4, 4);
		glVertex3d(11, 0, 4);

		glEnd();
		



		glBegin(GL_QUADS);

		glColor3d(1, 0, 1);

		glVertex3d(0, 0, 0);
		glVertex3d(8, 4, 0);
		glVertex3d(8, 4, 4);
		glVertex3d(0, 0, 4);

		glVertex3d(8, 4, 0);
		glVertex3d(11, 0, 0);
		glVertex3d(11, 0, 4);
		glVertex3d(8, 4, 4);

		
		glVertex3d(14, 6, 0);
		glVertex3d(11, 0, 0);
		glVertex3d(11, 0, 4);
		glVertex3d(14, 6, 4);

		
		glVertex3d(14, 6, 0);
		glVertex3d(5, 6, 0);
		glVertex3d(5, 6, 4);
		glVertex3d(14, 6, 4);

		glVertex3d(5, 6, 0);
		glVertex3d(6, 9, 0);
		glVertex3d(6, 9, 4);
		glVertex3d(5, 6, 4);
		

		
		glVertex3d(6, 9, 0);
		glVertex3d(1, 9, 0);
		glVertex3d(1, 9, 4);
		glVertex3d(6, 9, 4);

		glVertex3d(3, 4, 0);
		glVertex3d(1, 9, 0);
		glVertex3d(1, 9, 4);
		glVertex3d(3, 4, 4);

		glVertex3d(3, 4, 0);
		glVertex3d(0, 0, 0);
		glVertex3d(0, 0, 4);
		glVertex3d(3, 4, 4);

		glEnd();
}   

