#include "Prerequisites.h"

// Actividad Singleton
/*
//Clase que implementa el patrón Singleton para el registro de actividades.
class 
RegistroActividad {
public:
  // Método estático que devuelve la instancia única de RegistroActividad.
  static RegistroActividad* getInstance() {
    if (m_instance != nullptr) {
      return m_instance;
    }
    else {
      m_instance = new RegistroActividad;
    }
    return m_instance;
  }

  // Destructor por defecto.
  ~RegistroActividad() = default;

  // Permite agregar x número de actividades al registro.
  void 
  agregarActividades(string m_act) {
    m_actividades.push_back(m_act);
  }

  // Muestra x número de actividades ingresadas en el registro.
  void 
  mostrarActividad() {
    for (int i = 0; i < m_actividades.size(); i++) {
      cout << "Actividad: " << m_actividades[i] << endl;
    }
  }

private:
  vector<string> m_actividades; // Almacena las actividades en el registro.
  static RegistroActividad* m_instance; // Instancia única de la clase (patrón Singleton).
};*/
