String Color;
int Green = 8;
int Red = 9;
int Blue = 10;

void setup() {
  Serial.begin(9600);
  pinMode(Red, OUTPUT);
  pinMode(Green, OUTPUT);
  pinMode(Blue, OUTPUT);
}

void loop() {
  if(Serial.available()){
    Color = Serial.readStringUntil('\n');
    if(Color == "Off"){
      digitalWrite(Blue, LOW);
      digitalWrite(Red, LOW);
      digitalWrite(Green, LOW);
    }
    if(Color == "Blue"){
      digitalWrite(Blue, HIGH);
      digitalWrite(Green, LOW);
      digitalWrite(Red, LOW);
    }
    if(Color == "Green"){
      digitalWrite(Blue, LOW);
      digitalWrite(Green, HIGH);
      digitalWrite(Red, LOW);
    }
    if(Color == "Red"){
      digitalWrite(Blue, LOW);
      digitalWrite(Green, LOW);
      digitalWrite(Red, HIGH);
    }
    if(Color == "Purple"){
      digitalWrite(Blue, HIGH);
      digitalWrite(Green, LOW);
      digitalWrite(Red, HIGH);
    }
    if(Color == "Turquise"){
      digitalWrite(Blue, HIGH);
      digitalWrite(Green, HIGH);
      digitalWrite(Red, LOW);
    }
    if(Color == "Yellow"){
      digitalWrite(Blue, LOW);
      digitalWrite(Green, HIGH);
      digitalWrite(Red, HIGH);
    }
    if(Color == "White"){
      digitalWrite(Blue, HIGH);
      digitalWrite(Red, HIGH);
      digitalWrite(Green, HIGH);
    }
    
  }
}
