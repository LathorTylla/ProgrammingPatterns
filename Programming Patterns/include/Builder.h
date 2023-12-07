#pragma once
#include "Prerequisites.h"

// Apunte
/*
   Clase que representa un producto compuesto por partes.
class 
BProduct {
public:
  // Agrega una parte al producto.
  void 
  agregarParte(const string& _parte) {
    m_partes.push_back(_parte);
  }

  // Muestra las partes del producto.
  void 
  print() {
    cout << "Partes del producto: ";
    for (int i = 0; i < m_partes.size(); ++i) {
      cout << m_partes[i] << " ";
    }
  }

private:
  vector<string> m_partes; // Almacena las partes del producto.
};

 // Interfaz abstracta que define los pasos para construir un producto.
class Builder {
public:
  virtual 
  void buildParteA() = 0;
  virtual 
  void buildParteB() = 0;
  virtual 
  BProduct* obtenerProducto() = 0;
};

 //Implementaci�n concreta de la interfaz Builder.

class 
BuilderConcreto : public Builder {
public:
  BuilderConcreto() {
    m_producto = new BProduct(); // Inicializa el producto.
  }

  // Implementaci�n de construcci�n de Parte A.
  void 
  buildParteA() {
    m_producto->agregarParte("Parte A");
  }

  // Implementaci�n de construcci�n de Parte B.
  void 
  buildParteB() {
    m_producto->agregarParte("Parte B");
  }

  // Obtiene el producto construido.
  BProduct* obtenerProducto() override {
    return m_producto;
  }

private:
  BProduct* m_producto; // Almacena el producto en construcci�n.
};

  // Clase que dirige el proceso de construcci�n de un producto utilizando un Builder.
class 
Director {
public:
  Director(Builder* _builder) : m_builder(_builder) { }

  // Inicia la construcci�n del producto utilizando el Builder proporcionado.
  void build() {
    m_builder->buildParteA();
    m_builder->buildParteB();
  }

private:
  Builder* m_builder; // Almacena el Builder utilizado para la construcci�n.
};
*/
// Actividad
/*
// Clase base para representar una pizza compuesta por ingredientes.
class 
Pizza {
public: // Agrega un ingrediente a la pizza.
  void 
  agregarIngrediente(const string& ingrediente) {
    ingredientes.push_back(ingrediente);
  }

 // Muestra los ingredientes de la pizza.
  void 
  mostrar() {
    cout << "Ingredientes de la pizza: ";
    for (int i = 0; i < ingredientes.size(); ++i) {
      cout << ingredientes[i];
      if (i < ingredientes.size() - 1) {
        cout << ", ";
      }
    }
    cout << endl;
  }

private:
  vector<string> ingredientes; // Almacena los ingredientes de la pizza.
};

 //Interfaz abstracta que define los pasos para construir diferentes tipos de pizzas.
class ConstructorPizza {
public:
  virtual 
  void 
  construirMasa() = 0;
  virtual 
  void 
  construirSalsa() = 0;
  virtual 
  void 
  construirIngredientes() = 0;
  virtual 
  Pizza* obtenerPizzaHawaiana() = 0;
  virtual 
  Pizza* obtenerPizzaVegetariana() = 0;
};
 //Implementaci�n concreta de la interfaz ConstructorPizza para cocinar pizzas.

class CocineroPizza : public ConstructorPizza {
public:
  CocineroPizza() {
    pizzaHawaiana = new Pizza(); // Inicializa la pizza hawaiana.
    pizzaVegetariana = new Pizza(); // Inicializa la pizza vegetariana.
  }

  // Implementaci�n de construcci�n de la masa de las pizzas.
  void 
  construirMasa() override {
    pizzaHawaiana->agregarIngrediente("Masa Tradicional");
    pizzaVegetariana->agregarIngrediente("Masa Integral");
  }

  // Implementaci�n de construcci�n de la salsa de las pizzas.
  void
  construirSalsa() override {
    pizzaHawaiana->agregarIngrediente("Salsa de Jitomate");
    pizzaVegetariana->agregarIngrediente("Salsa Pesto");
  }

  // Implementaci�n de construcci�n de los ingredientes de las pizzas.
  void 
  construirIngredientes() override {
    pizzaHawaiana->agregarIngrediente("Queso, Jam�n & Pi�a");
    pizzaVegetariana->agregarIngrediente("Queso, Champi�ones & Pimiento");
  }

  // Obtiene la pizza hawaiana construida.
  Pizza* obtenerPizzaHawaiana() override {
    return pizzaHawaiana;
  }

  // Obtiene la pizza vegetariana construida.
  Pizza* obtenerPizzaVegetariana() override {
    return pizzaVegetariana;
  }

private:
  Pizza* pizzaHawaiana; // Almacena la pizza hawaiana en construcci�n.
  Pizza* pizzaVegetariana; // Almacena la pizza vegetariana en construcci�n.
};
 //Clase que dirige el proceso de construcci�n de pizzas utilizando un ConstructorPizza.
class 
ChefPizza {
public:
  ChefPizza(ConstructorPizza* cocinero) : constructor(cocinero) { }

  // Inicia el proceso de construcci�n de las pizzas.
  void 
  cocinar() {
    constructor->construirMasa();
    constructor->construirSalsa();
    constructor->construirIngredientes();
  }

private:
  ConstructorPizza* constructor; // Almacena el ConstructorPizza utilizado para la construcci�n.
};*/
