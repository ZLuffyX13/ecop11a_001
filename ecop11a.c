#include "ecop11a.h"
#include <math.h>


float cubo(float aresta) {
    return aresta * aresta * aresta;
}

float paralelepipedo(float largura, float profundidade, float altura) {
    return largura * profundidade * altura;
}

float esfera(float raio) {
    return (4.0f / 3.0f) * PI * raio * raio * raio;
}

float cilindro(float raio, float altura) {
    return PI * raio * raio * altura;
}

float piramide(float largura, float profundidade, float altura) {
    return (largura * profundidade * altura) / 3.0f;
}


