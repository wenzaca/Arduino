 int carVermelho = 1; //define o pino 1 como carVermelho
 int carAmarelo =2; //define o pino 2 como carAmarelo
 int carVerde = 3; //define o pino 3 como carVerde
 int pedVermelho = 6; //define o pino 6 como pedVermelho
 int pedVerde =7; //define o pino 7 como pedVerde
 int botao = 9;  //define o pino 9 como botão
 int tempo_atrav=7000; /*declara uma variável chamada temp_atrav e atribui o valor 5000 para ela*/
 unsigned long tempo_mudar; //declara uma variável chamada tempo_mudar

 void setup()
 {
 
  //define os pinos de entrada e saída
 pinMode(carVermelho,OUTPUT);
 pinMode(carAmarelo,OUTPUT);
 pinMode(carVerde,OUTPUT);
 pinMode(pedVermelho,OUTPUT);
 pinMode(pedVerde,OUTPUT);
 pinMode(botao,INPUT);

  digitalWrite(carVerde,HIGH); //ascende o LED verde do carro
  digitalWrite(pedVermelho,HIGH); //ascende o LED vermelho do pedestre
 }

 void loop()
 {
 int estado = digitalRead (botao); //lê o botão e coloca 0 ou 1 em estado
 if(estado == HIGH && (millis() - tempo_mudar) > 10000) /*compara se o botão foi pressionado e se passou 10 segundos desde da ultima mudança de estado do semaforo do carro*/
  {
  delay(2000);
  mudarluz(); //executa a função mudarluz
  } 
 }
 
  void mudarluz() {
  digitalWrite (carVerde,LOW); //verde do carro acesso
  delay (500);
  digitalWrite (carAmarelo,HIGH); //amarelo do carro apagado
  delay(3000); //tempo de 3 segundos
  
   digitalWrite(carAmarelo,LOW); //amarelo do carro apagado
   digitalWrite(carVermelho,HIGH); //vermelho do carro acesso
   delay(1000); //tempo de 1 segundo
  
   digitalWrite(pedVermelho,LOW); //vermelho do pedestre apagado
   digitalWrite(pedVerde,HIGH); //verde do pedestre acesso
   delay(tempo_atrav); //tempo de 5 segundos
  
   for(int x=0;x<=5;x++) //faz o verde do pedestre piscar
   {
     digitalWrite(pedVerde,HIGH); //verde do pedestre acesso
     delay(750); // tempo de 750 mili segundos
     digitalWrite(pedVerde,LOW); //verde do pedestre apagado
     delay(750);  //tempo de 750 mili segundos
   }
  
   digitalWrite(pedVermelho,HIGH); //vermelho do pedestre acesso
   delay(500); //tempo de 500 mili segundos
  
   
   digitalWrite(carVermelho,LOW); //vermelho do carro apagado
   digitalWrite(carVerde,HIGH); //verde do carro acesso
   digitalWrite(carAmarelo,LOW); //amarelo do carro apagado
  
   tempo_mudar=millis(); /*tempo_mudar igual ao tempo deccorido do programa em mili segundos*/
 }
