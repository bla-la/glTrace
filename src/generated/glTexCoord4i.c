#include <glTraceCommon.h>
#include <generated.h>

#define glTexCoord4i_wrp						\
    ((void  (*)(GLint s,GLint t,GLint r,GLint q                                        \
    ))GL_ENTRY_PTR(glTexCoord4i_Idx))


GLAPI void  APIENTRY glTexCoord4i(GLint s,GLint t,GLint r,GLint q)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glTexCoord4i_Idx))
	{
            GL_ENTRY_PTR(glTexCoord4i_Idx) = dlsym(RTLD_NEXT,"glTexCoord4i");
            if(!GL_ENTRY_PTR(glTexCoord4i_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glTexCoord4i_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexCoord4i_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexCoord4i_wrp(s,t,r,q);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexCoord4i_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexCoord4i_Idx) ++;

        GL_ENTRY_LAST_TS(glTexCoord4i_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexCoord4i_Idx),
				 GL_ENTRY_LAST_TS(glTexCoord4i_Idx));
        if(last_diff > 1000000000){
            printf("glTexCoord4i %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexCoord4i_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoord4i_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoord4i_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexCoord4i_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexCoord4i_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexCoord4i_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexCoord4i_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexCoord4i_Idx) = get_ts();
        }


	

}