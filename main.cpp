#include <fstream>
#include <iostream>

// Definición de Tipos y Registros
typedef unsigned short ushort;
typedef char str30[31];
typedef char str10[11];
typedef char str20[21];
struct sListaCompras {
  str20 descrip;
  short cant;
};

struct sRubro {
  short codRubro;
  str20 descrip;
};
struct sArticulo {
  int codArt;
  short codRubro;
  str30 descrip;
  ushort stock;
  float preUni;
  str10 unidad;
  short porcOfertas;
};
struct sIndDescripcion {
  str20 descrip;
  int posArt;
  bool estado;
};
const int MAX_CANT = 10000;
typedef sArticulo vrArticulos[MAX_CANT];

int main() {
  // Declarar las variables utilizadas en el bloque ppal().
  // Se declaran ifstreams, registros, y variables de tipo contador para cada
  // iteración en las lecturas Abrir
  // (Articulos,IndDescripArt,Rubros,ListaCompras); // Se abren los ifstream de
  // c/Archivo
  //  Está modularizado para 'setear' un orden al momento de ejecución de
  //  archivo
  // VolcarArchivos(lista de parámetros que correspondan); // indicados por el
  // grupo de trabajo.
  //  En este módulo, se pasarán todos los parámetros ifstream y registros
  //  correspondientes a los diagramas).
  // ProcCompras(lista de parámetros que correspondan);
  // Se efectuará la pasarela de pago y se evaluará  acorde al estado
  // EmitirTicket(lista de parámetros que correspondan);
  //  Se emitirá el ticket con los formatos especificados más abajo
  // EmitirArt_x_Rubro(lista de parámetros que correspondan);
  // Se emitirá la lista de articulos, con el formato especificado, ordenado por
  // rubro y ascendente en descripción. Cerrar
  // (Articulos,IndDescripArt,Rubros,ListaCompras);
  /// Se cierran todos los ifstreams, y se vuelcan nuevamente todos los datos a
  /// sus archivos correspondientes
  return 0;
}