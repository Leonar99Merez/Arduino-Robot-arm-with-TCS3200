

void sensor(){
  pinMode(TRIG, OUTPUT);  
  pinMode(ECO, INPUT);    
}

void movsensor(){
  digitalWrite(TRIG, HIGH);    
  delay(1);      
  digitalWrite(TRIG, LOW);   
  
  DURACION = pulseIn(ECO, HIGH);  
           
  DISTANCIA = DURACION / 58.2;    // Distance in cm
  Serial.println(DISTANCIA);    // Send a value of the distance to the serial monitor
  delay(200);       

  if (DISTANCIA <= 10 && DISTANCIA >= 0)
  { 
    /*
     * Detects and object and moves it to the TCS3200
     * EJECUTAR EL COMANDO DE INICIAL A SENSOR DE COLOR
     */
    Serial.println("ALGO");
    hcolor();
    
    }else{

      /*
       * THERE IS SOMETHING ABOUT THE COLOR SENSOR
       * EXECUTES THE SELECTION MOVEMENTS OF THE ARM
       * BY COLORS
       */
      
     Serial.println("NADA");
     Seleccion();
    }
   
}
