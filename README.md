# Receptor de Datos con Módulo RF24 📡  

Este proyecto implementa un sistema receptor utilizando un módulo RF24 para recibir mensajes de manera inalámbrica. El sistema procesa los datos transmitidos por un emisor, permitiendo monitorear información en tiempo real a través del puerto serial.  

---

## 📝 **Descripción del Proyecto**  

El receptor está diseñado para funcionar con el módulo nRF24L01, configurado para escuchar constantemente en una dirección específica. Cuando un mensaje es recibido, este se muestra en el monitor serial.  

---

## 📂 **Estructura del Código**  

### **Librerías Importadas**  
- `SPI.h` y `nRF24L01.h`: Para la configuración y comunicación con el módulo RF24.  
- `RF24.h`: Manejo de las funciones específicas del módulo RF24.  

### **Variables Principales**  
- **Módulo RF24**:  
  - Pines: `CE = 8`, `CSN = 10`.  
  - Dirección: `"00001"`.  
- **Mensaje**:  
  - Tamaño máximo: 32 caracteres.  

---

## 🚀 **Flujo de Ejecución**  

### **1. Inicialización**  
- Configura el módulo RF24 para comenzar a escuchar en la dirección definida.  
- Verifica que el módulo esté correctamente conectado y funcional.  

### **2. Recepción de Datos (`loop`)**  
- Si el módulo está conectado y detecta datos disponibles:  
  - Lee el mensaje recibido.  
  - Lo imprime en el monitor serial.  
- Si no está conectado:  
  - Muestra un mensaje de error en el monitor serial y espera un segundo antes de volver a intentar.  

---

## 🛠️ **Requisitos**  

1. **Hardware**:  
   - Módulo nRF24L01.  
   - Microcontrolador compatible con Arduino.  
2. **Software**:  
   - Arduino IDE.  
   - Librería `RF24`.  

---

## 📌 **Cómo Usar**  

1. **Preparar el Hardware**:  
   - Conectar el módulo RF24 al microcontrolador según las especificaciones.  
2. **Cargar el Código**:  
   - Subir el sketch al microcontrolador desde el Arduino IDE.  
3. **Monitorear los Mensajes**:  
   - Abrir el monitor serial en el Arduino IDE para observar los mensajes recibidos.  

---

## 💡 **Características Principales**  

1. **Recepción Eficiente**:  
   - Escucha constante en una dirección predefinida.  
2. **Monitoreo Serial**:  
   - Visualiza en tiempo real los mensajes recibidos.  
3. **Diagnóstico de Conexión**:  
   - Detecta si el módulo RF24 está desconectado y notifica en el monitor serial.  

---

## 🤝 **Contribución**  

Este proyecto está abierto a mejoras y sugerencias. Si tienes ideas o encuentras errores, no dudes en crear un [issue](https://github.com/JUANSOTELO1709) o enviar un pull request.  

---

### 🖼️ **Vista Previa del Sistema**  

![Módulo RF24](https://via.placeholder.com/500x300)  
*Módulo RF24 conectado al microcontrolador.*  

![Monitor Serial](https://via.placeholder.com/500x300)  
*Monitor serial mostrando mensajes recibidos.*  

---

**Autor**: [Juan Sotelo](https://github.com/JUANSOTELO1709)  
📅 Última Actualización: 21 de Diciembre de 2024  
