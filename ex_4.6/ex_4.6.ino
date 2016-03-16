int comptar = 11;
void setup()                    // run once, when the sketch starts
{
  Serial.begin(9600);       // set up Serial library at 9600 bps
  Serial.print("Ara comptare de 0 a ");
  Serial.println(comptar);
  for (int i=0; i <= comptar; i++)// el número que li posem a la "i" és a partir del que comença a contar 
  { // mentre la "i" sigui <= que el num que li haguem donat a comptar, anira sumant  
    Serial.print(i); // ens escriura el valor de "i" i escriura un guio 
    if ( i < comptar )
    
    Serial.print("-");
  }

}
void loop()     // we need this to be here even though its empty
{
}

