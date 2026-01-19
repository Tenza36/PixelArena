Aquí tienes el contenido completo para tu archivo README.md. Está diseñado profesionalmente siguiendo los estándares de documentación técnica para que puedas copiarlo y pegarlo directamente en tu repositorio de GitHub.



PixelArena: Multiplayer Top-Down Battle

PixelArena es un prototipo de videojuego de acción multijugador en tiempo real desarrollado en Unreal Engine 5.3.2. El proyecto se centra en mecánicas de combate a distancia, movimiento sincronizado por red y una arquitectura autoritativa para garantizar la integridad del estado del juego.



1\. Documento de Diseño de Juego (GDD)

1.1. Mecánicas del Juego (Mechanics)

Las mecánicas fundamentales definen la interacción directa del jugador con el sistema:



Navegación Point \& Click: Implementación de un sistema de movimiento basado en el mouse utilizando el módulo Enhanced Input. El sistema detecta la diferencia entre clics cortos (navegación a punto fijo) y clics sostenidos (seguimiento continuo del cursor).



Combate de Proyectiles Físicos: Sistema de disparo basado en actores (APixelProjectile). A diferencia del hitscan, los proyectiles tienen velocidad, masa y tiempo de vida, obligando al jugador a predecir el movimiento del oponente.



Sistema de Salud Replicada: Atributo de salud (CurrentHealth) gestionado íntegramente por el servidor. Incluye lógica de daño autoritativa y notificaciones de red (OnRep) para el feedback visual en los clientes.



1.2. Dinámicas de Juego (Dynamics)

Las dinámicas describen el comportamiento emergente de los jugadores:



Duelo de Posicionamiento: El control de tipo top-down genera una dinámica de "kiteo" constante, donde el éxito depende de mantener la distancia adecuada mientras se evitan proyectiles enemigos.



Gestión de la Información: La presencia de barras de vida flotantes permite a los jugadores tomar decisiones tácticas rápidas sobre a qué objetivo priorizar basándose en su estado de salud visible.



Control del Espacio: El diseño del escenario (Ring) actúa como una mecánica pasiva de peligro, donde el movimiento errático puede resultar en la caída del jugador al vacío.



2\. Arquitectura de Red y Protocolos

2.1. Arquitectura: Servidor Autoritativo (Listen Server)

El juego utiliza un modelo de Servidor Autoritativo. En esta arquitectura, el servidor es la única entidad con permiso para:



Modificar la salud de los jugadores.



Validar la posición de los actores.



Gestionar el spawn de proyectiles.



Los clientes actúan como terminales que envían peticiones de entrada y reciben actualizaciones del estado del mundo, minimizando la posibilidad de trampas (cheating).



2.2. Protocolos de Comunicación

Transporte UDP: Se utiliza el protocolo nativo de Unreal basado en UDP, ideal para juegos de acción debido a su baja latencia.



RPCs (Remote Procedure Calls):



Server: Utilizados para que el cliente solicite acciones (moverse, disparar).



Multicast: Utilizados para replicar efectos estéticos y mensajes de depuración en todos los clientes.



Propiedades Replicadas: Uso de DOREPLIFETIME para sincronizar variables críticas como la salud, asegurando que todos los nodos de la red compartan la misma información de estado.



3\. Justificación Tecnológica

3.1. Motor: Unreal Engine 5.3.2

Se ha seleccionado este motor por su Networking Framework avanzado. Unreal proporciona una abstracción de alto nivel para la replicación de actores y la gestión de sesiones multijugador que sería extremadamente costosa de implementar desde cero.



3.2. Librerías y Módulos Clave

UMG (Unreal Motion Graphics): Para la implementación de la interfaz de usuario (WBP\_HealthBar) y su vinculación con componentes de C++.



Enhanced Input: Para una gestión de eventos de entrada robusta y modular.



AIModule \& NavigationSystem: Utilizados para el cálculo de rutas y la futura implementación de comportamientos inteligentes (Steering Behaviors).



Net/UnrealNetwork: Librería base para la gestión de la replicación de propiedades en C++.



4\. Requisitos de Ejecución

Motor: Unreal Engine 5.3.2 o superior.



IDE: Visual Studio 2022 con soporte para C++ de Unreal.



Módulos Adicionales: El archivo .Build.cs requiere las dependencias UMG, EnhancedInput y AIModule.



5\. Autor

Kevin Tenesaca

