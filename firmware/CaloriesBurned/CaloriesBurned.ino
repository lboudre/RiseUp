// Displaying calories burnt during an exercise

double age = 22;
double weight = 75; //kg
double calories = 0; //initialize at 0

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  updateCaloriesBurned();
}

void updateCaloriesBurned(pulse, double time)
{
  calories += (((age*0.2017) + (weight*0.1988) + pulse*0.6309) - 55.0969) * (time/4,184))/2;
}

Serial.print(calories);

// How to make this stop when the exercise is done?
