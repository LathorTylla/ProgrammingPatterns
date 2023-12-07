//#include "Singleton.h"
#include <iostream>
#include "RegistroActividad.h"
#include "Factory.h"
#include "Abstract Factory.h"
#include "Prototype.h"
#include "Adapter.h"
#include "Decorator.h"
#include "Builder.h"
#include "Composite.h"
#include "Singleton.h"

//Singleton* Singleton::m_instance = nullptr;
//RegistroActividad* RegistroActividad::m_instance = nullptr;

int main() {
  //SINGLETON
  /*Singleton* SingleMan = Singleton::getInstance();
  SingleMan->setValue(42);

  Singleton* SingleMan2 = Singleton::getInstance();
  cout << "Value: " << SingleMan2->getValue() << endl;
  */
  //Actividad Singleton
  /*
  RegistroActividad* Registro = RegistroActividad::getInstance();
  //Listado de las actividades
  Registro->agregarActividades("Actividad1");
  Registro->agregarActividades("Actividad2");
  Registro->agregarActividades("Actividad3");


  RegistroActividad* Registro2 = RegistroActividad::getInstance();
  //Mostrar en pantalla las actividades
  Registro2->mostrarActividad();
  
  */
  //Factory
  /*
  Factory* fabrica = new ConcreteFactory();
  Product* producto = fabrica->crearProducto();

  producto->operacion();

  // Liberar memoria
  delete fabrica;
  delete producto;*/
  //Actividad FACTORY
  /*
  FabricaVehiculos* fabricaCoches = new concreteFabricaCoches();
  Vehiculo* coche = fabricaCoches->crearVehiculos();

  FabricaVehiculos* fabricaBicicletas = new concreteFabricaBicicletas();
  Vehiculo* bicicleta = fabricaBicicletas->crearVehiculos();

  coche->Descripcion();
  bicicleta->Descripcion();

  delete fabricaCoches;
  delete fabricaBicicletas;
  */
  //Abstract Factory
  /*
  AbstractFactory* fabrica = new ConcreteAbsFactory();

  // Crear productos
  ProductA* productoA = fabrica->crearProductoA();
  ProductB* productoB = fabrica->crearProductoB();

  // Realizar operaciones en los productos
  productoA->operationA();
  productoB->operationB();

  // Liberar memoria
  delete fabrica;
  delete productoA;
  delete productoB;*/
  //Actividad AbstractFactory
  /*
  FactoriaMueblesRusticos* fabrica = new FactoriaMueblesRusticos;
  Silla* sillaRustica = fabrica->HacerSilla();
  Mesa* MesaRustica = fabrica->HacerMesa();

  cout << " " << endl;
  */
  //Prototype
  /*
  Prototype* prototype = new PrototipoConcreto();
  prototype->configurar("Ejemplo");

  //Clonar prototipo

  Prototype* copia = prototype->clone();
  prototype->print();
  copia->print();

  delete prototype;
  delete copia;
  */  
 //ActividadPrototype
  /*  DocumentoPrototype* prototipoTexto = new DocumentoTexto();
  prototipoTexto->configurar("Texto");

  DocumentoPrototype* prototipoImagen = new DocumentoImagen();
  prototipoImagen->configurar("Imagen.PNG");

  DocumentoPrototype* copiaTexto = prototipoTexto->clonar();
  DocumentoPrototype* copiaImagen = prototipoImagen->clonar();

  copiaTexto->configurar("Texto Modificado");
  copiaImagen->configurar("ImagenModificada");

  prototipoImagen->configurar("Imagen. PNG Original");
  prototipoTexto->configurar("Texto Original");

  prototipoTexto->clonar()->mostrarContenido();
  copiaTexto->mostrarContenido();

  prototipoImagen->clonar()->mostrarContenido();
  copiaImagen->mostrarContenido();

  delete prototipoTexto;
  delete prototipoImagen;
  delete copiaTexto;
  delete copiaImagen;
  */
  //Adapter
  /*
  interfazVieja* ObjetoViejo = new interfazVieja();
  interfazNueva* ObjetoNuevo = new adapter(ObjetoViejo);

  ObjetoNuevo->NewMethod();

  delete ObjetoNuevo;
  delete ObjetoViejo;
  */
  //Actividad Adapter
  /*
  Circulo* circulo = new Circulo();
  Cuadrado* cuadrado = new Cuadrado();

  Dibujable* adaptadorCirculo = new AdaptadorCirculo(circulo);
  Dibujable* adaptadorCuadrado = new AdaptadorCuadrado(cuadrado);

  adaptadorCirculo->dibujar();
  adaptadorCuadrado->dibujar();

  delete circulo;
  delete cuadrado;
  delete adaptadorCirculo;
  delete adaptadorCuadrado;
  */
  //Decorator
  /*
  ConcreteComponent* Objeto = new ConcreteComponent();
  ConcreteDecoratorA* decoratorA = new ConcreteDecoratorA(Objeto);
  ConcreteDecoratorB* decoratorB = new ConcreteDecoratorB(decoratorA);

  Objeto->operacion();
  decoratorA->operacion();
  decoratorB->operacion();
  */
  // Actividad Decorator
  /*
  Cafeteria* cafeteria = new Cafeteria();
  Leche* cafeConLeche = new Leche(cafeteria);
  Azucar* cafeConAzucar = new Azucar(cafeteria);

  cafeteria->prepararCafe();
  cafeConLeche->decorar();
  cafeConAzucar->decorar();

  delete cafeteria;
  delete cafeConLeche;
  delete cafeConAzucar;
  */
  //Builder
  /*
  Builder* constructor = new BuilderConcreto();
  Director director(constructor);

  director.build();

  BProduct* producto = constructor->obtenerProducto();
  producto->print();

  delete producto;
  delete constructor;*/
  //Actividad Builder
  /*
  ConstructorPizza* cocineroPizza = new CocineroPizza();
  ChefPizza chef(cocineroPizza);

  chef.cocinar();

  Pizza* pizzaHawaiana = cocineroPizza->obtenerPizzaHawaiana();
  Pizza* pizzaVegetariana = cocineroPizza->obtenerPizzaVegetariana();

  pizzaHawaiana->mostrar();
  pizzaVegetariana->mostrar();

  delete cocineroPizza;
  delete pizzaHawaiana;
  delete pizzaVegetariana; */
  //Composite
  /*
  Leaf* hoja1 = new Leaf();
  Leaf* hoja2 = new Leaf();
  Composite* composite = new Composite();

  composite->addLeaf(hoja1);
  composite->addLeaf(hoja2);

  composite->operacion();

  delete hoja1;
  delete hoja2;
  delete composite;
  */
  //Actividad Composite
  /*
  // Crear un sistema de archivos
  FileSystemElement* element1 = new File();
  FileSystemElement* element2 = new File();
  FileSystemElement* element3 = new Folder();

  FileSystemComposite* composite = new FileSystemComposite();

  composite->AddElement(element1);
  composite->AddElement(element2);
  composite->AddElement(element3);

  composite->DisplayInfo();

  // Liberar memoria
  delete element1;
  delete element2;
  delete element3;
  delete composite;
*/
  return 0;
}