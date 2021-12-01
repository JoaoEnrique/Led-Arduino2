// C++ code
//
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(12, HIGH);
  delay(500); // Wait for 1000 millisecond(s)
  
  
  //ACENDER DA ESQUERDA PRA DIREITA
  
  digitalWrite(9, HIGH);
  delay(300); // Wait for 1000 millisecond(s)
  digitalWrite(9, LOW);
  delay(300); // Wait for 1000 millisecond(s)
  
  digitalWrite(8, HIGH);
  delay(300); // Wait for 1000 millisecond(s)
  digitalWrite(8, LOW);
  delay(300); // Wait for 1000 millisecond(s)
  
  digitalWrite(6, HIGH);
  delay(300); // Wait for 1000 millisecond(s)
  digitalWrite(6, LOW);
  delay(300); // Wait for 1000 millisecond(s)
  
  digitalWrite(5, HIGH);
  delay(300); // Wait for 1000 millisecond(s)
  digitalWrite(5, LOW);
  delay(300); // Wait for 1000 millisecond(s)
  
  digitalWrite(4, HIGH);
  delay(300); // Wait for 1000 millisecond(s)
  digitalWrite(4, LOW);
  delay(300); // Wait for 1000 millisecond(s)
  
  digitalWrite(3, HIGH);
  delay(300); // Wait for 1000 millisecond(s)
  digitalWrite(3, LOW);
  delay(300); // Wait for 1000 millisecond(s)
  
  digitalWrite(2, HIGH);
  delay(300); // Wait for 1000 millisecond(s)
  digitalWrite(2, LOW);
  delay(300); // Wait for 1000 millisecond(s)
  
  
  //ACENDER SEGUNDO LED
  digitalWrite(11, HIGH);
  delay(500); // Wait for 1000 millisecond(s)
  
  
   //PISCAR 3 VEZES(1)
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  delay(300); // Wait for 1000 millisecond(s)
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  delay(300); // Wait for 1000 millisecond(s)
  
  //PISCAR 3 VEZES(2)
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  delay(300); // Wait for 1000 millisecond(s)
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  delay(300);
  
  //PISCAR 3 VEZES(3)
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  delay(300); // Wait for 1000 millisecond(s)
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  delay(300);
  
  //desligar led 2 e 3
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  delay(100); // Wait for 1000 millisecond(s)
}
