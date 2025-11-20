const int pwmPin = 9;

const int minPWM = 0;
const int maxPWM = 20;
const int minDuration = 10;
const int maxDuration = 50;
int idleDelay = 300;

void setup() {
  pinMode(pwmPin, OUTPUT);
  randomSeed(analogRead(0));
}

void loop() {
  int pwmValue = random(minPWM, maxPWM + 1);
  int spikeDuration = random(minDuration, maxDuration + 1);
  idleDelay = random(2 * minDuration, 5 * maxDuration + 1);

  analogWrite(pwmPin, pwmValue);
  delay(spikeDuration);

  analogWrite(pwmPin, 0);
  delay(idleDelay);
}
