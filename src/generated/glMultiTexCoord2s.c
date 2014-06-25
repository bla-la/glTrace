#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexCoord2s_wrp						\
    ((void  (*)(GLenum target,GLshort s,GLshort t                                        \
    ))GL_ENTRY_PTR(glMultiTexCoord2s_Idx))


GLAPI void  APIENTRY glMultiTexCoord2s(GLenum target,GLshort s,GLshort t)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMultiTexCoord2s_Idx))
	{
            GL_ENTRY_PTR(glMultiTexCoord2s_Idx) = dlsym(RTLD_NEXT,"glMultiTexCoord2s");
            if(!GL_ENTRY_PTR(glMultiTexCoord2s_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMultiTexCoord2s_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexCoord2s_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexCoord2s_wrp(target,s,t);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexCoord2s_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexCoord2s_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexCoord2s_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexCoord2s_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexCoord2s_Idx));
        if(last_diff > 1000000000){
            printf("glMultiTexCoord2s %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord2s_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord2s_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord2s_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord2s_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexCoord2s_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexCoord2s_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexCoord2s_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexCoord2s_Idx) = get_ts();
        }


	

}