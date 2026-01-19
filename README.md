PixelArena:
1. Descripción y Mecánicas 
===

# 

# Género: Arcade Top-Down Shooter.

# 

# Objetivo: Eliminar a los otros jugadores disparando proyectiles.

# 

# Mecánicas:

# 

# Movimiento: clic izquierdo

# 

# Apuntado con el ratón (Replicado).

# 

# Disparo letra F.

# 

# Sistema de Salud.

# 

# Dinámica: Partidas rápidas de 3 minutos. Gana el jugador que elimina al otro.

# 

# 2\. Justificación Técnica 

# 

# Motor: Unreal Engine 5. Justificación: Ofrece un sistema de networking robusto "out-of-the-box" (Character Movement Component) que facilita la sincronización.

# 

# Arquitectura: Cliente-Servidor (Listen Server).

# 

# 

# Justificación: Para 2-4 jugadores, un modelo "Listen Server" (donde un jugador actúa como host y jugador a la vez) es ideal y no requiere un servidor dedicado costoso. Es la arquitectura estándar de Unreal.

# 

# Protocolo: UDP.

# 

# Justificación: Para un juego de acción arcade en tiempo real, la velocidad es prioritaria sobre la fiabilidad de entrega de cada paquete. UDP minimiza la latencia.

