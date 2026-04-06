
## 3. Ejercicio de Debugging

### 🛠️ `codigo_sin_funcionar`
Se realizaron las siguientes correcciones para que el programa compile y la lógica funcione correctamente:

* **Sintaxis y librerías:** Añadí `2` puntos y comas (`;`) donde faltaban en las líneas 19 y 25. Además, agregué la directiva `#include <stdio.h>`.
* **Corrección de lectura:** En la línea 15, agregué el ampersand (`&`) que faltaba en el `scanf("%d", &valor1)`.
* **Lógica de punteros:** Para arreglar la lógica del programa, utilicé la dirección de memoria de `valor1`. Esto me permite usar punteros dentro de la función para modificar el valor original, manteniendo la estructura de la función como `void`.

---

### 🕵️‍♂️ `codigo_misterioso`
Análisis de las funciones y resolución del acertijo:

* **`f_alpha`:** Se encarga de revertir nuestro número misterioso (transforma el `452` a `254`).
* **`f_beta`:** Divide el número obtenido en la función anterior entre 2 (dando como resultado `127`).
* **`f_gamma`:** Separa cada dígito del número y los suma (es decir, `1 + 2 + 7 = 10`).

**Resultado:** El enigma es **`137`**, ya que surge de sumar el resultado de beta más el de gamma (`127 + 10`).

## 4. 
* **Apartado g:** Al añadir el **`.gitignore`** evite enviar archivos inecesarios y no recomendables como el **`.exe`** creado por el compilador