  #define S0 38
  #define S1 39
  #define S2 40
  #define S3 41
  #define OUT 42
 
void Color (){
  
  pinMode(S0, OUTPUT);
  pinMode(S1, OUTPUT);
  pinMode(S2, OUTPUT);
  pinMode(S3, OUTPUT);
  pinMode(OUT, INPUT);
  //FRECUENCIA DEL SENSOR
  digitalWrite(S0, HIGH);
  digitalWrite(S1, LOW);
  Serial.begin(9600);
}

void Seleccion(){

  
  digitalWrite(S2,LOW);      
  digitalWrite(S3,LOW);     
  int red = pulseIn(OUT, LOW); 
  delay(200);      
  
  digitalWrite(S2,HIGH);   
  digitalWrite(S3,HIGH);   
  int green = pulseIn(OUT, LOW);  
  delay(200);      
  
  digitalWrite(S2,LOW);     
  digitalWrite(S3,HIGH);    
  int blue = pulseIn(OUT, LOW); 
  delay(200);       
  
  Serial.print("Red:");     
  Serial.print(red);   
  Serial.print("\t");    
  Serial.print("green:");     
  Serial.print(green);
  Serial.print("\t");     
  Serial.print("Blue:");     
  Serial.println(blue);    

//valores de los colores seleccionados

/*
 * Run the code to move to the dstorage position for color 2
 */
if ( red > 90 && green > 125 && blue < 110){    // si valores dentro del rango
    Serial.println("OK!");
    buenas();

   
  }

  /*
   * un the code to move to the dstorage position for color 1
   */
  //piezas defectuosas
    if ( blue < 85 && red > 105 && green < 120){  // si valores dentrol del rango
    Serial.println("DEPOSITO DEFECTUOSO");
    defectuosos();

  }  
}
