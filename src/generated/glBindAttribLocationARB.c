#include <glTraceCommon.h>
#include <generated.h>

#define glBindAttribLocationARB_wrp						\
    ((void  (*)(GLhandleARB programObj,GLuint index,const GLcharARB *name                                        \
    ))GL_ENTRY_PTR(glBindAttribLocationARB_Idx))


GLAPI void  APIENTRY glBindAttribLocationARB(GLhandleARB programObj,GLuint index,const GLcharARB *name)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glBindAttribLocationARB_Idx))
	{
            GL_ENTRY_PTR(glBindAttribLocationARB_Idx) = dlsym(RTLD_NEXT,"glBindAttribLocationARB");
            if(!GL_ENTRY_PTR(glBindAttribLocationARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glBindAttribLocationARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glBindAttribLocationARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBindAttribLocationARB_wrp(programObj,index,name);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBindAttribLocationARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBindAttribLocationARB_Idx) ++;

        GL_ENTRY_LAST_TS(glBindAttribLocationARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBindAttribLocationARB_Idx),
				 GL_ENTRY_LAST_TS(glBindAttribLocationARB_Idx));
        if(last_diff > 1000000000){
            printf("glBindAttribLocationARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBindAttribLocationARB_Idx),
	             GL_ENTRY_CALL_TIME(glBindAttribLocationARB_Idx),
	             GL_ENTRY_CALL_TIME(glBindAttribLocationARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glBindAttribLocationARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBindAttribLocationARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBindAttribLocationARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBindAttribLocationARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBindAttribLocationARB_Idx) = get_ts();
        }


	

}