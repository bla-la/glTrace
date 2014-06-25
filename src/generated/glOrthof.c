#include <glTraceCommon.h>
#include <generated.h>

#define glOrthof_wrp						\
    ((void  (*)(GLfloat l,GLfloat r,GLfloat b,GLfloat t,GLfloat n,GLfloat f                                        \
    ))GL_ENTRY_PTR(glOrthof_Idx))


GLAPI void  APIENTRY glOrthof(GLfloat l,GLfloat r,GLfloat b,GLfloat t,GLfloat n,GLfloat f)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glOrthof_Idx))
	{
            GL_ENTRY_PTR(glOrthof_Idx) = dlsym(RTLD_NEXT,"glOrthof");
            if(!GL_ENTRY_PTR(glOrthof_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glOrthof_Idx))
    	{
            GL_ENTRY_PREV_TS(glOrthof_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glOrthof_wrp(l,r,b,t,n,f);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glOrthof_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glOrthof_Idx) ++;

        GL_ENTRY_LAST_TS(glOrthof_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glOrthof_Idx),
				 GL_ENTRY_LAST_TS(glOrthof_Idx));
        if(last_diff > 1000000000){
            printf("glOrthof %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glOrthof_Idx),
	             GL_ENTRY_CALL_TIME(glOrthof_Idx),
	             GL_ENTRY_CALL_TIME(glOrthof_Idx) /
	             GL_ENTRY_CALL_COUNT(glOrthof_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glOrthof_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glOrthof_Idx) = 0;
             GL_ENTRY_CALL_TIME(glOrthof_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glOrthof_Idx) = get_ts();
        }


	

}