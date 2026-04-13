## Punto 2 - Archivo .gitignore

### ¿Qué es y por qué es conveniente incluirlo?
El archivo `.gitignore` le indica a Git qué archivos o carpetas debe ignorar
y no subir al repositorio remoto. Es conveniente incluirlo para evitar subir
archivos innecesarios o sensibles, como archivos compilados (.exe, .o),
configuraciones locales del editor, o archivos con contraseñas y claves privadas.

### ¿Cuándo se debe hacer?
Se debe crear al inicio del proyecto, antes del primer commit, para asegurarse
de que ningún archivo no deseado sea trackeado por Git desde el principio.

### ¿Cómo se configura?
Se crea un archivo llamado `.gitignore` en la raíz del repositorio y se escribe
el nombre de los archivos o carpetas a ignorar, uno por línea. Por ejemplo:

ignorado.txt

## Código Misterioso

El programa trabaja con el número 452 en tres pasos:
1. **f_alpha (invertir_digitos):** invierte los dígitos del número.
2. **f_beta (dividir_mitad):** divide el número por 2.
3. **f_gamma (sumar_digitos_al_valor):** suma los dígitos del número a sí mismo.

Resultado final: 137.

## Código Misterioso

En este código encontré 4 errores:
1. En el comienzo faltaba #include <stdio.h>.
2. En la línea 12 le agregué el & a valor1 en el scanf.
3. En la línea 17 y 23 les faltaba el ;.
4. Error de lógica: Lo que estaba pasando es que el resultado de la función duplicar número se estaba descartando y el valor de la variable valor1 no se estaba asignando por medio de la función duplicar número. La corrección que hice fue en lugar de llamar a la función con la variable valor1 (su valor), la llamo con la dirección de memoria de la variable valor1, la función recibe la dirección de memoria de valor1 y realiza el cambio en el valor que se encuentra en esa dirección (duplicándolo al multiplicar en 2 al número), de esa manera el valor de la variable valor1 cambia.