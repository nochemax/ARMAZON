
void menu_lcd(){ //inicio menu
  
  myGLCD.print("MENU ARMAZON", CENTER, 0);
  myGLCD.print("1 JOYSTISK", CENTER, 16);
  myGLCD.print("2 COMANDO", CENTER, 24);
  myGLCD.print("3 MUSICA", CENTER, 32); 
}
void joystisk_lcd(){
  
  myGLCD.print("JOYSTISK", CENTER, 10);
  myGLCD.print("CALIBRACION", CENTER, 16);
  myGLCD.print("AL MAXIMO", CENTER, 24);
}
void base_lcdJ(){ 
 
  myGLCD.print("BASE MANEJE", CENTER, 0);
  myGLCD.print("1 JOYSTISK", CENTER, 16);
  myGLCD.print("2 X,Y", CENTER, 24);
}
void codo_lcdJ(){
  
  myGLCD.print("CODO MANEJE", CENTER, 0);
  myGLCD.print("JOSTIK", CENTER, 16);
  myGLCD.print("Y1", CENTER, 24);
}
void pinzas_lcdJ(){ 
  
  myGLCD.print("PINZAS MANEJE", CENTER, 0);
  myGLCD.print("1 JOYSTISK", CENTER, 16);
  myGLCD.print("2 2Y,1X", CENTER, 24);
} 
void comando_lcd(){
 
  myGLCD.drawBitmap(0, 0, robot, 84, 48);
}

void consola(){
  while(consol==0){
    Serial.println("               AAA               RRRRRRRRRRRRRRRRR   MMMMMMMM               MMMMMMMM               AAA               ZZZZZZZZZZZZZZZZZZZ     OOOOOOOOO     NNNNNNNN        NNNNNNNN");
    Serial.println("              A:::A              R::::::::::::::::R  M:::::::M             M:::::::M              A:::A              Z:::::::::::::::::Z   OO:::::::::OO   N:::::::N       N::::::N");
    Serial.println("             A:::::A             R::::::RRRRRR:::::R M::::::::M           M::::::::M             A:::::A             Z:::::::::::::::::Z OO:::::::::::::OO N::::::::N      N::::::N");
    Serial.println("            A:::::::A            RR:::::R     R:::::RM:::::::::M         M:::::::::M            A:::::::A            Z:::ZZZZZZZZ:::::Z O:::::::OOO:::::::ON:::::::::N     N::::::N");
    Serial.println("           A:::::::::A             R::::R     R:::::RM::::::::::M       M::::::::::M           A:::::::::A           ZZZZZ     Z:::::Z  O::::::O   O::::::ON::::::::::N    N::::::N");
    Serial.println("          A:::::A:::::A            R::::R     R:::::RM:::::::::::M     M:::::::::::M          A:::::A:::::A                  Z:::::Z    O:::::O     O:::::ON:::::::::::N   N::::::N");
    Serial.println("         A:::::A A:::::A           R::::RRRRRR:::::R M:::::::M::::M   M::::M:::::::M         A:::::A A:::::A                Z:::::Z     O:::::O     O:::::ON:::::::N::::N  N::::::N");
    Serial.println("        A:::::A   A:::::A          R:::::::::::::RR  M::::::M M::::M M::::M M::::::M        A:::::A   A:::::A              Z:::::Z      O:::::O     O:::::ON::::::N N::::N N::::::N");
    Serial.println("       A:::::A     A:::::A         R::::RRRRRR:::::R M::::::M  M::::M::::M  M::::::M       A:::::A     A:::::A            Z:::::Z       O:::::O     O:::::ON::::::N  N::::N:::::::N");
    Serial.println("      A:::::AAAAAAAAA:::::A        R::::R     R:::::RM::::::M   M:::::::M   M::::::M      A:::::AAAAAAAAA:::::A          Z:::::Z        O:::::O     O:::::ON::::::N   N:::::::::::N");
    Serial.println("     A:::::::::::::::::::::A       R::::R     R:::::RM::::::M    M:::::M    M::::::M     A:::::::::::::::::::::A        Z:::::Z         O:::::O     O:::::ON::::::N    N::::::::::N");
    Serial.println("    A:::::AAAAAAAAAAAAA:::::A      R::::R     R:::::RM::::::M     MMMMM     M::::::M    A:::::AAAAAAAAAAAAA:::::A    ZZZ:::::Z     ZZZZZO::::::O   O::::::ON::::::N     N:::::::::N");
    Serial.println("   A:::::A             A:::::A   RR:::::R     R:::::RM::::::M               M::::::M   A:::::A             A:::::A   Z::::::ZZZZZZZZ:::ZO:::::::OOO:::::::ON::::::N      N::::::::N");
    Serial.println("  A:::::A               A:::::A  R::::::R     R:::::RM::::::M               M::::::M  A:::::A               A:::::A  Z:::::::::::::::::Z OO:::::::::::::OO N::::::N       N:::::::N");
    Serial.println(" A:::::A                 A:::::A R::::::R     R:::::RM::::::M               M::::::M A:::::A                 A:::::A Z:::::::::::::::::Z   OO:::::::::OO   N::::::N        N::::::N");
    Serial.println("AAAAAAA                   AAAAAAARRRRRRRR     RRRRRRRMMMMMMMM               MMMMMMMMAAAAAAA                   AAAAAAAZZZZZZZZZZZZZZZZZZZ     OOOOOOOOO     NNNNNNNN         NNNNNNN");
    Serial.println("");
    Serial.println("");
    Serial.println("");
    Serial.println("");
    Serial.println("");
    miString = "";
    Serial.print("CONSOLA INTRODUCIR COMANDO:");
    consol=1;                                                                                                                                                                                   
  }
}                                                                                                                                                                                   

