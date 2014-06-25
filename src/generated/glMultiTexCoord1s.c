#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexCoord1s_wrp						\
    ((void  (*)(GLenum target,GLshort s                                        \
    ))GL_ENTRY_PTR(glMultiTexCoord1s_Idx))


GLAPI void  APIENTRY glMultiTexCoord1s(GLenum target,GLshort s)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMultiTexCoord1s_Idx))
	{
            GL_ENTRY_PTR(glMultiTexCoord1s_Idx) = dlsym(RTLD_NEXT,"glMultiTexCoord1s");
            if(!GL_ENTRY_PTR(glMultiTexCoord1s_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMultiTexCoord1s_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexCoord1s_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexCoord1s_wrp(target,s);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexCoord1s_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexCoord1s_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexCoord1s_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexCoord1s_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexCoord1s_Idx));
        if(last_diff > 1000000000){
            printf("glMultiTexCoord1s %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord1s_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord1s_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord1s_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord1s_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexCoord1s_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexCoord1s_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexCoord1s_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexCoord1s_Idx) = get_ts();
        }


	

}