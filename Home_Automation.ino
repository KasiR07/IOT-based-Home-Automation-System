char data = 0;
void setup () {

    Serial.begin(9600);
    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(11, OUTPUT);
}
void loop () {
    if (Serial.available() > 0) {
        data = Serial.read();
    if (data == 'A')
        digitalWrite(8, HIGH);
    else if (data == 'a')
        digitalWrite(8, LOW);
    if (data == 'B')
        digitalWrite(9, HIGH);
    else if (data == 'b')
        digitalWrite(9, LOW);
    if (data == 'C')
        digitalWrite(10, HIGH);
    else if (data == 'c')
        digitalWrite(10, LOW);
    if (data == 'D')
        digitalWrite(11, HIGH);
    else if (data == 'd')
        digitalWrite(11, LOW);
    if (data == '@') {
        digitalWrite(8, HIGH);
        digitalWrite(9, HIGH);
        digitalWrite(10, HIGH);
        digitalWrite(11, HIGH);
         }
    else if (data == '#') {
        digitalWrite(8, LOW);
        digitalWrite(9, LOW);
        digitalWrite(10, LOW);
        digitalWrite(11, LOW);
         }
    }
}
