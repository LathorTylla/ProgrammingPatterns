#pragma once
//Apunte
/*
// Clase que implementa el patrón Singleton.
class Singleton {
public:
  // Constructor privado para evitar instancias directas.
  Singleton() : m_value(0) {};

  // Método estático para obtener la instancia única del Singleton.
  static Singleton* getInstance() {
    if (m_instance != nullptr) {
      return m_instance;
    }
    else {
      m_instance = new Singleton;
    }
    return m_instance;
  }

  // Destructor por defecto.
  ~Singleton() = default;

  // Método para establecer el valor del Singleton.
  void setValue(int _v) {
    m_value = _v;
  }

  // Método para obtener el valor del Singleton.
  int getValue() {
    return m_value;
  }

private:
  int m_value; // Valor del Singleton.
  static Singleton* m_instance; // Instancia única del Singleton.
};*/
