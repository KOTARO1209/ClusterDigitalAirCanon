///////////////////////////////////
//ON・OFFの繰り返し
///////////////////////////////////

int Dpin[] = {22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37};
int length_Dpin = (sizeof(Dpin) / sizeof(Dpin[0])); //Dpinの要素数

void setup() {
  for (int i = 0; i < length_Dpin ; i++) {
    pinMode(Dpin[i], OUTPUT);
  }
}

void loop() {
  //int p = 9; //指定ピンのデバック用
  
  for (int i = 0; i < length_Dpin; i++) {
    digitalWrite(Dpin[i], HIGH);
  }
  //digitalWrite(Dpin[p], HIGH);　//指定ピンのデバック用
  delay(500);
  //
  for (int i = 0; i < length_Dpin; i++) {
    digitalWrite(Dpin[i], LOW);
  }
  //digitalWrite(Dpin[p], LOW); //指定ピンのデバック用
  delay(500);
}
