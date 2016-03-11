int tempAigua = 108;

void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps
if ( tempAigua < 90) 
{ 
  Serial.print ( "Encara no vull"); // quan l'aigua estigui per sota de 100 ens ho escriura 
  } 
 else if (tempAigua >=90 && tempAigua <100 ) 
  {
  Serial.print( "aigua apunt de bullir");  
  }
  else if (tempAigua < 100 ) 
  { 
    Serial.print ( "Aigua apunt de bullir" ); 
    } 
else if ( tempAigua ==100) //quan la temp de l'aigua sigui > o = de 100  ho escriura 
  {
    Serial.print("Aigua a 100ºC");
  }  
 else if (tempAigua >100 )
  { 
    Serial.print( "Aigua bullint!"); 
    }
}

void loop()   // we need this to be here even though its empty
{
}



