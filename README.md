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