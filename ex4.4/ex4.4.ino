float indicador = 45 ; 

void setup() 
{ 
  Serial.begin(9600); 
  if ( indicador <3.5) 
  {  // ens escriura A si es mes petit que 3.5 
    Serial.print ("A"); 
    } 
    else if ( indicador < 6.5 && indicador >= 3.5) 
    { // ens escriura B si es mes petit que 6.5 i mes gran o igual que 3.5
     Serial.print ("B"); 
    } 
    else if ( indicador <11.1 && indicador >=6.5 ) 
   { // igual amb tots 
    Serial.print ("C"); 
   } 
   else if ( indicador <17.7 && indicador >=11.1 ) 
   { 
    Serial.print ("D");  
    } 
    else if ( indicador <38.2 && indicador >=17.7 ) 
   { 
    Serial.print ("E");  
    } 
    else if ( indicador <43.2 && indicador >=38.2 ) 
   { 
    Serial.print ("F");  
    } 
    else if ( indicador >=43.2 ) 
   {  // ens escriura G quan sigui més gran o igual que 43.2 
    Serial.print ("G");  
    } 
}


void loop() {
  // put your main code here, to run repeatedly:

}
