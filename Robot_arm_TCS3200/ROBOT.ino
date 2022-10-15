 
 // Motor declarations variables
 Servo base;
 Servo antebrazo;
 Servo brazo;
 Servo pinza;

void declaraciones(){
  //pins declarations
 base.attach(2);
 antebrazo.attach(5);
 brazo.attach(8);
 pinza.attach(11); 

  
//Start position
  base.write(63);
  antebrazo.write(91);
  brazo.write(83);
  pinza.write(105);
  
}

/*
 *Detection color 1
 */

 void defectuosos(){
  
  //girar base
  for (int x=143; x>=25; x--){
    base.write(x);
    delay(15);
  }
  for (int x=43; x<=105; x++){
    pinza.write(x);
    delay(15);
  }

   for (int x=169; x>=63; x--){
    base.write(x);
    delay(15);
  }   

   for (int x=140; x>=91; x--){
    antebrazo.write(x);
    delay(15);
  }   
  for (int x=66; x<=86; x++){
    brazo.write(x);
    delay(15);
  }

  
 }

/*
  Detection color 2
*/
 void buenas(){

  //girar base
  for (int x=143; x<=169; x++){
    base.write(x);
    delay(15);
  }
  for (int x=43; x<=105; x++){
    pinza.write(x);
    delay(15);
  }

   for (int x=169; x>=63; x--){
    base.write(x);
    delay(15);
  }   

   for (int x=140; x>=91; x--){
    antebrazo.write(x);
    delay(15);
  }   
  for (int x=66; x<=86; x++){
    brazo.write(x);
    delay(15);
  }
  
 }


/*MOVIMIENTO DE LA POSICION INICIAL AL
 SENSOR DE COLOR */
 void hcolor(){
  //Bajar antebrazo
  for (int x=91; x<=157; x++){
    antebrazo.write(x);
    delay(15);
  }
  //Mover brazo
  for (int x=86; x >=66; x--){
    brazo.write(x);
    delay(15);
  }
  //Cerrar pinza
   for (int x=105; x >=43; x--){
    pinza.write(x);
    delay(15);
  } 
  //ALZAR ANTEBRAZO
   for (int x=157; x>=100; x--){
    antebrazo.write(x);
    delay(15);
  } 

    //girar base
  for (int x=63; x<=143; x++){
    base.write(x);
    delay(15);
  }
  //bajar antebrazo
  for (int x=100; x<=140; x++){
    antebrazo.write(x);
    delay(15);
  }


  
 }
