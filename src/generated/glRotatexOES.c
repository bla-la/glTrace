#include <glTraceCommon.h>
#include <generated.h>

#define glRotatexOES_wrp						\
    ((void  (*)(GLfixed angle,GLfixed x,GLfixed y,GLfixed z                                        \
    ))GL_ENTRY_PTR(glRotatexOES_Idx))


GLAPI void  APIENTRY glRotatexOES(GLfixed angle,GLfixed x,GLfixed y,GLfixed z)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glRotatexOES_Idx))
	{
            GL_ENTRY_PTR(glRotatexOES_Idx) = dlsym(RTLD_NEXT,"glRotatexOES");
            if(!GL_ENTRY_PTR(glRotatexOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glRotatexOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glRotatexOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glRotatexOES_wrp(angle,x,y,z);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glRotatexOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glRotatexOES_Idx) ++;

        GL_ENTRY_LAST_TS(glRotatexOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glRotatexOES_Idx),
				 GL_ENTRY_LAST_TS(glRotatexOES_Idx));
        if(last_diff > 1000000000){
            printf("glRotatexOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glRotatexOES_Idx),
	             GL_ENTRY_CALL_TIME(glRotatexOES_Idx),
	             GL_ENTRY_CALL_TIME(glRotatexOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glRotatexOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glRotatexOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glRotatexOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glRotatexOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glRotatexOES_Idx) = get_ts();
        }


	

}