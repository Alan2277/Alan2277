//Licenciatura Plena em Computação(Turma:226)
//Disciplina: Programação Orientada a Objetos
//Alan Alexandre Sampaio
//Atividade 1 - Introdução a Dart

//01//
void main (){
  double salario = 1000;
  double imposto = salario * 0.10;
  double receber = salario - imposto;
  
  print(" Salário = ${salario} \n Imposto = ${imposto} \n Receber = ${receber}");
  
}

//02//
void main(){
  int celsius = 30;
  double fahrenheit = (celsius * 1.8) + 32;
  double kelvin = (fahrenheit + 459.67) / 1.8;
  
  print(" Celsius = ${celsius} \n Fahrenheit = ${fahrenheit} \n Kelvin = ${kelvin}");
}

//03//
void main(){
  int tempo_viagem = 36126;
  int horas = tempo_viagem ~/ 3600;
  int resto = tempo_viagem % 3600;
  int minutos = resto ~/ 60;
  int segundos = resto % 60;
  
  print("${horas}h:${minutos}m:${segundos}s");
  
}

//04//
void main(){
  int valor = 1502;
  
  int cem = valor ~/ 100;
  int resto = valor % 100;
  
  int cinquenta = resto ~/ 50;
  resto = resto % 50;
  
  int vinte = resto ~/ 20;
  resto = resto % 20;
  
  int dez = resto ~/ 10;
  resto = resto % 10;
  
  int cinco = resto ~/ 5;
  resto = resto % 5;
  
  int dois = resto ~/ 2;
  resto = resto % 2;
  
  int um = resto ~/ 1;
  resto = resto % 1;
  
  print(" Nota(s) de 100 = ${cem} \n Nota(s) de 50 = ${cinquenta} \n Nota(s) de 20 = ${vinte} \n Nota(s) de 10 = ${dez} \n Nota(s) de 5 = ${cinco} \n Nota(s) de 2 = ${dois} \n Nota(s) de 1 = ${um} \n ");

}
