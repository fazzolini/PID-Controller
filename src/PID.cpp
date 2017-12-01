#include <iostream>
#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
  // Set default time interval to 1
  dt = 1;

  // Set parameters first
  PID::Kp = Kp;
  PID::Ki = Ki;
  PID::Kd = Kd;

  // Initialize errors
  p_error = 0;
  i_error = 0;
  d_error = 0;
}

void PID::UpdateError(double cte) {
}

double PID::TotalError() {
}

