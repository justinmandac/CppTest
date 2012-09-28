#define SAMPLES 80

struct inputBuffer {
  long 	 timestamp;
  double inX[SAMPLES];
  double inY[SAMPLES];
  double inZ[SAMPLES];
};
