
//Configuração dos pinos
void setup()
{
    pinMode(10, OUTPUT); ///g
    pinMode(9, OUTPUT); //f
    pinMode(7, OUTPUT); //a
    pinMode(6, OUTPUT); //b
    pinMode(5, OUTPUT); //ponto
    pinMode(4, OUTPUT); //c
    pinMode(3, OUTPUT); //d
    pinMode(2, OUTPUT); //e
}
//Ex: Representação do número 9
void loop()
{
  digitalWrite(10,LOW); 
   digitalWrite(9,LOW); 
    digitalWrite(7,LOW); 
    digitalWrite(6,LOW); 
    digitalWrite(5,HIGH); 
    digitalWrite(4,LOW); 
    digitalWrite(3,LOW); 
    digitalWrite(2,HIGH); 
  delay(2000);
}
