//Seleccion de pines de los sujetos
const int sujt1 = 4;
const int sujt2 = 5;
//Variables y Constantes para el temporizador y el boton de inicio
const int botoni = 7;
const int A = 8;
const int B = 11;
const int C = 10;
const int D = 9;
const int IN = 6;
int opcion = 0;
//Variables del envio de datos
int s1=0;
int s2=0;

void setup(){
Serial.begin(9600);
pinMode(A,OUTPUT);
pinMode(B,OUTPUT);
pinMode(C,OUTPUT);
pinMode(D,OUTPUT);
pinMode(IN,OUTPUT);
pinMode(botoni,INPUT);
pinMode(sujt1,INPUT);
pinMode(sujt2,INPUT);
}
void loop(){
opcion=digitalRead(botoni);
s1=digitalRead(sujt1);
s2=digitalRead(sujt2);
digitalWrite(IN,LOW);

digitalWrite(A,HIGH);
digitalWrite(B,HIGH);
digitalWrite(C,HIGH);
digitalWrite(D,HIGH);
if(opcion==HIGH){
  if(s1==HIGH){
Serial.println("1724347339");
delay(300);}
if(s2==HIGH ){
Serial.println("1720978822");
delay(300);}
digitalWrite(IN,HIGH);
digitalWrite(A,HIGH);
digitalWrite(B,LOW);
digitalWrite(C,LOW);
digitalWrite(D,HIGH);
delay(1000);
digitalWrite(A,LOW);
digitalWrite(B,LOW);
digitalWrite(C,LOW);
digitalWrite(D,HIGH);
delay(1000);
digitalWrite(A,HIGH);
digitalWrite(B,HIGH);
digitalWrite(C,HIGH);
digitalWrite(D,LOW);
delay(1000);
digitalWrite(A,LOW);
digitalWrite(B,HIGH);
digitalWrite(C,HIGH);
digitalWrite(D,LOW);
delay(1000);
digitalWrite(A,HIGH);
digitalWrite(B,LOW);
digitalWrite(C,HIGH);
digitalWrite(D,LOW);
delay(1000);
digitalWrite(A,LOW);
digitalWrite(B,LOW);
digitalWrite(C,HIGH);
digitalWrite(D,LOW);
delay(1000);
digitalWrite(A,HIGH);
digitalWrite(B,HIGH);
digitalWrite(C,LOW);
digitalWrite(D,LOW);
delay(1000);
digitalWrite(A,LOW);
digitalWrite(B,HIGH);
digitalWrite(C,LOW);
digitalWrite(D,LOW);
delay(1000);
digitalWrite(A,HIGH);
digitalWrite(B,LOW);
digitalWrite(C,LOW);
digitalWrite(D,LOW);
delay(1000);
digitalWrite(A,LOW);
digitalWrite(B,LOW);
digitalWrite(C,LOW);
digitalWrite(D,LOW);
delay(1000);
digitalWrite(IN,LOW);
}

}


