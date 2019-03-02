// ==========================================================================
//
// blink the LED on an Arduino Uno
//
// (c) Wouter van Ooijen (wouter@voti.nl) 2017
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at 
// http://www.boost.org/LICENSE_1_0.txt) 
//
// ==========================================================================

#include "hwlib.hpp"

int main( void ){
    
//! [[Doxygen pin example]]

   auto pin = hwlib::target::pin_out( hwlib::target::pins::led );
   
   // specify a pin by its Arduino pin name
   
//! [[Doxygen pin example]]

   hwlib::blink( pin );
}