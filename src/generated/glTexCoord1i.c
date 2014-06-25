#include <glTraceCommon.h>
#include <generated.h>

#define glTexCoord1i_wrp						\
    ((void  (*)(GLint s                                        \
    ))GL_ENTRY_PTR(glTexCoord1i_Idx))


GLAPI void  APIENTRY glTexCoord1i(GLint s)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glTexCoord1i_Idx))
	{
            GL_ENTRY_PTR(glTexCoord1i_Idx) = dlsym(RTLD_NEXT,"glTexCoord1i");
            if(!GL_ENTRY_PTR(glTexCoord1i_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glTexCoord1i_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexCoord1i_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexCoord1i_wrp(s);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexCoord1i_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexCoord1i_Idx) ++;

        GL_ENTRY_LAST_TS(glTexCoord1i_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexCoord1i_Idx),
				 GL_ENTRY_LAST_TS(glTexCoord1i_Idx));
        if(last_diff > 1000000000){
            printf("glTexCoord1i %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexCoord1i_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoord1i_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoord1i_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexCoord1i_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexCoord1i_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexCoord1i_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexCoord1i_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexCoord1i_Idx) = get_ts();
        }


	

}