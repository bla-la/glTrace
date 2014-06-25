#include <glTraceCommon.h>
#include <generated.h>

#define glTexCoord4d_wrp						\
    ((void  (*)(GLdouble s,GLdouble t,GLdouble r,GLdouble q                                        \
    ))GL_ENTRY_PTR(glTexCoord4d_Idx))


GLAPI void  APIENTRY glTexCoord4d(GLdouble s,GLdouble t,GLdouble r,GLdouble q)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glTexCoord4d_Idx))
	{
            GL_ENTRY_PTR(glTexCoord4d_Idx) = dlsym(RTLD_NEXT,"glTexCoord4d");
            if(!GL_ENTRY_PTR(glTexCoord4d_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glTexCoord4d_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexCoord4d_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexCoord4d_wrp(s,t,r,q);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexCoord4d_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexCoord4d_Idx) ++;

        GL_ENTRY_LAST_TS(glTexCoord4d_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexCoord4d_Idx),
				 GL_ENTRY_LAST_TS(glTexCoord4d_Idx));
        if(last_diff > 1000000000){
            printf("glTexCoord4d %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexCoord4d_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoord4d_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoord4d_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexCoord4d_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexCoord4d_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexCoord4d_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexCoord4d_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexCoord4d_Idx) = get_ts();
        }


	

}