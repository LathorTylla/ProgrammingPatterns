#pragma once
#include "Prerequisites.h"

// Apunte
/*
// Clase abstracta para representar un producto A.
class
ProductA {
public:
  virtual 
  void operationA() = 0; // M�todo virtual puro para realizar operaci�n A.
};

// Clase abstracta para representar un producto B.
class 
ProductB {
public:
  virtual 
  void operationB() = 0; // M�todo virtual puro para realizar operaci�n B.
};

// Interfaz abstracta para la f�brica de productos.
class 
 AbstractFactory {
public:
  virtual 
  ProductA* crearProductoA() = 0; // M�todo virtual puro para crear producto A.
  virtual 
  ProductB* crearProductoB() = 0; // M�todo virtual puro para crear producto B.
};

// Clase concreta que implementa ProductA.
class 
productA1 : public ProductA {
public:
  void 
  operationA() override {
    cout << "Operaci�n A en ProductoA1" << endl;
  }
};

// Clase concreta que implementa ProductB.
class 
productB1 : public ProductB {
public:
  void
  operationB() override {
    cout << "Operaci�n B en ProductoB1" << endl;
  }
};

// Clase concreta que implementa AbstractFactory para crear productos A y B espec�ficos.
class
ConcreteAbsFactory : public AbstractFactory {
public:
  ProductA* crearProductoA() override {
    return new productA1(); // Crea una instancia de productA1.
  }
  ProductB* crearProductoB() override {
    return new productB1(); // Crea una instancia de productB1.
  }
};*/

// Actividad
/*
// Clase abstracta para representar un mueble gen�rico.
class 
Mueble {
public:
  virtual 
  void descripcion() = 0; // M�todo virtual puro para describir el mueble.
  virtual 
  void color() = 0; // M�todo virtual puro para especificar el color del mueble.
};

// Clase concreta que hereda de Mueble y representa una silla.
class 
Silla : public Mueble {
public:
  void 
  descripcion() override {
    cout << "Esta silla es de madera" << endl;
  }

  void 
  color() override {
    cout << "Negro" << endl;
  }
};

// Clase concreta que hereda de Mueble y representa una mesa.
class 
 Mesa : public Mueble {
public:
  void 
  descripcion() override {
    cout << "Esta mesa es de madera" << endl;
  }

  void 
  color() override {
    cout << "Blanco" << endl;
  }
};

// Interfaz abstracta para la f�brica de muebles.
class 
FactoriaMuebles {
public:
  virtual 
  Silla* HacerSilla() = 0; // M�todo virtual puro para fabricar una silla.
  virtual 
  Mesa* HacerMesa() = 0; // M�todo virtual puro para fabricar una mesa.
};

// Clase concreta que implementa FactoriaMuebles para crear muebles r�sticos.
class 
FactoriaMueblesRusticos : public FactoriaMuebles {
public:
  Silla* HacerSilla() override {
    return new Silla; // Crea una instancia de Silla.
  }

  Mesa* HacerMesa() override {
    return new Mesa; // Crea una instancia de Mesa.
  }
};

// Clase concreta que implementa FactoriaMuebles para crear muebles modernos.
class 
FactoriaMueblesModernos : public FactoriaMuebles {
public:
  Silla* HacerSilla() override {
    return new Silla; // Crea una instancia de Silla.
  }

  Mesa* HacerMesa() override {
    return new Mesa; // Crea una instancia de Mesa.
  }
};*/
