#ifndef ECOP11A_H
#define ECOP11A_H

#define PI 3.14159265358979323846

#ifdef __cplusplus
extern "C" {
#endif

// Declarações das funções de cálculo de volume
float cubo(float aresta);
float paralelepipedo(float largura, float profundidade, float altura);
float esfera(float raio);
float cilindro(float raio, float altura);
float piramide(float largura, float profundidade, float altura);

#ifdef __cplusplus
}
#endif

#endif /* ECOP11A_H */