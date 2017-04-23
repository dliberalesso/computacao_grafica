//
// Created by dliberalesso on 19/04/17.
//

#include <GL/glut.h>

// Função que desenha figura 1
void figura1(float x, float y) {
    // Guarda a matriz de transformação corrente na pilha
    glPushMatrix();

    // Aplica uma translação
    glTranslatef(x, y, 0);

    glBegin(GL_TRIANGLES);
    glVertex2d(-7.5, -105);
    glVertex2d(22.5, -105);
    glVertex2d(22.5, -75);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2d(-1.5, -75);
    glVertex2d(28.5, -75);
    glVertex2d(28.5, -15);
    glVertex2d(-1.5, -15);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2d(-1.5, -15);
    glVertex2d(37.5, -15);
    glVertex2d(37.5, -54);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2d(-1.5, -15);
    glVertex2d(-31.5, -15);
    glVertex2d(-1.5, -45);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2d(-37.5, -15);
    glVertex2d(16.5, -15);
    glVertex2d(16.5, 45);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2d(16.5, 45);
    glVertex2d(-13.5, 45);
    glVertex2d(-13.5, 105);
    glVertex2d(16.5, 105);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2d(-31.5, 105);
    glVertex2d(37.5, 105);
    glVertex2d(37.5, 15);
    glEnd();

    // Restaura a matriz de transformação corrente da pilha
    glPopMatrix();
}

// Função que desenha figura 2
void figura2(float x, float y) {
    // Guarda a matriz de transformação corrente na pilha
    glPushMatrix();

    // Aplica uma translação
    glTranslatef(x, y, 0);

    glBegin(GL_TRIANGLES);
    glVertex2d(-74, -82.65);
    glVertex2d(-29.3, -82.65);
    glVertex2d(-51.65, -105);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2d(-51.65, -82.65);
    glVertex2d(-6.95, -37.95);
    glVertex2d(37.755, -82.65);
    glEnd();

    glBegin(GL_QUAD_STRIP);
    glVertex2d(-6.95, -105);
    glVertex2d(51.65, -105);
    glVertex2d(-6.95, -82.65);
    glVertex2d(74, -82.65);
    glVertex2d(51.65, -23.65);
    glVertex2d(74, -46);
    glVertex2d(51.65, -5.65);
    glVertex2d(74, -28);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2d(74, -1.3);
    glVertex2d(29.3, -1.3);
    glVertex2d(51.65, -23.65);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2d(74, -1.3);
    glVertex2d(29.3, -1.3);
    glVertex2d(51.65, 21.5);
    glEnd();

    // Restaura a matriz de transformação corrente da pilha
    glPopMatrix();
}

// Função que desenha figura 3
void figura3(float x, float y) {
    // Guarda a matriz de transformação corrente na pilha
    glPushMatrix();

    // Aplica uma translação
    glTranslatef(x, y, 0);

    glBegin(GL_QUAD_STRIP);
    glVertex2d(-45.9, -105);
    glVertex2d(-15.3, -105);
    glVertex2d(-45.9, -13.2);
    glVertex2d(-15.3, -13.2);
    glVertex2d(-45.9, -13.2);
    glVertex2d(-15.3, -43.8);
    glVertex2d(45.9, -13.2);
    glVertex2d(45.9, -43.8);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2d(-45.9, -105);
    glVertex2d(41.3, -105);
    glVertex2d(-2.295, -61.4);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2d(45.9, -13.2);
    glVertex2d(45.9, -100.4);
    glVertex2d(2.295, -56.8);
    glEnd();

    // Restaura a matriz de transformação corrente da pilha
    glPopMatrix();
}

// Função que desenha figura 4
void figura4(float x, float y) {
    // Guarda a matriz de transformação corrente na pilha
    glPushMatrix();

    // Aplica uma translação
    glTranslatef(x, y, 0);

    glBegin(GL_QUADS);
    glVertex2d(-32.7, -105);
    glVertex2d(32.7, -105);
    glVertex2d(32.7, -39.6);
    glVertex2d(-32.7, -39.6);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2d(-57, -39.6);
    glVertex2d(57, -39.6);
    glVertex2d(0, 9);
    glEnd();

    // Restaura a matriz de transformação corrente da pilha
    glPopMatrix();
}

// Função que desenha figura 5
void figura5(float x, float y) {
    // Guarda a matriz de transformação corrente na pilha
    glPushMatrix();

    // Aplica uma translação
    glTranslatef(x, y, 0);

    glBegin(GL_QUAD_STRIP);
    glVertex2d(-72.3, -105);
    glVertex2d(-51.6, -84.3);
    glVertex2d(37.9, -105);
    glVertex2d(37.9, -84.3);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2d(-6.8, -84.3);
    glVertex2d(37.9, -84.3);
    glVertex2d(37.9, -70.6);
    glVertex2d(-6.8, -70.6);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2d(-6.8, -70.6);
    glVertex2d(72.3, -70.6);
    glVertex2d(-6.8, 1.7);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2d(-6.8, 12);
    glVertex2d(24.2, 12);
    glVertex2d(24.2, -30);
    glVertex2d(-6.8, -30);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2d(-6.8, 1.7);
    glVertex2d(-6.8, -49.9);
    glVertex2d(-51.6, -49.9);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2d(-51.6, -49.9);
    glVertex2d(-17.2, -49.9);
    glVertex2d(-17.2, -84.3);
    glVertex2d(-51.6, -84.3);
    glEnd();

    // Restaura a matriz de transformação corrente da pilha
    glPopMatrix();
}

// Função que desenha figura 6
void figura6(float x, float y) {
    // Guarda a matriz de transformação corrente na pilha
    glPushMatrix();

    // Aplica uma translação
    glTranslatef(x, y, 0);

    glBegin(GL_QUAD_STRIP);
    glVertex2d(-53.5, -105);
    glVertex2d(-26.75, -105);
    glVertex2d(-53.5, -51.5);
    glVertex2d(-26.75, -51.5);
    glVertex2d(-26.75, -78.25);
    glVertex2d(-26.75, -51.5);
    glVertex2d(26.75, -78.25);
    glVertex2d(26.75, -51.5);
    glVertex2d(0, -105);
    glVertex2d(0, -78.25);
    glVertex2d(53.5, -105);
    glVertex2d(53.5, -78.25);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2d(-53.5, -51.5);
    glVertex2d(26.75, -51.5);
    glVertex2d(-13.375, -10.5);
    glEnd();

    // Restaura a matriz de transformação corrente da pilha
    glPopMatrix();
}

// Função que desenha figura 7
void figura7(float x, float y) {
    // Guarda a matriz de transformação corrente na pilha
    glPushMatrix();

    // Aplica uma translação
    glTranslatef(x, y, 0);

    glBegin(GL_QUADS);
    glVertex2d(-65.4, -105);
    glVertex2d(65.4, -105);
    glVertex2d(65.4, -56.8);
    glVertex2d(-65.4, -56.8);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2d(-55.1, -56.8);
    glVertex2d(-24.1, -56.8);
    glVertex2d(-24.1, -25.8);
    glVertex2d(-55.1, -25.8);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2d(-61.6, -25.8);
    glVertex2d(-17.6, -25.8);
    glVertex2d(-39.6, -1.7);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2d(21.4, -56.8);
    glVertex2d(65.4, -56.8);
    glVertex2d(43.4, -32.7);
    glEnd();

    // Restaura a matriz de transformação corrente da pilha
    glPopMatrix();
}

// Função que desenha figura 8
void figura8(float x, float y) {
    // Guarda a matriz de transformação corrente na pilha
    glPushMatrix();

    // Aplica uma translação
    glTranslatef(x, y, 0);

    //152 altura 121 largura
    glBegin(GL_TRIANGLES);
    glVertex2d(-60.5, 21.6);
    glVertex2d(-29.5, 21.6);
    glVertex2d(-29.5, 52.6);
    glEnd();

    glBegin(GL_QUAD_STRIP);
    glVertex2d(-29.5, 52.6);
    glVertex2d(-5.5, 28.6);
    glVertex2d(-29.5, 1.4);
    glVertex2d(-5.5, -23);
    glVertex2d(-50.25, -23);
    glVertex2d(-29.5, -47);
    glVertex2d(-29.5, -47);
    glVertex2d(-50.25, -63.75);
    glVertex2d(60.5, -47);
    glVertex2d(-60.5, -74);
    glVertex2d(18.7, -87.8);
    glVertex2d(-29.5, -105);
    glVertex2d(35.9, -105);
    glVertex2d(-29.5, -105);

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

    // Define a cor de desenho: vermelho
    glColor3f(0, 1, 0);

    // Desenha figuras
    figura1(-300, 150);
    figura2(-100, 150);
    figura3(100, 150);
    figura4(300, 150);
    figura5(-300, -150);
    figura6(-100, -150);
    figura7(100, -150);
    figura8(300, -150);

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
    gluOrtho2D(-400, 400, -300, 300);
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char *argv[]) {
    // Funcao necessaria para ambientes Linux
    glutInit(&argc, argv);

    // Define do modo de operação da GLUT
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

    // Especifica o tamanho inicial em pixels da janela GLUT
    glutInitWindowSize(800, 600);

    // Cria a janela passando como argumento o título da mesma
    glutCreateWindow("Trabalho 02 - Douglas Liberalesso");

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