void setup() {
  pinMode(13, OUTPUT); // Vermelho
  pinMode(5, OUTPUT); // Amarelo
  pinMode(9, OUTPUT); // Buzzer
  Serial.begin(9600); // Luminosidade
  
}

void loop() {
  int luminosidade = analogRead(A0);
  Serial.print("A luminosidade do ambiente no momento e: ");
  Serial.print(luminosidade);
  Serial.println(" (Lum)");
  Serial.println("");
  delay(1000);

  if (luminosidade > 80 and luminosidade < 150)
  { 
    tone(9, 200);
    digitalWrite(13, HIGH);
    delay(500);
    digitalWrite(13, LOW);
    noTone(9);
  }
  else if (luminosidade > 150) 
  {
    tone(9, 200);
    digitalWrite(13, HIGH);
    delay(50);
    digitalWrite(13, LOW);
    //noTone(9);
    delay(50);
  }
  else 
  {
    noTone(9);
    digitalWrite(5, HIGH);
    delay(500);
    digitalWrite(5, LOW);
  }
}
