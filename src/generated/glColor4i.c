#include <glTraceCommon.h>
#include <generated.h>

#define glColor4i_wrp						\
    ((void  (*)(GLint red,GLint green,GLint blue,GLint alpha                                        \
    ))GL_ENTRY_PTR(glColor4i_Idx))


GLAPI void  APIENTRY glColor4i(GLint red,GLint green,GLint blue,GLint alpha)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glColor4i_Idx))
	{
            GL_ENTRY_PTR(glColor4i_Idx) = dlsym(RTLD_NEXT,"glColor4i");
            if(!GL_ENTRY_PTR(glColor4i_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glColor4i_Idx))
    	{
            GL_ENTRY_PREV_TS(glColor4i_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glColor4i_wrp(red,green,blue,alpha);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glColor4i_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glColor4i_Idx) ++;

        GL_ENTRY_LAST_TS(glColor4i_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glColor4i_Idx),
				 GL_ENTRY_LAST_TS(glColor4i_Idx));
        if(last_diff > 1000000000){
            printf("glColor4i %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glColor4i_Idx),
	             GL_ENTRY_CALL_TIME(glColor4i_Idx),
	             GL_ENTRY_CALL_TIME(glColor4i_Idx) /
	             GL_ENTRY_CALL_COUNT(glColor4i_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glColor4i_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glColor4i_Idx) = 0;
             GL_ENTRY_CALL_TIME(glColor4i_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glColor4i_Idx) = get_ts();
        }


	

}