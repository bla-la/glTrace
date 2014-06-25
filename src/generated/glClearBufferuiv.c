#include <glTraceCommon.h>
#include <generated.h>

#define glClearBufferuiv_wrp						\
    ((void  (*)(GLenum buffer,GLint drawbuffer,const GLuint *value                                        \
    ))GL_ENTRY_PTR(glClearBufferuiv_Idx))


GLAPI void  APIENTRY glClearBufferuiv(GLenum buffer,GLint drawbuffer,const GLuint *value)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glClearBufferuiv_Idx))
	{
            GL_ENTRY_PTR(glClearBufferuiv_Idx) = dlsym(RTLD_NEXT,"glClearBufferuiv");
            if(!GL_ENTRY_PTR(glClearBufferuiv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glClearBufferuiv_Idx))
    	{
            GL_ENTRY_PREV_TS(glClearBufferuiv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glClearBufferuiv_wrp(buffer,drawbuffer,value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glClearBufferuiv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glClearBufferuiv_Idx) ++;

        GL_ENTRY_LAST_TS(glClearBufferuiv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glClearBufferuiv_Idx),
				 GL_ENTRY_LAST_TS(glClearBufferuiv_Idx));
        if(last_diff > 1000000000){
            printf("glClearBufferuiv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glClearBufferuiv_Idx),
	             GL_ENTRY_CALL_TIME(glClearBufferuiv_Idx),
	             GL_ENTRY_CALL_TIME(glClearBufferuiv_Idx) /
	             GL_ENTRY_CALL_COUNT(glClearBufferuiv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glClearBufferuiv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glClearBufferuiv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glClearBufferuiv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glClearBufferuiv_Idx) = get_ts();
        }


	

}