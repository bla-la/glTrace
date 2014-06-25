#include <glTraceCommon.h>
#include <generated.h>

#define glTexCoord4s_wrp						\
    ((void  (*)(GLshort s,GLshort t,GLshort r,GLshort q                                        \
    ))GL_ENTRY_PTR(glTexCoord4s_Idx))


GLAPI void  APIENTRY glTexCoord4s(GLshort s,GLshort t,GLshort r,GLshort q)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glTexCoord4s_Idx))
	{
            GL_ENTRY_PTR(glTexCoord4s_Idx) = dlsym(RTLD_NEXT,"glTexCoord4s");
            if(!GL_ENTRY_PTR(glTexCoord4s_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glTexCoord4s_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexCoord4s_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexCoord4s_wrp(s,t,r,q);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexCoord4s_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexCoord4s_Idx) ++;

        GL_ENTRY_LAST_TS(glTexCoord4s_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexCoord4s_Idx),
				 GL_ENTRY_LAST_TS(glTexCoord4s_Idx));
        if(last_diff > 1000000000){
            printf("glTexCoord4s %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexCoord4s_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoord4s_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoord4s_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexCoord4s_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexCoord4s_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexCoord4s_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexCoord4s_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexCoord4s_Idx) = get_ts();
        }


	

}