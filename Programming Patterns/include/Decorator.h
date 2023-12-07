#pragma once
#include "Prerequisites.h"
//APUNTE
/*
// Interfaz base para los componentes.
class 
Component {
public:
  virtual 
  void 
  operacion() = 0; // Método virtual puro para realizar la operación del componente.
};

// Clase concreta que implementa la interfaz Component.
class 
ConcreteComponent : public Component {
public:
  void 
  operacion() override {
    cout << "Operacion de componentes concreta" << endl;
  }
};

// Decorador base que también implementa la interfaz Component.
class 
 Decorator : public Component {
public:
  Decorator(Component* _component)
    : m_component(_component) {}

  void 
  operacion() override {
    m_component->operacion(); // Llama a la operación del componente base.
  }

private:
  Component*
  m_component; // Componente a decorar.
};

// Decorador concreto A que extiende Decorator.
class 
 ConcreteDecoratorA : public Decorator {
public:
  ConcreteDecoratorA(Component* _component)
    : Decorator(_component) {}

  void 
  operacion() override {
    Decorator::operacion(); // Llama a la operación del componente base.
    cout << "Operacion del operador A" << endl;
  }
};

// Decorador concreto B que extiende Decorator.
class 
ConcreteDecoratorB : public Decorator {
public:
  ConcreteDecoratorB(Component* _component)
    : Decorator(_component) {}

  void 
  operacion() override {
    Decorator::operacion(); // Llama a la operación del componente base.
    cout << "Operacion del operador B" << endl;
  }
};*/

// Actividad
/*
// Clase base que representa una cafetería.
class
Cafeteria {
public:
  void 
  prepararCafe() {
    cout << "Cafe preparado" << endl;
  }
};

// Interfaz que actúa como decorador para la cafetería.
class 
Condimento {
public:
  virtual 
  void decorar() = 0; // Método virtual puro para decorar la cafetería.
};

// Decorador Leche que extiende Condimento.
class 
 Leche : public Condimento {
public:
  Leche(Cafeteria* _cafeteria)
    : cafeteria(_cafeteria) {}

  void 
  decorar() override {
    cafeteria->prepararCafe(); // Llama al método de la cafetería base.
    cout << "Leche agregada" << endl;
  }

private:
  Cafeteria* 
  cafeteria; // Cafetería a decorar.
};

// Decorador Azucar que extiende Condimento.
class 
Azucar : public Condimento {
public:
  Azucar(Cafeteria* _cafeteria)
    : cafeteria(_cafeteria) {}

  void 
  decorar() override {
    cafeteria->prepararCafe(); // Llama al método de la cafetería base.
    cout << "Azucar agregado" << endl;
  }

private:
  Cafeteria* 
  cafeteria; // Cafetería a decorar.
};*/
