#pragma once
#include "Prerequisites.h"

// Apunte
/*
// Clase base para representar un producto.
class 
Product {
public:
  virtual 
  void operacion() = 0; // M�todo abstracto que representa una operaci�n en el producto.
};
// Interfaz abstracta para la creaci�n de productos.
class 
Factory {
public:
  virtual 
  Product* crearProducto() = 0; // M�todo abstracto para crear un producto.
};
 //Implementaci�n concreta de la clase Product.
class 
ConcreteProduct : public Product {
public:
  void 
  operacion() override {
    cout << "Ac� se realiza una operaci�n" << endl;
  }
};

// Implementaci�n concreta de la interfaz Factory.

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
// Clase base que representa un veh�culo.
class 
Vehiculo {
public:
  virtual 
  void Descripcion() {
    cout << "Soy un veh�culo" << endl;
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

 // Interfaz abstracta para la creaci�n de veh�culos.
 //Paso 3.

class
FabricaVehiculos {
public:
  virtual
  Vehiculo* crearVehiculo() = 0; // M�todo abstracto para crear un veh�culo.
};

 //Implementaci�n concreta de la interfaz FabricaVehiculos para la creaci�n de coches.
 //Paso 4.
class 
concreteFabricaCoches : public FabricaVehiculos {
public:
  Vehiculo* crearVehiculo() override {
    return new concreteCoche(); // Crea una instancia de concreteCoche.
  }
};
 //Implementaci�n concreta de la interfaz FabricaVehiculos para la creaci�n de bicicletas.
 // Paso 4.
class 
concreteFabricaBicicletas : public FabricaVehiculos {
public:
  Vehiculo* crearVehiculo() override {
    return new concreteBicicleta(); // Crea una instancia de concreteBicicleta.
  }
};*/
