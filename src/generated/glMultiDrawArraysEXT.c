#include <glTraceCommon.h>
#include <generated.h>

#define glMultiDrawArraysEXT_wrp						\
    ((void  (*)(GLenum mode,const GLint *first,const GLsizei *count,GLsizei primcount                                        \
    ))GL_ENTRY_PTR(glMultiDrawArraysEXT_Idx))


GLAPI void  APIENTRY glMultiDrawArraysEXT(GLenum mode,const GLint *first,const GLsizei *count,GLsizei primcount)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMultiDrawArraysEXT_Idx))
	{
            GL_ENTRY_PTR(glMultiDrawArraysEXT_Idx) = dlsym(RTLD_NEXT,"glMultiDrawArraysEXT");
            if(!GL_ENTRY_PTR(glMultiDrawArraysEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMultiDrawArraysEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiDrawArraysEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiDrawArraysEXT_wrp(mode,first,count,primcount);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiDrawArraysEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiDrawArraysEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiDrawArraysEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiDrawArraysEXT_Idx),
				 GL_ENTRY_LAST_TS(glMultiDrawArraysEXT_Idx));
        if(last_diff > 1000000000){
            printf("glMultiDrawArraysEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiDrawArraysEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMultiDrawArraysEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMultiDrawArraysEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiDrawArraysEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiDrawArraysEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiDrawArraysEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiDrawArraysEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiDrawArraysEXT_Idx) = get_ts();
        }


	

}