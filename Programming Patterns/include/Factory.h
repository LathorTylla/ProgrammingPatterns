#pragma once
#include "Prerequisites.h"

// Apunte
/*
// Clase base para representar un producto.
class 
Product {
public:
  virtual 
  void operacion() = 0; // Método abstracto que representa una operación en el producto.
};
// Interfaz abstracta para la creación de productos.
class 
Factory {
public:
  virtual 
  Product* crearProducto() = 0; // Método abstracto para crear un producto.
};
 //Implementación concreta de la clase Product.
class 
ConcreteProduct : public Product {
public:
  void 
  operacion() override {
    cout << "Acá se realiza una operación" << endl;
  }
};

// Implementación concreta de la interfaz Factory.

class 
ConcreteFactory : public Factory {
public:
  Product* crearProducto() override {
    return new ConcreteProduct(); // Crea una instancia de ConcreteProduct.
  }
};
*/
// Actividad
/*
// Clase base que representa un vehículo.
class 
Vehiculo {
public:
  virtual 
  void Descripcion() {
    cout << "Soy un vehículo" << endl;
  }
};
 //Clase que hereda de Vehiculo para representar un coche.
 //Paso 2.
class 
 concreteCoche : public Vehiculo {
public:
  void 
  Descripcion() override {
    cout << "Soy un coche" << endl;
  }
};

 //Clase que hereda de Vehiculo para representar una bicicleta.
 // Paso 2.
class 
concreteBicicleta : public Vehiculo {
public:
  void
  Descripcion() override {
    cout << "Soy una bicicleta" << endl;
  }
};

 // Interfaz abstracta para la creación de vehículos.
 //Paso 3.

class
FabricaVehiculos {
public:
  virtual
  Vehiculo* crearVehiculo() = 0; // Método abstracto para crear un vehículo.
};

 //Implementación concreta de la interfaz FabricaVehiculos para la creación de coches.
 //Paso 4.
class 
concreteFabricaCoches : public FabricaVehiculos {
public:
  Vehiculo* crearVehiculo() override {
    return new concreteCoche(); // Crea una instancia de concreteCoche.
  }
};
 //Implementación concreta de la interfaz FabricaVehiculos para la creación de bicicletas.
 // Paso 4.
class 
concreteFabricaBicicletas : public FabricaVehiculos {
public:
  Vehiculo* crearVehiculo() override {
    return new concreteBicicleta(); // Crea una instancia de concreteBicicleta.
  }
};*/
