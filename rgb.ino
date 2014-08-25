
void rgbinicio(){                                     //######################### RGB INICIO ##########################

  digitalWrite(ledr, HIGH);
  digitalWrite(ledg, LOW);
  digitalWrite(ledb, LOW);
  delay(250);
  digitalWrite(ledr, LOW);
  digitalWrite(ledg, HIGH);
  digitalWrite(ledb, LOW);
  delay(250);
  digitalWrite(ledr, LOW);
  digitalWrite(ledg, LOW);
  digitalWrite(ledb, HIGH);
  delay(250);
  digitalWrite(ledb, LOW);
}

void rgbmiusic1(){                                   //############################ RGB BAILE #########################
  digitalWrite(ledr, LOW);  //inicio
  digitalWrite(ledg, LOW);
  digitalWrite(ledb, HIGH);
  delay(750);
  digitalWrite(ledb, LOW);
  delay(450);
  digitalWrite(ledb, HIGH);
  delay(400);
  digitalWrite(ledb, LOW);
  delay(250);
}
void rgbmiusic2(){
  digitalWrite(ledb, HIGH);
  delay(250);
  digitalWrite(ledb, LOW);
  delay(150);
  digitalWrite(ledb, HIGH);
  delay(150);
  digitalWrite(ledb, LOW);
  delay(150);
  digitalWrite(ledg, HIGH);
  delay(250);
  digitalWrite(ledg, LOW);
  digitalWrite(ledr, HIGH);
  delay(250);
  digitalWrite(ledg, HIGH);
  delay(250);
  digitalWrite(ledg, LOW);
  digitalWrite(ledr, HIGH);
  delay(250);
  digitalWrite(ledb, HIGH);
  delay(500);
}
void rgbmiusic3(){
  digitalWrite(ledb, HIGH);  // haciadelante
  digitalWrite(ledr, LOW);
  digitalWrite(ledg, LOW);
  delay(250);
  digitalWrite(ledr, LOW);
  digitalWrite(ledg, HIGH);
  digitalWrite(ledb, LOW);
  delay(250);
  digitalWrite(ledr, LOW);
  digitalWrite(ledg, LOW);
  digitalWrite(ledb, HIGH);
  delay(250);
  digitalWrite(ledb, LOW); // haciatras
  digitalWrite(ledg, HIGH);
  digitalWrite(ledr, LOW);
  delay(250);
  digitalWrite(ledg, LOW);
  digitalWrite(ledr, HIGH);
  digitalWrite(ledb, LOW);
  delay(250);
  digitalWrite(ledr, LOW);
  digitalWrite(ledg, LOW);
  digitalWrite(ledb, HIGH);
  delay(250);
}
void rgbmiusic4(){
  digitalWrite(ledb, LOW); // destellos
  digitalWrite(ledr, HIGH);
  digitalWrite(ledg, LOW);
  delay(100);
  digitalWrite(ledr, LOW);
  digitalWrite(ledb, HIGH);
  digitalWrite(ledb, LOW);
  delay(100);
  digitalWrite(ledr, LOW);
  digitalWrite(ledb, LOW);
  digitalWrite(ledg, HIGH);
  delay(1000);
  digitalWrite(ledg, LOW);
}

void ledA(){
  digitalWrite(ledg, LOW);
  digitalWrite(ledb, HIGH);
}
void ledV(){
  digitalWrite(ledr, LOW);
  digitalWrite(ledb, LOW);
  digitalWrite(ledg, HIGH);
}
void ledR(){
  digitalWrite(ledg, LOW);
  digitalWrite(ledr, HIGH);
}
