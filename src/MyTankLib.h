#ifndef MyTank_h
#define MyTank_h MyTank_h

class MyTankClass
{
  
    private:
    int E1; //M1 Speed Control
    int E2; //M2 Speed Control
    int M1; //M1 Direction Control
    int M2; //M2 Direction Control

  public:
    MyTankClass(void);
    void setSpeed(int x);
    void stop();
    void turn90R();
    void turn90L();
    void turnR180();
    void turnL180();
    void turn(int x);  

};

#endif
