
#include <Arduino.h>
#include "input.h"

char opto_states[ NUMBER_OF_INPUTS ];

void init_inputs() {
  
  pinMode( INPUT_1, INPUT );
  pinMode( INPUT_2, INPUT );

  
}

void get_inputs( char * states ) {


  states[ 0 ] = ( digitalRead( INPUT_2 ) ) ? '0' : '1';
  states[ 1 ] = ( digitalRead( INPUT_1 ) ) ? '0' : '1';
  states[ 2 ] = '\0';
  
}
