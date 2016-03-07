int num = 33;

void setup()             // run once, when the sketch starts
{
  Serial.begin(9600);    // set up Serial library at 9600 bps

  Serial.println("Different formats for the same number:");

  Serial.write(num);
  Serial.println();
  
  Serial.println(num); //ens ho escriu amb el simbol segons la taula ASCII
  Serial.println(num,DEC); //ens ho escriu en decimal 
  
  Serial.println(num,BIN); // ens ho escriu amb binari 
  
  Serial.println(num,HEX); //ens ho escriu amb hexadecimal 
  
  Serial.println(num,OCT); // ens ho escriu amb octal 
}

void loop()   // we need this to be here even though its empty
{
}

