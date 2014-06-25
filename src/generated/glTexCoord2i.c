#include <glTraceCommon.h>
#include <generated.h>

#define glTexCoord2i_wrp						\
    ((void  (*)(GLint s,GLint t                                        \
    ))GL_ENTRY_PTR(glTexCoord2i_Idx))


GLAPI void  APIENTRY glTexCoord2i(GLint s,GLint t)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glTexCoord2i_Idx))
	{
            GL_ENTRY_PTR(glTexCoord2i_Idx) = dlsym(RTLD_NEXT,"glTexCoord2i");
            if(!GL_ENTRY_PTR(glTexCoord2i_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glTexCoord2i_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexCoord2i_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexCoord2i_wrp(s,t);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexCoord2i_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexCoord2i_Idx) ++;

        GL_ENTRY_LAST_TS(glTexCoord2i_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexCoord2i_Idx),
				 GL_ENTRY_LAST_TS(glTexCoord2i_Idx));
        if(last_diff > 1000000000){
            printf("glTexCoord2i %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexCoord2i_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoord2i_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoord2i_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexCoord2i_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexCoord2i_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexCoord2i_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexCoord2i_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexCoord2i_Idx) = get_ts();
        }


	

}