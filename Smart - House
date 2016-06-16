# Arduino
float RGB1[3]; 
//Declarando um vetor de intensidade maxima
float RGB2[3]; //Declarando um vetor de variação entre a intensidade minima e a maxima
float INC[3];
int red, green, blue;


char buf='z';
 int x;
 float y;
 float s=0;
 
void setup()
{
  //Define os pinos dos leds como saida
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  Serial.begin(9600);
   Serial.println("Digite alguma ordem\n(g-Acendo)(w-Apaga)LED Verde\n(b-Acende)(q-Apaga)LED Azul\n(r-Acende)(e-Apaga)LED Vermelho\n(j-15')(k-30')(l-60')\n(m-Desliga)(n-Liga)Tomada\n");
randomSeed(analogRead(0));
RGB1[0] = 0; 
RGB1[1] = 0;  
RGB1[2] = 0; 
RGB2[0] = random(256); 
RGB2[1] = random(256);
RGB2[2] = random(256); 
}
 
void loop()
{
  while(Serial.available() > 0)
  
  {
    buf = Serial.read();
    //Caso seja recebido R, acende o led vermelho
    if (buf == 'r')
    {
      digitalWrite(3, HIGH);
      Serial.println("LED Vermelho ligado !");
    }
    //Caso seja recebido G, acende o led verde
    if (buf == 'g')
    {
      digitalWrite(4, HIGH);
      Serial.println("LED Verde ligado !");
    }
    //Caso seja recebido B, acende o led azul
    if (buf == 'b')
    {
      digitalWrite(5, HIGH);
      Serial.println("LED Azul ligado !");
    }
if (buf == 'q')
    {
      digitalWrite(5, LOW);
      Serial.println("LED Azul Desligado !");
    }
  if (buf == 'w')
    {
      digitalWrite(4, LOW);
      Serial.println("LED Verde Desligado !");
    } 
 if (buf == 'e')
    {
      digitalWrite(3, LOW);
      Serial.println("LED Vermelho Desligado !");
    }  
     if (buf == 'j')
    {
       Serial.println("O Sistema ficará ligado por 15 minutos");
      digitalWrite(6, HIGH);
      Serial.flush();
      while(x!=900){
      delay(1000);
       buf = Serial.read();
    if (buf == 'm'){
    x=899;
    Serial.println("Deslingado o circuito");
}
  x++;
}
digitalWrite(6, LOW);
buf='z'; y=0; x=0;
}
        digitalWrite(6, LOW);
      }  
         if (buf == 'k')
    {
       Serial.println("O Sistema ficará ligado por 30 minutos");
      digitalWrite(6, HIGH);
       while(x!=1800){
      delay(1000);
       buf = Serial.read();
    if (buf == 'm'){
    x=1799;
    Serial.println("Deslingado o circuito");
}
  x++;
}
      digitalWrite(6, LOW);
buf='z'; y=0; x=0;
    }  
        if (buf == 'l')
    {
       Serial.println("O Sistema ficará ligado por uma hora");
      digitalWrite(6, HIGH);
 while(x!=3600){
      delay(1000);
       buf = Serial.read();
    if (buf == 'm'){
    x=3599;
    Serial.println("Deslingado o circuito");
}
  x++;
}
      digitalWrite(6, LOW);
     buf='z'; y=0; x=0;
    }  
     if (buf == 'm')
    {
      digitalWrite(6, LOW);
      Serial.println("Lampada Desligada !");
   buf='z'; y=0; x=0;
    } 
    if (buf == 'n')
    {
      digitalWrite(6, HIGH);
      Serial.println("Lampada Ligada !");
     buf='z'; y=0; x=0;
    }  
 
if (buf == 'o')
    {
       Serial.println(y);
        y=Serial.read();
      while(y<1)
      {
        y=Serial.read();
      }
        digitalWrite(6, HIGH);
      Serial.println("Circuito ligado pelo tempo escolhido!");
      Serial.println(y);
      s=(y-48)*60000;
      delay(s);
      Serial.println("Desligando o circuito");
      buf='z'; y=0; x=0;
         digitalWrite(6, LOW);  
    }  
