
// LED Pin 13
int led = 13;

void setup() {                
  pinMode(led, OUTPUT);     
}

void dot()
{
  digitalWrite(led, HIGH); 
  delay(1000); 
  digitalWrite(led, LOW); 
  delay(1000);
}

void dash() 
{
  digitalWrite(led, HIGH); 
  delay(2000); 
  digitalWrite(led, LOW); 
  delay(800);  
} 

void space() //space between letters
{
  digitalWrite(led, LOW); 
  delay(1000); 
} 

void pause() //space between words
{
  digitalWrite(led, LOW); 
  delay(5000); 
} 

void A() 
{ dot(); dash(); space(); 
} 

void B()
{ dash(); dot(); dot(); dot(); space(); 
}

void C()
{ dash(); dot(); dash(); dot(); space(); 
}

void D()
{ dash(); dot(); dot(); space(); 
} 

void E() 
{ dot(); space();
}

void f() 
{ dot(); dot(); dash(); dot(); space(); 
}

void G()
{ dash(); dash(); dot(); space();
} 

void H()
{ dot(); dot(); dot(); dot(); space(); 
}

void I()
{ dot(); dot(); space(); 
} 

void J()
{ dot(); dash(); dash(); dash(); space(); 
}

void K()
{ dash(); dot(); dash(); space(); 
}

void L()
{ dot(); dash(); dot(); dot(); space(); 
}

void M()
{ dash(); dash(); space(); 
}

void N() 
{ dash(); dot(); space(); 
}

void O()
{ dash(); dash(); dash(); space();
} 

void P()
{ dot(); dash(); dash(); dot(); space(); 
}

void Q() 
{ dash(); dash(); dot(); dash(); space(); 
} 

void R()
{ dot(); dash(); dot(); space();
}

void S()
{ dot(); dot(); dot(); space(); 
}

void T()
{ dash(); space(); 
}

void U() 
{ dot(); dot(); dash(); space();
}

void V()
{ dot(); dot(); dot(); dash(); space(); 
} 

void W() 
{ dot(); dash(); dash(); space(); 
} 

void X()
{ dash(); dot(); dot(); dash(); space(); 
} 

void Y()
{ dash(); dot(); dash(); dash(); space(); 
} 

void Z()
{ dash(); dash(); dot(); dot(); space(); 
} 

  

void loop()
{
   W(); H(); A(); T(); pause(); H(); A(); T(); H(); pause(); G(); O(); D(); pause(); W(); R(); O(); U(); G(); H(); T(); pause(); pause(); 
        
       
        
}
