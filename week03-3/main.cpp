#include<GL/glut.h>//�ϥ�GLUT�~��
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);//�M��
    glutSolidTeapot(0.3);//��߯���
    glutSwapBuffers();//�洫�⭿��buffers
}
int main(int argc,char**argv)//�H�e�Oint main()
{
    glutInit(&argc,argv);//GLUT��l��
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);//��ܼҦ�
    glutCreateWindow("08160723�H�ᨥ");//�}��
    glutDisplayFunc(display);//���@�U�n��ܪ��禡
    glutMainLoop();//�D�n�j��
}
