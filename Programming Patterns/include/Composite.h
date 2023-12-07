#pragma once
#include "Prerequisites.h"

//Apunte
 /*
// Clase abstracta que representa un Componente2
class 
Component2 {
public:
  virtual 
  void operacion() = 0; // Método virtual puro para la operación
};

// Clase hoja que hereda de Componente2
class 
 Leaf : public Component2 {
  void 
  operacion() override {
    cout << "Operación en hoja" << endl; // Implementación de la operación en la hoja
  }
};

// Clase composite que hereda de Componente2
class 
Composite : public Component2 {
public:
  void 
  operacion() override {
    cout << "Operación en composite. Contiene: "
      << m_leafs.size() << " hojas." << endl; // Implementación de la operación en el composite

    for (auto hoja : m_leafs) {
      hoja->operacion(); // Llama a la operación en cada hoja contenida en el composite
    }
  }

  void 
  addLeaf(Component2* _leaf) {
    m_leafs.push_back(_leaf); // Agrega una hoja al composite
  }

private:
  vector<Component2*> m_leafs; // Almacena las hojas contenidas en el composite
};*/

//Actividad
/*
// Clase base para representar un elemento
class 
FileSystemElement {
public:
  virtual 
  void DisplayInfo() = 0; // Método virtual puro para mostrar información del sistema
};

// Clase hoja que hereda de FileSystemElement
class 
File : public FileSystemElement {
  void 
  DisplayInfo() override {
    cout << "File: Hello, I'm a file :D" << endl; // Implementación de la operación en la hoja
  }
};

// Clase hoja que hereda de FileSystemElement
class 
Folder : public FileSystemElement {
  void
  DisplayInfo() override {
    cout << "Folder: Hi there, I'm a folder >:D" << endl; // Implementación de la operación en la hoja
  }
};

// Clase composite que hereda de FileSystemElement
class 
FileSystemComposite : public FileSystemElement {
public:
  void
  DisplayInfo() override {
    cout << "Composite: Performing operation. Contains: "
      << m_elements.size() << " elements." << endl; // Implementación de la operación en el composite

    for (auto element : m_elements) {
      element->DisplayInfo(); // Llama a la operación en cada elemento contenido en el composite
    }
  }

  void 
  AddElement(FileSystemElement* _element) {
    m_elements.push_back(_element); // Agrega un elemento al composite
  }

private:
  vector<FileSystemElement*> m_elements; // Almacena los elementos contenidos en el composite
};*/