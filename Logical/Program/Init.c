
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
#include <AsDefault.h>
#endif

void _INIT ProgramInit(void)
{
	enable = 1;
	counter = 0;
	speed = 0;
	speed_in_rad = 0;
    
	fb_motor.dt=0.002;
	fb_motor.ke=0.00096;
	fb_motor.Tm=0.04;
	fb_motor.integrator.dt = 0.002;
	fb_motor.sensor.dt = 0.002;
    
	fb_motor_2.dt = 0.002;
	fb_motor_2.ke = 0.00096;
	fb_motor_2.Tm = 0.04;
	fb_motor_2.integrator.dt = 0.002;
	fb_motor_2.sensor.dt = 0.002;
    
	fb_controller.dt=0.002;
	fb_controller.k_p = 0.0064;
	fb_controller.k_i = 0.16;
	fb_controller.max_abs_value=24;
	fb_controller.integrator.dt = 0.002;
}


