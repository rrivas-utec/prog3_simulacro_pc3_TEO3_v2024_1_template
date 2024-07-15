# Task #PC3: Simulacro Practica Calificada 3  
**course:** Programación III  
**unit:** 6  
**cmake project:** prog3_simulacro_pc3_TEO3_v2024_1
## Instructions


## Question #1 - in-order {heap} (7 points)

En la versión 20 de C++ se introdujo un nuevo algoritmo que permite convertir un contenedor de acceso random a heap:
```c++
    std::vector<int> v = {1, 3, 10, 7, 2, 50, 30, 4, 5};
    std::make_heap(v.begin(), v.end());  
```
Utilizando la función `std::make_heap`, convertir un contenedor de acceso random en heap y sabiendo que un heap representa un árbol binario, elaborar 3 template de funciones que implementen los 3 tipos de recorridos a profundidad (in-order, pre-order y post-order). 

**Use Case #1:**
```c++
    std::vector<int> v = {1, 3, 10, 7, 2, 50, 30, 4, 5};
    std::make_heap(v.begin(), v.end());
    pre_order(v, [](const auto& item) {
      std::cout << item << " ";
    });
    std::cout << std::endl;
    in_order(v, [](const auto& item) {
      std::cout << item << " ";
    });
    std::cout << std::endl;
    post_order(v, [](const auto& item) {
      std::cout << item << " ";
    });
    std::cout << std::endl;
```

**Use Case #2:**
```c++
    std::array<int> a = {1, 3, 10, 7, 2, 50, 30, 4, 5};
    std::make_heap(v.begin(), v.end());
    pre_order(a, [](const auto& item) {
      std::cout << item << " ";
    });
    std::cout << std::endl;
    in_order(a, [](const auto& item) {
      std::cout << item << " ";
    });
    std::cout << std::endl;
    post_order(a, [](const auto& item) {
      std::cout << item << " ";
    });
    std::cout << std::endl;
```
## Question #2 - count_empty_cells {hash table} (7 points)

Desarrollar una clase template `count_empty_cells` que permita contar el número de celdas vacías en una matriz de tamaño NxN.
La simulación de llenado de la matriz se debe realizar con el método `add(int r, int c)` cuyos parámetros `r` y `c` se utilizarán para llenar toda la fila `r` y toda la columna `c` de la matriz. 
Esta clase retornará la cantidad de celdas vacías por medio del operador paréntesis `()` que deberá ser sobrecargado.

La complejidad algoritmica de la función `add` y del operador `()` debe ser `O(1)`.

**Tip:** Utilizar 2 tablas hash, una para filas y otra para columnas

**Nota:** Asegurarse que la función `add` solo acepte filas y columnas valídas en caso contrario debe retornar una excepción del tipo fuera de rango (`std::out_of_range`).  

**Use Case #1:**
```cpp
    count_empty_cells<20> counter;
    counter.add(0,0);
    counter.add(19,19);
    std::cout << counter() << std::endl;
```

**Use Case #2:**
```cpp
count_empty_cells<15> counter;
counter.add(0,0);
counter.add(1,0);
counter.add(0,3);
counter.add(4,3);
counter.add(19,19);
std::cout << counter() << std::endl;
```