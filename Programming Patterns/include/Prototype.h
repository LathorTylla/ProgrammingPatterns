#pragma once
#include "Prerequisites.h"
//Apunte
/*
// Clase abstracta que define la interfaz de un prototipo.
class 
Prototype
{
public:
  virtual 
  Prototype* clone() = 0; // Método para clonar el prototipo.
  virtual 
  void configurar(string _value) = 0; // Método para configurar el prototipo.
  virtual 
  void print() = 0; // Método para imprimir información del prototipo.
};

// Clase concreta que implementa la interfaz Prototype.
class 
PrototipoConcreto : public Prototype
{
public:
  // Implementación del método para clonar el prototipo.
  Prototype* clone() override {
    PrototipoConcreto* copy = new PrototipoConcreto();
    copy->configurar(m_value);
    return copy;
  }

  // Implementación del método para configurar el prototipo.
  void 
  configurar(string _value) override {
    m_value = _value;
  }

  // Implementación del método para imprimir información del prototipo.
  void
  print() override {
    cout << "value: " << m_value << endl;
  }

private:
  string 
  m_value; // Valor del prototipo.
};*/

//Actividad
/*
// Clase abstracta que define la interfaz de un prototipo de documento.
class 
DocumentoPrototype {
public:
  virtual 
  DocumentoPrototype* clonar() = 0; // Método para clonar el documento.
  virtual 
  void 
  configurar(string _contenido) = 0; // Método para configurar el contenido del documento.
  virtual 
  void 
  mostrarContenido() = 0; // Método para mostrar el contenido del documento.
};

// Clase concreta que implementa la interfaz DocumentoPrototype para documentos de texto.
class 
DocumentoTexto : public DocumentoPrototype {
public:
  // Implementación del método para clonar el documento.
  DocumentoPrototype* clonar() override {
    DocumentoTexto* copia = new DocumentoTexto();
    copia->configurar(m_contenido);
    return copia;
  }

  // Implementación del método para configurar el contenido del documento.
  void 
  configurar(string _contenido) override {
    m_contenido = _contenido;
  }

  // Implementación del método para mostrar el contenido del documento.
  void 
  mostrarContenido() override {
    cout << "Contenido del Documento de Texto: " << m_contenido << endl;
  }

private:
  string 
  m_contenido; // Contenido del documento de texto.
};

// Clase concreta que implementa la interfaz DocumentoPrototype para documentos de imagen.
class 
 DocumentoImagen : public DocumentoPrototype {
public:
  // Implementación del método para clonar el documento.
  DocumentoPrototype* clonar() override {
    DocumentoImagen* copia = new DocumentoImagen();
    copia->configurar(m_contenido);
    return copia;
  }

  // Implementación del método para configurar el contenido del documento.
  void 
  configurar(string _contenido) override {
    m_contenido = _contenido;
  }

  // Implementación del método para mostrar el contenido del documento.
  void 
  mostrarContenido() override {
    cout << "Contenido del Documento de Imagen: " << m_contenido << endl;
  }

private:
  string 
  m_contenido; // Contenido del documento de imagen.
};*/
