#include <glTraceCommon.h>
#include <generated.h>

#define glTexCoord1f_wrp						\
    ((void  (*)(GLfloat s                                        \
    ))GL_ENTRY_PTR(glTexCoord1f_Idx))


GLAPI void  APIENTRY glTexCoord1f(GLfloat s)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glTexCoord1f_Idx))
	{
            GL_ENTRY_PTR(glTexCoord1f_Idx) = dlsym(RTLD_NEXT,"glTexCoord1f");
            if(!GL_ENTRY_PTR(glTexCoord1f_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glTexCoord1f_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexCoord1f_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexCoord1f_wrp(s);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexCoord1f_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexCoord1f_Idx) ++;

        GL_ENTRY_LAST_TS(glTexCoord1f_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexCoord1f_Idx),
				 GL_ENTRY_LAST_TS(glTexCoord1f_Idx));
        if(last_diff > 1000000000){
            printf("glTexCoord1f %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexCoord1f_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoord1f_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoord1f_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexCoord1f_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexCoord1f_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexCoord1f_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexCoord1f_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexCoord1f_Idx) = get_ts();
        }


	

}