#include <glTraceCommon.h>
#include <generated.h>

#define glTexCoord1s_wrp						\
    ((void  (*)(GLshort s                                        \
    ))GL_ENTRY_PTR(glTexCoord1s_Idx))


GLAPI void  APIENTRY glTexCoord1s(GLshort s)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTexCoord1s_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexCoord1s_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexCoord1s_wrp(s);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexCoord1s_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexCoord1s_Idx) ++;

        GL_ENTRY_LAST_TS(glTexCoord1s_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexCoord1s_Idx),
				 GL_ENTRY_LAST_TS(glTexCoord1s_Idx));


        if(last_diff > 1000000000){
            printf("glTexCoord1s %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexCoord1s_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoord1s_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoord1s_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexCoord1s_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexCoord1s_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexCoord1s_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexCoord1s_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexCoord1s_Idx) = get_ts();
        }


	

}