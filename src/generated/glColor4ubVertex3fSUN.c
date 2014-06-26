#include <glTraceCommon.h>
#include <generated.h>

#define glColor4ubVertex3fSUN_wrp						\
    ((void  (*)(GLubyte r,GLubyte g,GLubyte b,GLubyte a,GLfloat x,GLfloat y,GLfloat z                                        \
    ))GL_ENTRY_PTR(glColor4ubVertex3fSUN_Idx))


GLAPI void  APIENTRY glColor4ubVertex3fSUN(GLubyte r,GLubyte g,GLubyte b,GLubyte a,GLfloat x,GLfloat y,GLfloat z)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glColor4ubVertex3fSUN_Idx))
    	{
            GL_ENTRY_PREV_TS(glColor4ubVertex3fSUN_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glColor4ubVertex3fSUN_wrp(r,g,b,a,x,y,z);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glColor4ubVertex3fSUN_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glColor4ubVertex3fSUN_Idx) ++;

        GL_ENTRY_LAST_TS(glColor4ubVertex3fSUN_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glColor4ubVertex3fSUN_Idx),
				 GL_ENTRY_LAST_TS(glColor4ubVertex3fSUN_Idx));


        if(last_diff > 1000000000){
            printf("glColor4ubVertex3fSUN %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glColor4ubVertex3fSUN_Idx),
	             GL_ENTRY_CALL_TIME(glColor4ubVertex3fSUN_Idx),
	             GL_ENTRY_CALL_TIME(glColor4ubVertex3fSUN_Idx) /
	             GL_ENTRY_CALL_COUNT(glColor4ubVertex3fSUN_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glColor4ubVertex3fSUN_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glColor4ubVertex3fSUN_Idx) = 0;
             GL_ENTRY_CALL_TIME(glColor4ubVertex3fSUN_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glColor4ubVertex3fSUN_Idx) = get_ts();
        }


	

}