#include <glTraceCommon.h>
#include <generated.h>

#define glTexCoord1xvOES_wrp						\
    ((void  (*)(const GLfixed *coords                                        \
    ))GL_ENTRY_PTR(glTexCoord1xvOES_Idx))


GLAPI void  APIENTRY glTexCoord1xvOES(const GLfixed *coords)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glTexCoord1xvOES_Idx))
	{
            GL_ENTRY_PTR(glTexCoord1xvOES_Idx) = dlsym(RTLD_NEXT,"glTexCoord1xvOES");
            if(!GL_ENTRY_PTR(glTexCoord1xvOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glTexCoord1xvOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexCoord1xvOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexCoord1xvOES_wrp(coords);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexCoord1xvOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexCoord1xvOES_Idx) ++;

        GL_ENTRY_LAST_TS(glTexCoord1xvOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexCoord1xvOES_Idx),
				 GL_ENTRY_LAST_TS(glTexCoord1xvOES_Idx));
        if(last_diff > 1000000000){
            printf("glTexCoord1xvOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexCoord1xvOES_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoord1xvOES_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoord1xvOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexCoord1xvOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexCoord1xvOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexCoord1xvOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexCoord1xvOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexCoord1xvOES_Idx) = get_ts();
        }


	

}