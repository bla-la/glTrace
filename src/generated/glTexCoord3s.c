#include <glTraceCommon.h>
#include <generated.h>

#define glTexCoord3s_wrp						\
    ((void  (*)(GLshort s,GLshort t,GLshort r                                        \
    ))GL_ENTRY_PTR(glTexCoord3s_Idx))


GLAPI void  APIENTRY glTexCoord3s(GLshort s,GLshort t,GLshort r)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glTexCoord3s_Idx))
	{
            GL_ENTRY_PTR(glTexCoord3s_Idx) = dlsym(RTLD_NEXT,"glTexCoord3s");
            if(!GL_ENTRY_PTR(glTexCoord3s_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glTexCoord3s_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexCoord3s_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexCoord3s_wrp(s,t,r);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexCoord3s_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexCoord3s_Idx) ++;

        GL_ENTRY_LAST_TS(glTexCoord3s_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexCoord3s_Idx),
				 GL_ENTRY_LAST_TS(glTexCoord3s_Idx));
        if(last_diff > 1000000000){
            printf("glTexCoord3s %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexCoord3s_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoord3s_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoord3s_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexCoord3s_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexCoord3s_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexCoord3s_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexCoord3s_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexCoord3s_Idx) = get_ts();
        }


	

}