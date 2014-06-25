#include <glTraceCommon.h>
#include <generated.h>

#define glOrthofOES_wrp						\
    ((void  (*)(GLfloat l,GLfloat r,GLfloat b,GLfloat t,GLfloat n,GLfloat f                                        \
    ))GL_ENTRY_PTR(glOrthofOES_Idx))


GLAPI void  APIENTRY glOrthofOES(GLfloat l,GLfloat r,GLfloat b,GLfloat t,GLfloat n,GLfloat f)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glOrthofOES_Idx))
	{
            GL_ENTRY_PTR(glOrthofOES_Idx) = dlsym(RTLD_NEXT,"glOrthofOES");
            if(!GL_ENTRY_PTR(glOrthofOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glOrthofOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glOrthofOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glOrthofOES_wrp(l,r,b,t,n,f);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glOrthofOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glOrthofOES_Idx) ++;

        GL_ENTRY_LAST_TS(glOrthofOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glOrthofOES_Idx),
				 GL_ENTRY_LAST_TS(glOrthofOES_Idx));
        if(last_diff > 1000000000){
            printf("glOrthofOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glOrthofOES_Idx),
	             GL_ENTRY_CALL_TIME(glOrthofOES_Idx),
	             GL_ENTRY_CALL_TIME(glOrthofOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glOrthofOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glOrthofOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glOrthofOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glOrthofOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glOrthofOES_Idx) = get_ts();
        }


	

}