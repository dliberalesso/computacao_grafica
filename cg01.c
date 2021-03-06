//
// Created by dliberalesso on 19/04/17.
//

#include <GL/glut.h>
#include <math.h>

// Desenha gramado
void figura1(float translate_x, float translate_y) {
    // Guarda a matriz de transformação corrente na pilha
    glPushMatrix();

    // Aplica uma translação
    glTranslatef(translate_x, translate_y, 0);

    glBegin(GL_QUADS);
    glColor3f(0.5, 0.8, 0.4);
    glVertex2f(-300, -100);
    glColor3f(0.14, 0.33, 0.25);
    glVertex2f(-300, 100);
    glColor3f(0.14, 0.4, 0);
    glVertex2f(300, 100);
    glColor3f(0.4, 0.84, 0.38);
    glVertex2f(300, -100);
    glEnd();

    // Restaura a matriz de transformação corrente da pilha
    glPopMatrix();
}

// Desenha ceu
void figura2(float translate_x, float translate_y) {
    // Guarda a matriz de transformação corrente na pilha
    glPushMatrix();

    // Aplica uma translação
    glTranslatef(translate_x, translate_y, 0);

    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8, 0.92);
    glVertex2f(300, -200);
    glColor3f(0.34, 0.34, 0.92);
    glVertex2f(300, 200);
    glColor3f(0.34, 0.34, 0.92);
    glVertex2f(-300, 200);
    glColor3f(0.6, 0.6, 0.92);
    glVertex2f(-300, -200);
    glEnd();

    // Restaura a matriz de transformação corrente da pilha
    glPopMatrix();
}

// Desenha casa
void figura3(float translate_x, float translate_y) {
    // Guarda a matriz de transformação corrente na pilha
    glPushMatrix();

    // Aplica uma translação
    glTranslatef(translate_x, translate_y, 0);

    glColor3f(0, 0, 0.7);
    glBegin(GL_QUADS);
    glVertex2f(0, 0);
    glVertex2f(0, 194);
    glVertex2f(194, 194);
    glVertex2f(194, 0);
    glEnd();

    glColor3f(0.98, 0.8, 0.13);
    glBegin(GL_QUADS);
    glVertex2f(73, 4);
    glVertex2f(73, 151);
    glVertex2f(121, 151);
    glVertex2f(121, 4);
    glEnd();

    glColor3f(0.98, 0.3, 0.4);
    glBegin(GL_TRIANGLES);
    glVertex2f(97, 331);
    glVertex2f(-40, 194);
    glVertex2f(234, 194);
    glEnd();

    // Restaura a matriz de transformação corrente da pilha
    glPopMatrix();
}

// Desenha helice
void figura4(float translate_x, float translate_y, float angle) {
    // Guarda a matriz de transformação corrente na pilha
    glPushMatrix();

    // Aplica uma translação
    glTranslatef(translate_x, translate_y, 0);
    glRotatef(angle, 0, 0, 1);

    glColor3f(0.24, 0.9, 1);
    glBegin(GL_TRIANGLES);
    glVertex2f(0, 0);
    glVertex2f(0, -52);
    glVertex2f(61.5, -113);
    glEnd();

    // Restaura a matriz de transformação corrente da pilha
    glPopMatrix();
}

// Desenha a copa da arvore
void elipse(GLdouble x, GLdouble y, GLdouble raio) {
    int i;
    int triangulos = 200; // quantos triangulos usar

    glColor3f(0.29, 255, 0);

    GLdouble doisPI = 2.0f * 3.141592;

    glBegin(GL_TRIANGLE_FAN);
    glVertex2d(x, y); // centro do circulo
    for (i = 0; i <= triangulos; i++) {
        glVertex2d(
                x + (raio * cos(i * doisPI / triangulos)),
                y + (1.8 * raio * sin(i * doisPI / triangulos))
        );
    }
    glEnd();
}

// Desenha a arvore
void figura5(float translate_x, float translate_y) {
    // Guarda a matriz de transformação corrente na pilha
    glPushMatrix();

    // Aplica uma translação
    glTranslatef(translate_x, translate_y, 0);

    glColor3f(0.59, 0.21, 0.19);
    glBegin(GL_QUADS);
    glVertex2f(0, 0);
    glVertex2f(0, 156);
    glVertex2f(-47, 156);
    glVertex2f(-47, 0);
    glEnd();

    elipse(-23.5, 280, 73.5);

    // Restaura a matriz de transformação corrente da pilha
    glPopMatrix();
}

// Desenha o sol
void figura6(float translate_x, float translate_y) {
    int i;
    int triangulos = 200; // quantos triangulos usar

    // Guarda a matriz de transformação corrente na pilha
    glPushMatrix();

    // Aplica uma translação
    glTranslatef(translate_x, translate_y, 0);

    GLdouble doisPI = 2.0f * 3.141592;

    glBegin(GL_TRIANGLE_FAN);
    glColor3f(1, 1, 1);
    glVertex2d(0, 0); // centro do circulo
    glColor3f(1, 1, 0);
    for (i = 0; i <= triangulos; i++) {
        glVertex2d(
                0 + (75 * cos(i * doisPI / triangulos)),
                0 + (75 * sin(i * doisPI / triangulos))
        );
    }
    glEnd();

    // Restaura a matriz de transformação corrente da pilha
    glPopMatrix();
}

// Função callback de redesenho da janela de visualização
void desenha(void) {
    // Muda para o sistema de coordenadas do modelo
    glMatrixMode(GL_MODELVIEW);

    // Inicializa a matriz de transformação corrente
    glLoadIdentity();

    // Limpa a janela de visualização com a cor branca
    glClearColor(0, 0, 0, 0);
    glClear(GL_COLOR_BUFFER_BIT);

    // Desenha figuras
    figura1(0, -200); // gramado
    figura2(0, 100); // ceu
    figura3(-248, -230); // casa
    figura4(-151, 101, 0); // helice
    figura4(-151, 101, 120); // helice
    figura4(-151, 101, 240); // helice
    figura5(173, -285); // arvore
    figura6(206, 206); // sol

    //Executa os comandos OpenGL
    glFlush();
}

// Função callback chamada para gerenciar eventos de teclas
void teclado(unsigned char key, int x, int y) {
    if (key == 27)
        exit(0);
}

// Função responsável por inicializar parâmetros e variáveis
void inicializa(void) {
    // Define a janela de visualização 2D
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(-300, 300, -300, 300);
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char *argv[]) {
    // Funcao necessaria para ambientes Linux
    glutInit(&argc, argv);

    // Define do modo de operação da GLUT
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

    // Especifica o tamanho inicial em pixels da janela GLUT
    glutInitWindowSize(600, 600);

    // Cria a janela passando como argumento o título da mesma
    glutCreateWindow("Trabalho 01 - Douglas Liberalesso");

    // Registra a função callback de redesenho da janela de visualização
    glutDisplayFunc(desenha);

    // Registra a função callback para tratamento das teclas ASCII
    glutKeyboardFunc(teclado);

    // Chama a função responsável por fazer as inicializações
    inicializa();

    // Inicia o processamento e aguarda interações do usuário
    glutMainLoop();

    return 0;
}