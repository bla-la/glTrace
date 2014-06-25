#include <glTraceCommon.h>
#include <generated.h>

#define glDeleteNamesAMD_wrp						\
    ((void  (*)(GLenum identifier,GLuint num,const GLuint *names                                        \
    ))GL_ENTRY_PTR(glDeleteNamesAMD_Idx))


GLAPI void  APIENTRY glDeleteNamesAMD(GLenum identifier,GLuint num,const GLuint *names)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDeleteNamesAMD_Idx))
	{
            GL_ENTRY_PTR(glDeleteNamesAMD_Idx) = dlsym(RTLD_NEXT,"glDeleteNamesAMD");
            if(!GL_ENTRY_PTR(glDeleteNamesAMD_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDeleteNamesAMD_Idx))
    	{
            GL_ENTRY_PREV_TS(glDeleteNamesAMD_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDeleteNamesAMD_wrp(identifier,num,names);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDeleteNamesAMD_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDeleteNamesAMD_Idx) ++;

        GL_ENTRY_LAST_TS(glDeleteNamesAMD_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDeleteNamesAMD_Idx),
				 GL_ENTRY_LAST_TS(glDeleteNamesAMD_Idx));
        if(last_diff > 1000000000){
            printf("glDeleteNamesAMD %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDeleteNamesAMD_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteNamesAMD_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteNamesAMD_Idx) /
	             GL_ENTRY_CALL_COUNT(glDeleteNamesAMD_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDeleteNamesAMD_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDeleteNamesAMD_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDeleteNamesAMD_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDeleteNamesAMD_Idx) = get_ts();
        }


	

}