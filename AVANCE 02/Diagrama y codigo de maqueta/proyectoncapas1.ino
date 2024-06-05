#include <Servo.h>

Servo servo;

// Definir los pines para los colores del LED RGB
const int pinRojo = 5; // Rojo en el pin 5
const int pinVerde = 4; // Verde en el pin 4
const int pinAzul = 3; // Azul en el pin 3
const int pinServo = 2; // Servo en el pin 2

void setup() {
    // Configurar los pines del LED RGB como salida
    pinMode(pinRojo, OUTPUT);
    pinMode(pinVerde, OUTPUT);
    pinMode(pinAzul, OUTPUT);

    // Configurar el servo en el pin 2
    servo.attach(pinServo);
    servo.write(0);

    // Encender el color rojo del LED RGB al inicio
    digitalWrite(pinRojo, HIGH);
    digitalWrite(pinVerde, LOW);
    digitalWrite(pinAzul, LOW);

    delay(3000);
}

void loop() {
    // Mover el servomotor a 180 grados
    servo.write(90);
    // Encender el color verde del LED RGB
    digitalWrite(pinRojo, LOW);
    digitalWrite(pinVerde, HIGH);
    digitalWrite(pinAzul, LOW);

    delay(3000);

    // Mover el servomotor a 0 grados
    servo.write(0);
    // Encender el color rojo del LED RGB
    digitalWrite(pinRojo, HIGH);
    digitalWrite(pinVerde, LOW);
    digitalWrite(pinAzul, LOW);

    delay(3000);
}
