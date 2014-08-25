
void joytisk(){                                         //################### CONTROL PAD PSX ####################
  myGLCD.clrScr();
  consol==0;
  while(contador==0 && contadormenu==1){

    joystisk_lcd();
    digitalWrite(ledb, LOW);
    data = Psx.read();
    delay(75);
    if (data & psxR1){
      contadormenu++;
    }
    if (data & psxL1){
      contadormenu--;
    }
    if(data & psxO){
      contador=+1;
    }  
  }
  myGLCD.clrScr();
  while(contador==1){    
    
    ledA();
    base_lcdJ();
    data = Psx.read();
    delay(75);
    
    if(data & psxUp){
      pos1 = constrain(pos1+10, 7, 180);                                   
      myservoy.write(pos1);             
      delay(50);
    }
    else if(data & psxDown){
      pos1 = constrain(pos1-10, 7, 180);                                   
      myservoy.write(pos1);             
      delay(50);
    }
    else if(data & psxRight){
      pos2 = constrain(pos2+10, 7, 180);                                   
      myservox.write(pos2);             
      delay(50);
    }
    else if(data & psxLeft){
      pos2 = constrain(pos2-10, 7, 180);                               
      myservox.write(pos2);             
      delay(50);
    }
    else if(data & psxO){
      contador++;
    }
    else if(data & psxX ){
      contador--;
    }
    else{ 
    }  
  }  
  myGLCD.clrScr();
  while(contador==2){
    
    ledV();
    codo_lcdJ();
    data = Psx.read();
    delay(75);
    
    if(data & psxUp){
      pos3 = constrain(pos3+5, 1, 180);                                 
      myservo1y.write(pos3);             
      delay(50);
    }   
    else if(data & psxDown){
      pos3 = constrain(pos3-5, 1, 180);                              
      myservo1y.write(pos3);             
      delay(50);
    }
    else if(data & psxRight){
      pos2 = constrain(pos2+5, 1, 180);                               
      myservox.write(pos2);             
      delay(50);
    }
    else if(data & psxLeft){
      pos2 = constrain(pos2-5, 1, 180);                             
      myservox.write(pos2);             
      delay(50);
    }
    else if(data & psxO){
      contador++;
    }
    else if(data & psxX ){
      contador--;
    }
    else{
    }  
  }  
  myGLCD.clrScr();
  while(contador==3){  
    
    ledR();
    pinzas_lcdJ();    
    data = Psx.read();
    delay(75);
    ledR();
    if(data & psxUp){
      pos4 = constrain(pos4+5, 1, 180);                                
      myservo1x.write(pos4);             
      delay(50);
    }
    else if(data & psxDown){
      pos4 = constrain(pos4-5, 1, 180);                          
      myservo1x.write(pos4);             
      delay(50);
    }
    else if(data & psxRight){
      pos5 = constrain(pos5+5, 1, 160);                          
      myservo2x.write(pos5);             
      delay(50);
    }
    else if(data & psxLeft){
      pos5 = constrain(pos5-5, 1, 160);                                  
      myservo2x.write(pos5);             
      delay(50);
    }
    else if(data & psxX ){
      contador--;
    }
    else{ 
    }  
  }
}  
