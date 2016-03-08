int tempAigua = 101;

void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps
if ( tempAigua < 100) 
{ 
  Serial.print ( "Encara no vull"); // quan l'aigua estigui per sota de 100 ens ho escriura 
  }
if ( tempAigua >= 100) //quan la temp de l'aigua sigui > o = de 100  ho escriura 
  {
    Serial.print("Aigua  bullint!");
  } 
}

void loop()   // we need this to be here even though its empty
{
}



