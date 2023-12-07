#pragma once
#include "Prerequisites.h"
//Apunte
/*
class 
interfazVieja {
public:
  // Método antiguo que se quiere reemplazar.
  virtual 
  void OldMethod() {
    cout << "Metodo viejo llamado" << endl;
  }
};

// Objetivo
class
interfazNueva {
public:
  // Nuevo método que se quiere utilizar.
  virtual 
  void NewMethod() {
    cout << "Metodo nuevo llamado" << endl;
  }
};

class 
adapter : public interfazNueva {
public:
  // Constructor que toma una instancia de la interfaz vieja.
  adapter(interfazVieja* _vieja) : m_InterfazVieja(_vieja) {}

  // Implementación del nuevo método utilizando la interfaz vieja.
  void 
  NewMethod() override {
    cout << "Adaptador llamado al metodo nuevo" << endl;
    m_InterfazVieja->OldMethod();
  }

  interfazVieja* m_InterfazVieja; // Instancia de la interfaz vieja.
};*/
// Actividad
/*
//Circulo
class 
Circulo {
public:
  // Método para dibujar un círculo.
  virtual 
  void dibujarCirculo() {
    cout << "Dibujando Circulo " << endl;
  }
};

//Cuadrado
class 
Cuadrado {
public:
  // Método para dibujar un cuadrado.
  virtual 
  void dibujarCuadrado() {
    cout << "Dibujando cuadrado " << endl;
  }
};

//Dibujable
class 
Dibujable {
public:
  // Método abstracto para dibujar cualquier figura.
  virtual 
  void dibujar() = 0;
};

//Adaptador circulo
class 
AdaptadorCirculo : public Dibujable {
public:
  // Constructor que toma una instancia de la clase Circulo.
  AdaptadorCirculo(Circulo* _circulo) : m_Circulo(_circulo) {}

  // Implementación del método abstracto para dibujar utilizando la clase Circulo.
  void 
  dibujar() override {
    cout << "Adaptador llamado a dibujar circulo" << endl;
    m_Circulo->dibujarCirculo();
  }

private:
  Circulo* m_Circulo; // Instancia de la clase Circulo.
};

//Adaptador Cuadrado
class 
AdaptadorCuadrado : public Dibujable {
public:
  // Constructor que toma una instancia de la clase Cuadrado.
  AdaptadorCuadrado(Cuadrado* cuadrado) : m_Cuadrado(cuadrado) {}

  // Implementación del método abstracto para dibujar utilizando la clase Cuadrado.
  void 
  dibujar() override {
    cout << "Adaptador llamado a dibujar cuadrado" << endl;
    m_Cuadrado->dibujarCuadrado();
  }

private:
  Cuadrado* m_Cuadrado; // Instancia de la clase Cuadrado.
};*/
