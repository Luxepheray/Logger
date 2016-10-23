#include "WPILib.h"


class Robot : public IterativeRobot{
private:
    CANTalon *frontLeft, *frontRight, *rearLeft, *rearRight, *lift;
    Joystick* joy;
    RobotDrive* drive;
    DigitalInput *LimitSwitch;
    Ultrasonic* ultra;
    AnalogGyro* gyro;
robotInit(){
    frontLeft = new CANTalon(0);
    frontRight = new CANTalon(1);
    rearLeft= new CANTalon(2);
    rearRight = new CANTalon(3);
    lift = new CANTalon(4);
    joy = new Joystick(0);
    drive = new RobotDrive(frontLeft,rearLeft,frontRight,rearRight);
    LimitSwitch = new DigitalInput(0);
    ultra= new Ultrasonic (1,2);
    gyro = new AnalogGyro(3);
}
teleopPeriodic(){
double leftside = joy->GetRawAxis(1);
double rightside = joy->GetRawAxis(5);
drive->TankDrive(leftside,rightside);
LimitSwitch-> Get();
ultra->SetAutomaticMode(true);
int range = ultra->GetRangeInches();
if (ultra == 20){
lift->Set(-1);
}
float angle = gyro->GetAngle();
if(angle == 10){
drive->(-0.5);
}
}
};

START_ROBOT_CLASS(Robot);


