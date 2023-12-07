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
  operacion() = 0; // M�todo virtual puro para realizar la operaci�n del componente.
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

// Decorador base que tambi�n implementa la interfaz Component.
class 
 Decorator : public Component {
public:
  Decorator(Component* _component)
    : m_component(_component) {}

  void 
  operacion() override {
    m_component->operacion(); // Llama a la operaci�n del componente base.
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
    Decorator::operacion(); // Llama a la operaci�n del componente base.
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
    Decorator::operacion(); // Llama a la operaci�n del componente base.
    cout << "Operacion del operador B" << endl;
  }
};*/

// Actividad
/*
// Clase base que representa una cafeter�a.
class
Cafeteria {
public:
  void 
  prepararCafe() {
    cout << "Cafe preparado" << endl;
  }
};

// Interfaz que act�a como decorador para la cafeter�a.
class 
Condimento {
public:
  virtual 
  void decorar() = 0; // M�todo virtual puro para decorar la cafeter�a.
};

// Decorador Leche que extiende Condimento.
class 
 Leche : public Condimento {
public:
  Leche(Cafeteria* _cafeteria)
    : cafeteria(_cafeteria) {}

  void 
  decorar() override {
    cafeteria->prepararCafe(); // Llama al m�todo de la cafeter�a base.
    cout << "Leche agregada" << endl;
  }

private:
  Cafeteria* 
  cafeteria; // Cafeter�a a decorar.
};

// Decorador Azucar que extiende Condimento.
class 
Azucar : public Condimento {
public:
  Azucar(Cafeteria* _cafeteria)
    : cafeteria(_cafeteria) {}

  void 
  decorar() override {
    cafeteria->prepararCafe(); // Llama al m�todo de la cafeter�a base.
    cout << "Azucar agregado" << endl;
  }

private:
  Cafeteria* 
  cafeteria; // Cafeter�a a decorar.
};*/
