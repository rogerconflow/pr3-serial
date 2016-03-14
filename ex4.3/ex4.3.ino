int tempAigua = 108;

void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps
if ( tempAigua >100) 
{ 
  Serial.print ( "Aigua bullint !"); // ens ho executa de dalt a baix, si no es compleix el 1r if, anira baixant 
  } 
 else if (tempAigua >=90 && tempAigua <100 ) 
  {
  Serial.print( "aigua apunt de bullir");// else if= si no es cumpleix el 1r if, fara aquest, sino el següent  
  }
  else if (tempAigua ==100 )
  {
    Serial.print( "aigua a 100 ºC" );//si n oes cumpleix el else if anterior, provarà aquest 
    }
  else 
  { 
    Serial.print ( "Encara no bull " );// si no es cumpleix cap condició anterior farà això
    } 

}

void loop()   // we need this to be here even though its empty
{
}



