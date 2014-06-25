#include <glTraceCommon.h>
#include <generated.h>

#define glColor4d_wrp						\
    ((void  (*)(GLdouble red,GLdouble green,GLdouble blue,GLdouble alpha                                        \
    ))GL_ENTRY_PTR(glColor4d_Idx))


GLAPI void  APIENTRY glColor4d(GLdouble red,GLdouble green,GLdouble blue,GLdouble alpha)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glColor4d_Idx))
	{
            GL_ENTRY_PTR(glColor4d_Idx) = dlsym(RTLD_NEXT,"glColor4d");
            if(!GL_ENTRY_PTR(glColor4d_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glColor4d_Idx))
    	{
            GL_ENTRY_PREV_TS(glColor4d_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glColor4d_wrp(red,green,blue,alpha);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glColor4d_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glColor4d_Idx) ++;

        GL_ENTRY_LAST_TS(glColor4d_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glColor4d_Idx),
				 GL_ENTRY_LAST_TS(glColor4d_Idx));
        if(last_diff > 1000000000){
            printf("glColor4d %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glColor4d_Idx),
	             GL_ENTRY_CALL_TIME(glColor4d_Idx),
	             GL_ENTRY_CALL_TIME(glColor4d_Idx) /
	             GL_ENTRY_CALL_COUNT(glColor4d_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glColor4d_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glColor4d_Idx) = 0;
             GL_ENTRY_CALL_TIME(glColor4d_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glColor4d_Idx) = get_ts();
        }


	

}