SOUND soundA;
SOUND soundB;

#define SOUND_FREQ 11025

void setupSounds();
void playSoundA(const unsigned char* sound, int length, int loops);
void playSoundB(const unsigned char* sound, int length, int loops);

void setupInterrupts();
void interruptHandler();

void pauseSound();
void unpauseSound();
void stopSound();
