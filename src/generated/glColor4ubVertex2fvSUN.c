#include <glTraceCommon.h>
#include <generated.h>

#define glColor4ubVertex2fvSUN_wrp						\
    ((void  (*)(const GLubyte *c,const GLfloat *v                                        \
    ))GL_ENTRY_PTR(glColor4ubVertex2fvSUN_Idx))


GLAPI void  APIENTRY glColor4ubVertex2fvSUN(const GLubyte *c,const GLfloat *v)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glColor4ubVertex2fvSUN_Idx))
    	{
            GL_ENTRY_PREV_TS(glColor4ubVertex2fvSUN_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glColor4ubVertex2fvSUN_wrp(c,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glColor4ubVertex2fvSUN_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glColor4ubVertex2fvSUN_Idx) ++;

        GL_ENTRY_LAST_TS(glColor4ubVertex2fvSUN_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glColor4ubVertex2fvSUN_Idx),
				 GL_ENTRY_LAST_TS(glColor4ubVertex2fvSUN_Idx));


        if(last_diff > 1000000000){
            printf("glColor4ubVertex2fvSUN %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glColor4ubVertex2fvSUN_Idx),
	             GL_ENTRY_CALL_TIME(glColor4ubVertex2fvSUN_Idx),
	             GL_ENTRY_CALL_TIME(glColor4ubVertex2fvSUN_Idx) /
	             GL_ENTRY_CALL_COUNT(glColor4ubVertex2fvSUN_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glColor4ubVertex2fvSUN_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glColor4ubVertex2fvSUN_Idx) = 0;
             GL_ENTRY_CALL_TIME(glColor4ubVertex2fvSUN_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glColor4ubVertex2fvSUN_Idx) = get_ts();
        }


	

}