/*
  Music Player
  
  This program will play a sequence of notes and it will play the
  Super Mario Theme song
  
  Made by: Daniel Roufail
  
  June 15, 2021
  
  Version 1
*/

//Setting my rest frequency
#define rest 0

//Setting the used octave 3 frequency
#define B3 247

//Setting the octave 4 frequencies
#define C4 262
#define Cs4 277
#define D4 294
#define Ds4 311
#define E4 330
#define F4 349
#define Fs4 370
#define G4 392
#define Gs4 415
#define A4 440
#define As4 466
#define B4 494

//Setting the octave 5 frequencies
#define C5 523
#define Cs5 554
#define D5 587
#define Ds5 622
#define E5 659
#define F5 698
#define Fs5 740
#define G5 784
#define Gs5 831
#define A5 880
#define As5 932
#define B5 988

//Constants and Variables

//This is a list of all my used notes in order of which it is played
int notes[] =    
{
  //Bars 1-4
  D5,	D5,	rest,	D5,	rest,	As4,	D5,	rest,		
  F5,	rest,	rest,	F4,	rest,	rest,		
  As4,	rest,	rest,	F4,	rest,	D4,	rest,		
  rest,	G4,	rest,	A4,	rest,	Gs4,	G4,	rest,
    
  //Bars 5-8
  F4,	rest,	D5,	rest,	F5,	rest,	G5,	rest,	Ds5,	F5,		
  rest,	D5,	rest,	As4,	C5,	A4,	rest,		
  As4,	rest,	rest,	F4,	rest,	D4,	rest,		
  rest,	G4,	rest,	A4,	rest,	Gs4,	G4,	rest,
    
  //Bars 9-12
  F4,	rest,	D5,	rest,	F5,	rest,	G5,	rest,	Ds5,	F5,		
  rest,	D5,	rest,	As4,	C5,	A4,	rest,		
  rest,	F5,	E5,	Ds5,	Cs5,	rest,	D5,	
  rest,	Fs4,	G4,	As4,	rest,	G4,	As4,	C5,
    
  //Bars 13-17
  rest,	F5,	E5,	Ds5,	Cs5,	rest,	D5,		
  rest,	B5,	rest,	B5,	B5,	rest,	rest,		
  rest,	F5,	E5,	Ds5,	Cs5,	rest,	D5,		
  rest,	Fs4,	G4,	As4,	rest,	G4,	As4,	C5,		
  rest,	Cs5,	rest,	rest,	C5,	rest,
    
  //Bars 18-22
  As4,	rest,	rest,	rest,		
  rest,	F5,	E5,	Ds5,	Cs5,	rest,	D5,	
  rest,	Fs4,	G4,	As4,	rest,	G4,	As4,	C5,		
  rest,	F5,	E5,	Ds5,	Cs5,	rest,	D5,		
  rest,	B5,	rest,	B5,	B5,	rest,	rest,
    
  //Bars 23-27
  rest,	F5,	E5,	Ds5,	Cs5,	rest,	D5,		
  rest,	Fs4,	G4,	As4,	rest,	G4,	As4,	C5,		
  rest,	Cs5,	rest,	rest,	C5,	rest,		
  As4,	rest,	rest,	rest,		
  As4,	As4,	rest,	As4,	rest,	As4,	C5,	rest,
    
  //Bars 28-33
  D5,	As4,	rest,	G4,	F4,	rest,	rest,		
  As4,	As4,	rest,	As4,	rest,	As4,	C5,	D5,		
  rest,		
  As4,	As4,	rest,	As4,	rest,	As4,	C5,	rest,		
  D5,	As4,	rest,	G4,	F4,	rest,	rest,		
  D5,	D5,	rest,	D5,	rest,	As4,	D5,	rest,
    
  //Bars 34-38
  F5,	rest,	rest,	F4,	rest,	rest,		
  As4,	rest,	rest,	F4,	rest,	D4,	rest,		
  rest,	G4,	rest,	A4,	rest,	Gs4,	G4,	rest,		
  F4,	rest,	D5,	rest,	F5,	rest,	G5,	rest,	Ds5,	F5,		
  rest, F5,	rest,	As4,	C5,	A4,	rest,
    
  //Bars 39-42
  As4,	rest,	rest,	F4,	rest,	D4,	rest,		
  rest,	G4,	rest,	A4,	rest,	Gs4,	G4,	rest,		
  F4,	rest,	D5,	rest,	F5,	rest,	G5,	rest,	Ds5,	F5,		
  rest,	D5,	rest,	As4,	C5,	A4,	rest,
    
  //Bars 43-46
  D5,	As4,	rest,	F4,	rest,	rest,	Fs4,	rest,		
  G4,	Ds5,	rest,	Ds5,	G4,	rest,	rest,	
  A4,	rest,	G5,	rest,	G5,	rest,	G5,	rest,	F5,	rest,	Ds5,	rest,		
  D5,	As4,	rest,	G4,	F4,	rest,	rest,
    
  //Bars 47-50
  D5,	As4,	rest,	F4,	rest,	rest,	Fs4,	rest,		
  G4,	Ds5,	rest,	Ds5,	G4,	rest,	rest,		
  A4,	Ds5,	rest,	Ds5,	Ds5,	rest,	D5,	rest,	C5,	rest,		
  As4,	D4,	rest,	D4,	B3,	rest,	rest,
    
  //Bars 51-54
  D5,	As4,	rest,	F4,	rest,	rest,	Fs4,	rest,		
  G4,	Ds5,	rest,	Ds5,	G4,	rest,	rest,		
  A4,	rest,	G5,	rest,	G5,	rest,	G5,	rest,	F5,	rest,	Ds5,	rest,		
  D5,	As4,	rest,	G4,	F4,	rest,	rest,
    
  //Bars 55-59
  D5,	As4,	rest,	F4,	rest,	rest,	Fs4,	rest,	
  G4,	Ds5,	rest,	Ds5, G4,	rest,	rest,		
  A4,	Ds5,	rest,	Ds5,	Ds5, rest,	D5,	rest,	C5,	rest,		
  As4,	D4,	rest,	D4,	B3,	rest,	rest,		
  As4,	As4,	rest,	As4,	rest,	As4,	C5,	rest,
    
  //Bars 60-65
  D5,	As4,	rest,	G4,	F4,	rest,	rest,		
  As4,	As4,	rest,	As4,	rest,	As4,	C5,	D5,		
  rest,		
  As4,	As4,	rest,	As4,	rest,	As4,	C5,	rest,		
  D5,	As4,	rest,	G4,	F4,	rest,	rest,	
  D5,	D5,	rest,	D5,	rest,	As4,	D5,	rest,
    
  //Bars 66-69
  F5, rest, rest, F4, rest, rest,		
  D5, As4, rest, F4, rest, rest, As4, rest,		
  G4, Ds5, rest, Ds5, G4, rest, rest,		
  A4, rest, G5, rest, G5, rest, G5, rest, F5, rest, Ds5, rest,
    
  //Bars 70-74
  D5, As4, rest, G4, F4, rest, rest,		
  D5, As4, rest, F4, rest, rest, Fs4, rest,		
  G4, Ds5, rest, Ds5, G4, rest, rest,	
  As4, Ds5, rest, Ds5, Ds5, rest, D5, rest, C5, rest,		
  As4, D4, rest, D4, B3, rest, rest,
    
  //Bars 75-79
  A4, Ds5, rest, Ds5, Ds5, rest, D5, rest, C5, rest,		
  As4, rest, F4, rest, D4,		
  G4, A4, G4, Fs4,		
  Gs4, Fs4, F4,		
  F4
};

//This is a list of all my note times in order of each note being played
byte noteTime[] =     
{
  //Bars 1-4
  8,	8,	8,	8,	8,	8,	8,	8,		
  8,	8,	4,	8,	8,	4,		
  8,	8,	8,	8,	4,	8,	8,		
  8,	8,	8,	8,	8,	8,	8,	8,
    
  //Bars 5-8
  8,	8,	8,	8,	8,	8,	8,	8,	8,	8,		
  8,	8,	8,	8,	8,	8,	4,		
  8,	8,	8,	8,	4,	8,	8,		
  8,	8,	8,	8,	8,	8,	8,	8,
    
  //Bars 9-12
  8,	8,	8,	8,	8,	8,	8,	8,	8,	8,		
  8,	8,	8,	8,	8,	8,	4,		
  4,	8,	8,	8,	8,	8,	8,		
  8,	8,	8,	8,	8,	8,	8,	8,
    
  //Bars 13-17
  4,	8,	8,	8,	8,	8,	8,		
  8,	8,	8,	8,	8,	8,	4,		
  4,	8,	8,	8,	8,	8,	8,		
  8,	8,	8,	8,	8,	8,	8,	8,	
  4,	8,	8,	8,	8,	4,
    
  //Bars 18-22
  8,	8,	4,	2,		
  4,	8,	8,	8,	8,	8,	8,		
  8,	8,	8,	8,	8,	8,	8,	8,		
  4,	8,	8,	8,	8,	8,	8,		
  8,	8,	8,	8,	8,	8,	4,
    
  //Bars 23-27
  4,	8,	8,	8,	8,	8,	8,		
  8,	8,	8,	8,	8,	8,	8,	8,		
  4,	8,	8,	8,	8,	4,		
  8,	8,	4,	2,		
  8,	8,	8,	8,	8,	8,	8,	8,
    
  //Bars 28-33
  8,	8,	8,	8,	8,	8,	4,		
  8,	8,	8,	8,	8,	8,	8,	8,	
  1,		
  8,	8,	8,	8,	8,	8,	8,	8,		
  8,	8,	8,	8,	8,	8,	4,		
  8,	8,	8,	8,	8,	8,	8,	8,
    
  //Bars 34-38
  8,	8,	4,	8,	8,	4,		
  8,	8,	8,	8,	4,	8,	8,		
  8,	8,	8,	8,	8,	8,	8,	8,		
  8,	8,	8,	8,	8,	8,	8,	8,	8,	8,		
  8,	8,	8,	8,	8,	8,	4,
    
  //Bars 39-42
  8,	8,	8,	8,	4,	8,	8,		
  8,	8,	8,	8,	8,	8,	8,	8,		
  8,	8,	8,	8,	8,	8,	8,	8,	8,	8,	
  8,	8,	8,	8,	8,	8,	4,
    
  //Bars 43-46
  8,	8,	8,	8,	8,	8,	8,	8,		
  8,	8,	8,	8,	8,	8,	4,		
  8,	8,	8,	8,	8,	8,	8,	8,	8,	8,	8,	8,		
  8,	8,	8,	8,	8,	8,	4,
    
  //Bars 47-50
  8,	8,	8,	8,	8,	8,	8,	8,		
  8,	8,	8,	8,	8,	8,	4,		
  8,	8,	8,	8,	8,	8,	8,	8,	8,	8,	
  8,	8,	8,	8,	8,	8,	4,
    
  //Bars 51-54
  8,	8,	8,	8,	8,	8,	8,	8,		
  8,	8,	8,	8,	8,	8,	8,		
  8,	8,	8,	8,	8,	8,	8,	8,	8,	8,	8,	8,		
  8,	8,	8,	8,	8,	8,	4,
    
  //Bars 55-59
  8,	8,	8,	8,	8,	8,	8,	8,		
  8,	8,	8,	8,	8,	8,	4,		
  8,	8,	8,	8,	8,	8,	8,	8,	8,	8,		
  8,	8,	8,	8,	8,	8,	4,		
  8,	8,	8,	8,	8,	8,	8,	8,
    
  //Bars 60-65
  8,	8,	8,	8,	8,	8,	4,		
  8,	8,	8,	8,	8,	8,	8,	8,		
  1,		
  8,	8,	8,	8,	8,	8,	8,	8,		
  8,	8,	8,	8,	8,	8,	4,		
  8,	8,	8,	8,	8,	8,	8,	8,
    
  //Bars 66-69
  8,	8,	4,	8,	8,	4,		
  8,	8,	8,	8,	8,	8,	8,	8,		
  8,	8,	8,	8,	8,	8,	4,		
  8,	8,	8,	8,	8,	8,	8,	8,	8,	8,	8,	8,
    
  //Bars 70-74
  8,	8,	8,	8,	8,	8,	4,		
  8,	8,	8,	8,	8,	8,	8,	8,		
  8,	8,	8,	8,	8,	8,	4,		
  8,	8,	8,	8,	8,	8,	8,	8,	8,	8,		
  8,	8,	8,	8,	8,	8,	4,
    
  //Bars 75-79
  8,	8,	8,	8,	8,	8,	8,	8,	8,	8,		
  4,	8,	4,	8,	4,		
  4,	4,	4,	4,		
  4,	4,	2,		
  1
};

//This is my index counter
int cycle;           

//This will be used to calculate the duration of each note
int duration;   


//Setting up my program

void setup()
{
  pinMode(12, OUTPUT);        //Sets my piezo to output mode
  
  for(cycle = 0; cycle <= sizeof(noteTime); cycle++)  //cycles through all the notes
   {
     duration = 1000/noteTime[cycle];      //Calculates the duration of each note  
     
     tone(12, notes[cycle], duration);     //Plays each note at the frequency and length provided
    
     delay(duration*1.2);                  //Adds a delay between each note
    
     noTone(12);                           //Turns off the sound
   } 
}


void loop()
{
  //void loop will not be used because we do not need to repeat the song 
}
