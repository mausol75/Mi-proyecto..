//ejercicio 8
#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Libro {
    string titulo;
    string autor;
    int fechaPublicacion;
};

int main() {
    
    vector<Libro> libros;

   
    int cantidadLibros;
    cout << "Ingrese la cantidad de libros: ";
    cin >> cantidadLibros;

    
    for (int i = 0; i < cantidadLibros; ++i) {
        Libro libro;

        cout << "\nDigite informacion para el libro " << i + 1 << ":" << endl;

        
        cout << "Titulo: ";
        cin.ignore(); 
        getline(cin, libro.titulo);

        
        cout << "Autor: ";
        getline(cin, libro.autor);

    
        cout << "Fecha de publicacion: ";
        cin >> libro.fechaPublicacion;

        libros.push_back(libro);
    }

    
    cout << "\nInformacion de los libros:" << endl;
    for (const auto& libro : libros) {
        cout << "\nTitulo: " << libro.titulo << endl;
        cout << "Autor: " << libro.autor << endl;
        cout << "Año de publicacion: " << libro.fechaPublicacion << endl;
    }

    return 0;
}