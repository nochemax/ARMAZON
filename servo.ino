

void presinicio(){                       //################################POSICION INICIAL SERVO#################################
  pos1 = constrain(pos1, 7, 180);
  myservoy.write(pos1);
  delay(50);
  pos2 = constrain(pos2, 7, 180);
  myservox.write(pos2);
  delay(50);
  pos3 = constrain(pos3, 2, 180);
  myservo1y.write(pos3);
  delay(50);
  pos4 = constrain(pos4, 2, 150);
  myservo1x.write(pos4);
  delay(50);
  pos5 = constrain(pos5, 2, 180);
  myservo2x.write(pos5);
  delay(50);
}

void presentacion(){                        // ############################## BAILE PRESENTACION ################################
  myGLCD.clrScr();
  consol==0;
  while(contador1==0 && contadormenu==3){
    myGLCD.drawBitmap(0, 0, termi, 84, 48);
    data = Psx.read();
    delay(75);
    if (data & psxL1){
      contadormenu--;
    }
    if(data & psxO){
      contador1=1;
      myGLCD.clrScr();
    }  
  }
  while(contador1==1){ 
    myGLCD.drawBitmap(0, 0, brazo, 84, 48);
    for(pos2 = 41; pos2 < 91; pos2 += 5){ //pos2=servox=basex
      myservox.write(pos2);             
      delay(50);
    }
    for(pos3 = 31; pos3>=1; pos3 -= 5){   //pos3=servo1y=codoy                         
      myservo1y.write(pos3);             
      delay(50);
    }  
    for(pos2 = 91; pos2 >= 41; pos2 -= 5){  //pos2=servox=basex                          
      myservox.write(pos2);             
      delay(50);
    }
    for(pos3 = 1; pos3 <= 31; pos3 += 5){  //pos3=servo1y=codoy                    
      myservo1y.write(pos3);             
      delay(50);
    }

    for(pos2 = 41; pos2 < 91; pos2 += 5){ //pos2=servox=basex
      myservox.write(pos2);             
      delay(50);
    }
    for(pos3 = 31; pos3>=1; pos3 -= 5){   //pos3=servo1y=codoy                         
      myservo1y.write(pos3);             
      delay(50);
    }  
    for(pos2 = 91; pos2 >= 41; pos2 -= 5){  //pos2=servox=basex                          
      myservox.write(pos2);             
      delay(50);
    }
    for(pos3 = 1; pos3 <= 31; pos3 += 5){  //pos3=servo1y=codoy                    
      myservo1y.write(pos3);             
      delay(50);
    }

    pos1 = constrain(pos1, 7, 180);
    myservoy.write(pos1);
    delay(50);
    pos2 = constrain(pos2, 7, 180);
    myservox.write(pos2);
    delay(50);
    pos3 = constrain(pos3, 2, 110);
    myservo1y.write(pos3);
    delay(50);
    pos4 = constrain(pos4, 2, 150);
    myservo1x.write(pos4);
    delay(50);
    pos5 = constrain(pos5, 2, 100);
    myservo2x.write(pos5);
    delay(50);

    for(pos1 = 51; pos1 < 91; pos1 += 5){ //pos1=servoy=basey                                  
      myservoy.write(pos1);             
      delay(50);
    }
    for(pos3 = 31; pos3 < 136; pos3 += 5){   //pos3=servo1y=codoy                         
      myservo1y.write(pos3);             
      delay(50);
    }   
    for(pos3 = 136; pos3 >= 31; pos3 -= 5){                      
      myservo1y.write(pos3);             
      delay(50);
    }
    for(pos1 = 91; pos1 >= 51; pos1 -= 5){ //pos1=servoy=basey                                  
      myservoy.write(pos1);             
      delay(50);
    }
    contador1=0;
  }
}
