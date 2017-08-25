void displayAllNew()
{
    if(micros()-micros_old > DELAY_TIME)
  {
    #ifdef DEBUG
      delta1 = micros() - micros_old;
    #endif
    
    a.apply();
    select++;
    if(select >= DISPLAY_WIDTH)
      select = 0;
    a.load(select);
    
    #ifdef DEBUG
      delta2 = micros() - micros_old;
    #endif
    
    micros_old = micros();
  }
  #ifdef DEBUG
    if(delta1 > 0 && delta2 > 0)
    {
      Serial.print("delta1 = ");
      Serial.println(delta1);
      Serial.print("delta2 = ");
      Serial.println(delta2);
      Serial.print("a.render takes ");
      Serial.println(delta2 - delta1);
      Serial.println("\n\n");
      delta1 = 0;
      delta2 = 0;
    }
  #endif
}

void turn()
{
  micros_duration_turn = (micros() - micros_begin_last_turn) * SIGNALS_PER_TURN;
  #ifdef DEBUG
    Serial.println("Interrupt!!!!!!!!");
    Serial.print("micros_duration_turn = ");
    Serial.println(micros_duration_turn);
  #endif
  micros_begin_last_turn = micros();
  select = 0;
}

void setupInterrupt()
{
  #ifdef DEBUG
    Serial.println("Setting up Interrupt");
  #endif
  pinMode(MAGNET_PIN, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(MAGNET_PIN), turn, FALLING);
}
void loopInterrupt()
{
  #ifdef DEBUG
    Serial.println();
    Serial.println("loopInterrupt called");
    Serial.print("micros() = "),
    Serial.println(micros());
    Serial.print("micros_old = ");
    Serial.println(micros_old);
    Serial.print("micros_duration_turn = ");
    Serial.println(micros_duration_turn);
    Serial.print("(micros_duration_turn/(TURNS_PER_SECOND*DISPLAY_WIDTH)) = ");
    Serial.println((micros_duration_turn/(TURNS_PER_SECOND*DISPLAY_WIDTH)));
    Serial.print("micros() - micros_old    = ");
    Serial.println(micros() - micros_old);
  #endif
  if(micros() - micros_old >= (micros_duration_turn/(TURNS_PER_SECOND*DISPLAY_WIDTH)))
  {
    #ifdef DEBUG
      Serial.println("Rendering");
    #endif
    micros_old = micros();
    a.apply();
    if(select == (DISPLAY_WIDTH-1))
      select = 0;
    else
      select++;
    #ifdef DEBUG
      Serial.print("select = ");
      Serial.println(select);
    #endif
    a.load(select);
  }
}
