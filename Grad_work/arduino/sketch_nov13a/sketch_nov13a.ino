void setup()
{
     // シリアルモニターの初期化をする
     pinMode(13,OUTPUT);
     Serial.begin(9600) ;
}
void loop()
{
     int i ;
     int val;
     
     // 各データを100回読込んで平均化する
     val = 0 ;
     digitalWrite(13,LOW);
     for (i=0 ; i < 100 ; i++) {
          val = val + analogRead(0);
          Serial.print("one:") ;
          Serial.print(val) ;
          Serial.print("\n") ;
     }
     val = val / 100;
     // 読み込んだ各軸をそのまま表示する
     Serial.print(" Value:\n") ;
     Serial.print(val) ;
     digitalWrite(13,HIGH);
     
     delay(5000) ;
}
