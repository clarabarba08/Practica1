# PRÀCTICA 1: BLINK
L'objectiu d'aquesta pràctica és produir un parpadeig periòdic en un led. 

## MATERIAL
- Un led
- Una resistència (de 330Ohm per exemple)
- Cables
- Microcontrolador ESP32

## EXPLICACIÓ DEL CODI

Per aquesta pràctica només necessitarem la llibreria d'Arduino:
```cpp 
#include <Arduino.h>
```
A continuació cal definir a quin pin conectarem el led:
```cpp
#define LED 16
```
<div align="justify">
En el setup només tenim dues instruccions. La primera serveix per iniciar la comunicació serie entre l'ordinador i l'ESP32, amb una velocitat de 9600 bits per segons. Mentre que la segona és per inicialitzar el led. 
<div>

```cpp
void setup() {
  Serial.begin(9600);
  pinMode(LED,OUTPUT);
}
```
En el loop volem un bucle on s'encengui i s'apagui el led. Per tant escrivim la instrucció d'encendre i la d'apagar el led amb un delay després de cadascuna. També anirem escrivint per pantalla l'estat del led.
```cpp
void loop() {
  digitalWrite(LED,HIGH);
  Serial.println("ON");
  delay(1000);
  digitalWrite(LED,LOW);
  Serial.println("OFF");
  delay(1000);
}
 ```
El programa tarda 8,14 segons en ser compilat i començar a executar-se.
En el següent enllaç podem veure el vídeo del funcionament: [VÍDEO](https://drive.google.com/file/d/1DxelvnXxwCH2XdNHgHNHYFG7yPVfiyX_/view?usp=sharing)

 ## DIAGRAMA DE TEMPS
 Els delay son d'1 segon, de manera que el led està un segon obert i un segon apagat. 

 ![Diagrama de temps](/diagramatemps.jpeg)

 ## DIAGRAMA DE FLUJO
 L'ànode (pota llarga) la conectem en el pin 16 amb una resistència en sèrie entre mig. I el càtode (pota curta) el conectem a *Ground*.
 El muntatge queda així:

 ![Diagrama de flujo](/diagramaflujo.jpeg)



