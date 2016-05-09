#include <GL/glut.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define L 100
#define NGL  5000000			/*Samples Neglected*/
#define N_t 55000000			/*Total samples*/
#define N (N_t-NGL)
#define T_i 0.000008
#define T_f 0.000010
#define Tstep 0.000001
#define SIZE_T 500				/*The size of emcx in T axis. Check this before compiling!*/
#define SIZE_R 60				/*The size of emcx in R axis. Check this before compiling!*/
#define R_i 0.1					/*Ration of J2/J1. Initial value.*/
#define R_step 0.1				/*step*/
#define R_f	0.1					/*End of R*/
#define Pi 3.1415926536

double sum_M[2];					/*sum_M[0] denotes the cos part; sum_M[1] denotes the sin part*/
double sum_Mag;
double s[L][L];						/*Size of the lattice*/
double sum_E;
double T;

struct Obsv
{
    double C;
    double X;
	double M;
	double E;
};

void Inist();
void Mag();
void Energy(double R);
void MCP(double R);
struct Obsv Cac_obsv(double R);

int level=0;
static GLfloat vertex[10201][3];
static GLfloat color[10201][3];
static GLuint allIndices[10000][4];
GLfloat t;


void init(void);
//void initMenu(void);
void display(void);
void reshape(int w, int h);
void mouse(int button, int state, int x, int y);
void keyboard(unsigned char key, int x, int y);
void menu(int value);
void null_menu(int value);
void idleFunc(void);
void random(void);
void setarray(double *arr);

enum 
{
	M_QUIT
};

double R;
struct Obsv emcx[SIZE_T][SIZE_R];
FILE *ft,*fm,*fx,*fc,*fe,*fr;
int gi, gj;

int main(int argc, char ** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(400, 400);
	glutInitWindowPosition(100, 100);
	glutCreateWindow(argv[0]);
	init();
//	initMenu();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutMouseFunc(mouse);
	glutKeyboardFunc(keyboard);
	glutMainLoop();
	return 0;
}

void init(void)
{
	int i, j;
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glShadeModel(GL_FLAT);
	t=0.0;
	level=0;
	for(i=0; i<=100; i++)
	{
		for(j=0; j<=100; j++)
		{
			vertex[i*101+j][0]=j-50.0;
			vertex[i*101+j][1]=i-50.0;
			vertex[i*101+j][2]=0.0;
		}
	}
	for(i=0; i<100; i++)
	{
		for(j=0; j<100; j++)
		{
			allIndices[i*100+j][0]=i*101+j;
			allIndices[i*100+j][1]=i*101+j+1;
			allIndices[i*100+j][2]=(i+1)*101+j+1;
			allIndices[i*100+j][3]=(i+1)*101+j;
		}
	}
/*****************************************/
//	create empty files
/****************************************/

	fr=fopen("R.txt","w");
	ft=fopen("T.txt","w");
	fx=fopen("X.txt","w");
	fc=fopen("C.txt","w");
	fm=fopen("M.txt","w");
	fe=fopen("E.txt","w");
	fclose(fr);
 	fclose(ft);
	fclose(fx);
	fclose(fc);
	fclose(fm);
	fclose(fe);
	printf("Files created!\n");

	R=R_i;
	srand(time(NULL));

	gi=0;
	gj=0;
	T=T_i;
	Inist();
	setarray(s[0]);
}


void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glEnableClientState(GL_VERTEX_ARRAY);
	glEnableClientState(GL_COLOR_ARRAY);
	glVertexPointer(3, GL_FLOAT, 3 * sizeof(GLfloat), vertex);
	glColorPointer(3, GL_FLOAT, 3 * sizeof(GLfloat), color);
	glPolygonMode(GL_FRONT, GL_FILL);
	glDrawElements(GL_QUADS, 40000, GL_UNSIGNED_INT, allIndices);
	glutSwapBuffers();

}

void reshape(int w, int h)
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-50.0, 50.0, -50.0, 50.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}

void mouse(int button, int state, int x, int y)
{
	switch(button)
	{
	case GLUT_LEFT_BUTTON:
		if(state==GLUT_DOWN)
			glutIdleFunc(idleFunc);
		break;
	case GLUT_RIGHT_BUTTON:
		if(state==GLUT_DOWN)
			glutIdleFunc(NULL);
		break;
	default:
		break;
	}
}

void keyboard(unsigned char key, int x, int y)
{
	switch(key)
	{
	case 'q':
	case 'Q':
		exit(0);
		break;
	case 'a':
		break;
	case 'b':
		break;
	default:
		break;
	}
}

void menu(int value)
{
	switch(value)
	{
	case M_QUIT:
		exit(0);
		break;
	default:
		break;
	}
	glutPostRedisplay();
}

void null_menu(int value)
{
	glutPostRedisplay();
}

void idleFunc(void)
{
	Inist();
	emcx[gi][gj]=Cac_obsv(R);

	setarray(s[0]);
	
	fr=fopen("R.txt","a");
	ft=fopen("T.txt","a");
	fx=fopen("X.txt","a");
	fc=fopen("C.txt","a");
	fm=fopen("M.txt","a");
	fe=fopen("E.txt","a");
	
	fprintf(fr,"%f\n",R);
	fprintf(ft,"%f\n",T);
	fprintf(fx,"%f\n",emcx[gi][gj].X);
	fprintf(fc,"%f\n",emcx[gi][gj].C);
	fprintf(fm,"%f\n",emcx[gi][gj].M);
	fprintf(fe,"%f\n",emcx[gi][gj].E);
	
	fclose(fr);
 	fclose(ft);
	fclose(fx);
	fclose(fc);
	fclose(fm);
	fclose(fe);

	printf("-------------\n");
	printf("R=%f\n",R);
	printf("T=%f\n",T);
	printf("X=%f\n",emcx[gi][gj].X);
	printf("C=%f\n",emcx[gi][gj].C);
	printf("M=%f\n",emcx[gi][gj].M);
	printf("E=%f\n",emcx[gi][gj].E);
	T = T+Tstep;
	
	gi++;
	if(T>T_f)
	{
		T=T_i;
		gi=0;
		gj++;
		R+=R_step;
	}
	if(R>R_f)
		glutIdleFunc(NULL);
	glutPostRedisplay();
}

void random(void)
{
	int i, j;
	for(i=0; i<100; i++)
	{
		for(j=0; j<100; j++)
		{
			color[(i+1)*101+j][0]=fabs(sin(0.01*t+i*0.01+(double)rand()/RAND_MAX*level/50.0*3.14159));
			color[(i+1)*101+j][1]=fabs(sin(0.02*t+i*0.01+(double)rand()/RAND_MAX*level/50.0*3.14159));
			color[(i+1)*101+j][2]=fabs(sin(0.03*t+i*0.01+(double)rand()/RAND_MAX*level/50.0*3.14159));
		}
	}
}

void setarray(double *arr)
{
	int i, j, index=0;
	for(i=0; i<100; i++)
	{
		for(j=0; j<100; j++)
		{
			color[(i+1)*101+j][0]=arr[index]/360.0;
			color[(i+1)*101+j][1]=arr[index]/360.0;
			color[(i+1)*101+j][2]=arr[index]/360.0;
			index++;
		}
	}
}

void Inist()								/*Initialized lattice. All oriented to one direction*/
{
    int i,j;                                      
    for(i=0;i<L;i++)
    {
        for(j=0;j<L;j++)
		{
			s[i][j]=0;
		}
    }
}

struct Obsv Cac_obsv(double R)
{
    int i;
    double E_avg=0.0;
    double E_as=0.0;
    double M_avg=0.0;
    double M_as=0.0;
	struct Obsv emcx;

	Mag();
	Energy(R);

	for(i=0; i<N_t; i++)
    {
        MCP(R);
        if(i>=NGL)
		{
			E_avg+=(double)sum_E/N;
			E_as+=(double)sum_E*sum_E/N;
			M_avg+=(double)sum_Mag/N;
			M_as+=(double)sum_Mag*sum_Mag/N;
		}
	}
	emcx.E=E_avg;
 	emcx.M=M_avg;
	emcx.C=(E_as - E_avg*E_avg)/T/T;
    emcx.X=(M_as - M_avg*M_avg)/T;
    
    return emcx;
}

/*Monte Carlo process.*/
void MCP(double R)
{
    int i,j;
	double agl_rdm;
	double sum,sum_tmp,dE;											/*sum_tmp is used to cal the energy difference*/
	i=rand()%L;
    j=rand()%L;
	agl_rdm=(double)rand()/RAND_MAX*2*Pi;							/*What if I just make it (double)rand()*/
 	
	/*Cal the energy before we add a random angle to s[i][j]*/
	if(j%2==0)
	{
		if(i%2==0)
		{
			sum_tmp=cos(s[i][j]-s[i][(j-1+L)%L])+cos(s[i][j]-s[(i+1)%L][j])+cos(s[i][j]-s[(i-1+L)%L][j]);
			sum_tmp+=R*(cos(s[i][j]-s[(i+1)%L][(j-1+L)%L])+cos(s[i][j]-s[(i+1)%L][(j+1)%L])+cos(s[i][j]-s[(i-1+L)%L][(j+1)%L])+cos(s[i][j]-s[(i-1+L)%L][(j-1+L)%L])+cos(s[i][j]-s[(i+2)%L][j])+cos(s[i][j]-s[(i-2+L)%L][j]));
		}
		else if(i%2==1)
		{
			sum_tmp=cos(s[i][j]-s[i][(j+1)%L])+cos(s[i][j]-s[(i+1)%L][j])+cos(s[i][j]-s[(i-1+L)%L][j]);
			sum_tmp+=R*(cos(s[i][j]-s[(i+1)%L][(j-1+L)%L])+cos(s[i][j]-s[(i+1)%L][(j+1)%L])+cos(s[i][j]-s[(i-1+L)%L][(j+1)%L])+cos(s[i][j]-s[(i-1+L)%L][(j-1+L)%L])+cos(s[i][j]-s[(i+2)%L][j])+cos(s[i][j]-s[(i-2+L)%L][j]));
		}
	}
	else if(j%2==1)
	{
		if(i%2==1)
		{
			sum_tmp=cos(s[i][j]-s[i][(j-1+L)%L])+cos(s[i][j]-s[(i+1)%L][j])+cos(s[i][j]-s[(i-1+L)%L][j]);
			sum_tmp+=R*(cos(s[i][j]-s[(i+1)%L][(j-1+L)%L])+cos(s[i][j]-s[(i+1)%L][(j+1)%L])+cos(s[i][j]-s[(i-1+L)%L][(j+1)%L])+cos(s[i][j]-s[(i-1+L)%L][(j-1+L)%L])+cos(s[i][j]-s[(i+2)%L][j])+cos(s[i][j]-s[(i-2+L)%L][j]));
		}
		else if(i%2==0)
		{
			sum_tmp=cos(s[i][j]-s[i][(j+1)%L])+cos(s[i][j]-s[(i+1)%L][j])+cos(s[i][j]-s[(i-1+L)%L][j]);
			sum_tmp+=R*(cos(s[i][j]-s[(i+1)%L][(j-1+L)%L])+cos(s[i][j]-s[(i+1)%L][(j+1)%L])+cos(s[i][j]-s[(i-1+L)%L][(j+1)%L])+cos(s[i][j]-s[(i-1+L)%L][(j-1+L)%L])+cos(s[i][j]-s[(i+2)%L][j])+cos(s[i][j]-s[(i-2+L)%L][j]));
		}
	}
	else
	{
		printf("Checkpoint 1! j is neither odd nor even! Attention!");
	}

	/*Add a random angle to s[i][j]*/
	s[i][j]+=agl_rdm;														/*Exceeding 2*Pi makes not sense in cos or sin func*/
	
	/*Cal the energy after we add a random to s[i][j]*/
	if(j%2==0)
	{
		if(i%2==0)
		{
			sum=cos(s[i][j]-s[i][(j-1+L)%L])+cos(s[i][j]-s[(i+1)%L][j])+cos(s[i][j]-s[(i-1+L)%L][j]);
			sum+=R*(cos(s[i][j]-s[(i+1)%L][(j-1+L)%L])+cos(s[i][j]-s[(i+1)%L][(j+1)%L])+cos(s[i][j]-s[(i-1+L)%L][(j+1)%L])+cos(s[i][j]-s[(i-1+L)%L][(j-1+L)%L])+cos(s[i][j]-s[(i+2)%L][j])+cos(s[i][j]-s[(i-2+L)%L][j]));
		}
		else if(i%2==1)
		{
			sum=cos(s[i][j]-s[i][(j+1)%L])+cos(s[i][j]-s[(i+1)%L][j])+cos(s[i][j]-s[(i-1+L)%L][j]);
			sum+=R*(cos(s[i][j]-s[(i+1)%L][(j-1+L)%L])+cos(s[i][j]-s[(i+1)%L][(j+1)%L])+cos(s[i][j]-s[(i-1+L)%L][(j+1)%L])+cos(s[i][j]-s[(i-1+L)%L][(j-1+L)%L])+cos(s[i][j]-s[(i+2)%L][j])+cos(s[i][j]-s[(i-2+L)%L][j]));
		}
	}
	else if(j%2==1)
	{
		if(i%2==1)
		{
			sum=cos(s[i][j]-s[i][(j-1+L)%L])+cos(s[i][j]-s[(i+1)%L][j])+cos(s[i][j]-s[(i-1+L)%L][j]);
			sum+=R*(cos(s[i][j]-s[(i+1)%L][(j-1+L)%L])+cos(s[i][j]-s[(i+1)%L][(j+1)%L])+cos(s[i][j]-s[(i-1+L)%L][(j+1)%L])+cos(s[i][j]-s[(i-1+L)%L][(j-1+L)%L])+cos(s[i][j]-s[(i+2)%L][j])+cos(s[i][j]-s[(i-2+L)%L][j]));
		}
		else if(i%2==0)
		{
			sum=cos(s[i][j]-s[i][(j+1)%L])+cos(s[i][j]-s[(i+1)%L][j])+cos(s[i][j]-s[(i-1+L)%L][j]);
			sum+=R*(cos(s[i][j]-s[(i+1)%L][(j-1+L)%L])+cos(s[i][j]-s[(i+1)%L][(j+1)%L])+cos(s[i][j]-s[(i-1+L)%L][(j+1)%L])+cos(s[i][j]-s[(i-1+L)%L][(j-1+L)%L])+cos(s[i][j]-s[(i+2)%L][j])+cos(s[i][j]-s[(i-2+L)%L][j]));
		}
	}
	else
	{
		printf("Checkpoint 2! j is neither odd nor even! Attention!");
	}

	dE=sum-sum_tmp;													/*Attention!*/

	if(dE<=0)
	{
		sum_M[0]+=cos(s[i][j])-cos(s[i][j]-agl_rdm);					/*Accept&Cal*/
		sum_M[1]+=sin(s[i][j])-sin(s[i][j]-agl_rdm);
		sum_Mag=sqrt(sum_M[0]*sum_M[0]+sum_M[1]*sum_M[1]);
		sum_E+=dE;
	}
	else if(((double)rand()/RAND_MAX)<exp((-1.0)*dE/T))
	{
		sum_M[0]+=cos(s[i][j])-cos(s[i][j]-agl_rdm);					/*Accept&Cal*/
		sum_M[1]+=sin(s[i][j])-sin(s[i][j]-agl_rdm);
		sum_Mag=sqrt(sum_M[0]*sum_M[0]+sum_M[1]*sum_M[1]);
		sum_E+=dE;
										
	}
	else																
	{
		s[i][j]=s[i][j]-agl_rdm;										/*Reject the change*/
	}
}



void Mag()
{
	sum_M[0]=1.0*L*L;
	sum_M[1]=0.0;
}

void Energy(double R)
{
	sum_E=(3.0+R*6.0)*L*L/2.0;
}