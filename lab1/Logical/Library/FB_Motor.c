
#include <bur/plctypes.h>
#ifdef __cplusplus
	extern "C"
	{
#endif
#include "Library.h"
#ifdef __cplusplus
	};
#endif
/* MOTOR */
void FB_Motor(struct FB_Motor* inst)
{
	REAL b1 = inst->u * (1/inst->ke) - inst->w;
	REAL b2 = b1/ inst->Tm;
    
	inst->integrator.in = b2;
	FB_Integrator(&inst->integrator);
    
	inst->w = inst->integrator.out;
    
	inst->sensor.in = inst->w;
	FB_Integrator(&inst->sensor);
    
	inst->phi = inst->sensor.out ;
    
    
}

