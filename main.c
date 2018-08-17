/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Hector
 *
 * Created on 15 de agosto de 2018, 10:03 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include<math.h>

/*
 * 
 */
int main() {

  
    printf("Hola usuario!\n");
    printf("Hoy,calcularemos el area de un triangulo\n");
    printf("Inserta la base");
    float base;
    scanf("%d",&base);
    printf("Inserta la altura");
    float altura;
    scanf("%d",&altura);
    float area=base*altura/2;
    printf("El area de este triangulo es: %d",area);
    
    return 0;
}

