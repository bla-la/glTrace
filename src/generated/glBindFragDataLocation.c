#include <glTraceCommon.h>
#include <generated.h>

#define glBindFragDataLocation_wrp						\
    ((void  (*)(GLuint program,GLuint color,const GLchar *name                                        \
    ))GL_ENTRY_PTR(glBindFragDataLocation_Idx))


GLAPI void  APIENTRY glBindFragDataLocation(GLuint program,GLuint color,const GLchar *name)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glBindFragDataLocation_Idx))
	{
            GL_ENTRY_PTR(glBindFragDataLocation_Idx) = dlsym(RTLD_NEXT,"glBindFragDataLocation");
            if(!GL_ENTRY_PTR(glBindFragDataLocation_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glBindFragDataLocation_Idx))
    	{
            GL_ENTRY_PREV_TS(glBindFragDataLocation_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBindFragDataLocation_wrp(program,color,name);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBindFragDataLocation_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBindFragDataLocation_Idx) ++;

        GL_ENTRY_LAST_TS(glBindFragDataLocation_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBindFragDataLocation_Idx),
				 GL_ENTRY_LAST_TS(glBindFragDataLocation_Idx));
        if(last_diff > 1000000000){
            printf("glBindFragDataLocation %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBindFragDataLocation_Idx),
	             GL_ENTRY_CALL_TIME(glBindFragDataLocation_Idx),
	             GL_ENTRY_CALL_TIME(glBindFragDataLocation_Idx) /
	             GL_ENTRY_CALL_COUNT(glBindFragDataLocation_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBindFragDataLocation_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBindFragDataLocation_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBindFragDataLocation_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBindFragDataLocation_Idx) = get_ts();
        }


	

}