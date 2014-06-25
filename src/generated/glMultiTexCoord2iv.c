#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexCoord2iv_wrp						\
    ((void  (*)(GLenum target,const GLint *v                                        \
    ))GL_ENTRY_PTR(glMultiTexCoord2iv_Idx))


GLAPI void  APIENTRY glMultiTexCoord2iv(GLenum target,const GLint *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMultiTexCoord2iv_Idx))
	{
            GL_ENTRY_PTR(glMultiTexCoord2iv_Idx) = dlsym(RTLD_NEXT,"glMultiTexCoord2iv");
            if(!GL_ENTRY_PTR(glMultiTexCoord2iv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMultiTexCoord2iv_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexCoord2iv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexCoord2iv_wrp(target,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexCoord2iv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexCoord2iv_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexCoord2iv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexCoord2iv_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexCoord2iv_Idx));
        if(last_diff > 1000000000){
            printf("glMultiTexCoord2iv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord2iv_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord2iv_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord2iv_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord2iv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexCoord2iv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexCoord2iv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexCoord2iv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexCoord2iv_Idx) = get_ts();
        }


	

}