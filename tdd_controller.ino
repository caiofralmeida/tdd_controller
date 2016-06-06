
#define LED_RED 3
#define LED_YELLOW 5
#define BUTTON 2

int buttonState = 0;
bool manterLigado = false;

void setup() {
  pinMode(LED_RED, OUTPUT);
  pinMode(BUTTON, INPUT);

  buttonState = digitalRead(BUTTON);

    if (buttonState == HIGH) {
    analogWrite(LED_RED, 255);
    } else {
    analogWrite(LED_RED, 0);
  }
  
}

void loop() {

    buttonState = digitalRead(BUTTON);
    
    if (buttonState == HIGH) {
      delay(500);
      manterLigado = (!manterLigado);
    }

    if (manterLigado) {
      analogWrite(LED_RED, 255);
      analogWrite(LED_YELLOW, 0);
    } else {
      analogWrite(LED_RED, 0);
      analogWrite(LED_YELLOW, 255);
    }
}
