void setup() {
  
   Serial.begin(9600);
   randomSeed(analogRead(A0));
}

void loop() {
  String str;
  int num;
  
  Serial.println("Enter number of sides on the die");
  while(str.equals("")){
    str =Serial.readString();
  }

  
  num = str.toInt();


  if ( num > 0){
    num = random(1, num+1);
    Serial.print("You rolled : ");
    Serial.println(num);
     
  }
  
}
