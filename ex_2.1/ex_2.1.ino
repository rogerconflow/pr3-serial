int a = 10;      // int emmmagatzema un valor de 16 bits, 2 bytes
int b = 20;
int c = 30;

void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  Serial.println("Here is some math: ");

  Serial.print("a = "); //ens escriura a= 
  Serial.println(a);  // ens escriura el valor de "a" i salta de fila 
  Serial.print("b = ");
  Serial.println(b);
  Serial.print("c = ");
  Serial.println(c);

  Serial.print("a + b = ");       //suma els valors de a i b 
  Serial.println(a + b);

  Serial.print("a * c = ");       // multiplica els valors de a i c
  Serial.println(a * c);
  
  Serial.print("c / b = ");       // divideix els valors
  Serial.println(c / b);

  Serial.print("c % b = ");       //ens dona el residu de una divisio
  Serial.println(c % b);
  
  Serial.print("b - c = ");       // resta els valors 
  Serial.println(b - c);
}

void loop()  // we need this to be here even though its empty
{
}

