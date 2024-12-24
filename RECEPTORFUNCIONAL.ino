#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>

// Crear objeto RF24, pines CE y CSN
RF24 radio(8, 10);

const byte direccion[6] = "00001";

void setup() {
  Serial.begin(9600);

  // Inicializar el módulo RF24
  if (!radio.begin()) {
    Serial.println("Error: No se pudo inicializar el módulo RF24");
    while (true); // Detener la ejecución si falla la inicialización
  }

  radio.openReadingPipe(0, direccion);
  radio.setPALevel(RF24_PA_MIN);
  radio.startListening();
  Serial.println("Módulo RF24 inicializado correctamente");
}

void loop() {
  // Verificar la conexión antes de recibir datos
  if (radio.isChipConnected()) {
    if (radio.available()) {
      char mensaje[32] = "";
      radio.read(&mensaje, sizeof(mensaje));
      Serial.print("Mensaje recibido: ");
      Serial.println(mensaje);
    }
  } else {
    Serial.println("Error: Módulo RF24 no conectado");
    delay(1000); // Esperar un segundo antes de volver a verificar
  }
}
