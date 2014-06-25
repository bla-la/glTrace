#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexCoord2f_wrp						\
    ((void  (*)(GLenum target,GLfloat s,GLfloat t                                        \
    ))GL_ENTRY_PTR(glMultiTexCoord2f_Idx))


GLAPI void  APIENTRY glMultiTexCoord2f(GLenum target,GLfloat s,GLfloat t)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMultiTexCoord2f_Idx))
	{
            GL_ENTRY_PTR(glMultiTexCoord2f_Idx) = dlsym(RTLD_NEXT,"glMultiTexCoord2f");
            if(!GL_ENTRY_PTR(glMultiTexCoord2f_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMultiTexCoord2f_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexCoord2f_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexCoord2f_wrp(target,s,t);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexCoord2f_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexCoord2f_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexCoord2f_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexCoord2f_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexCoord2f_Idx));
        if(last_diff > 1000000000){
            printf("glMultiTexCoord2f %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord2f_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord2f_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord2f_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord2f_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexCoord2f_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexCoord2f_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexCoord2f_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexCoord2f_Idx) = get_ts();
        }


	

}