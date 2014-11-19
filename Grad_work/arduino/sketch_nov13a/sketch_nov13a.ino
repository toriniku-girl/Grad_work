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
     int x,y,z;
     x = y = z = 0;
     // 各データを100回読込んで平均化する
     val = 0 ;
     digitalWrite(13,HIGH);
     for (i=0 ; i < 100 ; i++) {
          x = x + analogRead(5);
          y = y + analogRead(4);
          z = z + analogRead(3);
          val = val + analogRead(0);
          //Serial.print("one:") ;
          //Serial.print(val) ;
          //Serial.print("\n") ;
     }
     val = val / 100;
     x = x / 100;
     y = y / 100;
     z = z / 100;
     // 読み込んだ各軸をそのまま表示する
     Serial.print(" Value:") ;
     Serial.print(val) ;
     Serial.print("\n") ;
     
     Serial.print("X:") ;
     Serial.print(x) ;
     Serial.print("Y:") ;
     Serial.print(y) ;
     Serial.print("Z:") ;
     Serial.print(z) ;
     Serial.print("\n") ; 
     digitalWrite(13,LOW);
     
     delay(5000) ;
}
