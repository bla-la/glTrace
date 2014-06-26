#include <glTraceCommon.h>
#include <generated.h>

#define glTexCoord2s_wrp						\
    ((void  (*)(GLshort s,GLshort t                                        \
    ))GL_ENTRY_PTR(glTexCoord2s_Idx))


GLAPI void  APIENTRY glTexCoord2s(GLshort s,GLshort t)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTexCoord2s_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexCoord2s_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexCoord2s_wrp(s,t);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexCoord2s_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexCoord2s_Idx) ++;

        GL_ENTRY_LAST_TS(glTexCoord2s_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexCoord2s_Idx),
				 GL_ENTRY_LAST_TS(glTexCoord2s_Idx));


        if(last_diff > 1000000000){
            printf("glTexCoord2s %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexCoord2s_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoord2s_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoord2s_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexCoord2s_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexCoord2s_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexCoord2s_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexCoord2s_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexCoord2s_Idx) = get_ts();
        }


	

}