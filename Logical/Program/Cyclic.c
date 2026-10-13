#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
#include <AsDefault.h>
#endif

void _CYCLIC ProgramCyclic(void)
{
	REAL PI = 3.141592653589793;
	REAL desired_w = speed * 2.0 * PI / 60.0;
	speed_in_rad = desired_w;

	if (enable == 1){
		counter += 1;
		if ((counter >= 500 ) && (counter <= 1000)) speed = 70;
		else speed = 0;
	}
	else speed = 0;
    
	fb_controller.e = desired_w - fb_motor.w;
	FB_Regulator(&fb_controller);
	fb_motor.u = fb_controller.u;
    
	fb_motor_2.u = desired_w * fb_motor_2.ke;
    
	FB_Motor(&fb_motor);
	FB_Motor(&fb_motor_2);
    
}

	

