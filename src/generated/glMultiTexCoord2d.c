#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexCoord2d_wrp						\
    ((void  (*)(GLenum target,GLdouble s,GLdouble t                                        \
    ))GL_ENTRY_PTR(glMultiTexCoord2d_Idx))


GLAPI void  APIENTRY glMultiTexCoord2d(GLenum target,GLdouble s,GLdouble t)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMultiTexCoord2d_Idx))
	{
            GL_ENTRY_PTR(glMultiTexCoord2d_Idx) = dlsym(RTLD_NEXT,"glMultiTexCoord2d");
            if(!GL_ENTRY_PTR(glMultiTexCoord2d_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMultiTexCoord2d_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexCoord2d_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexCoord2d_wrp(target,s,t);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexCoord2d_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexCoord2d_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexCoord2d_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexCoord2d_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexCoord2d_Idx));
        if(last_diff > 1000000000){
            printf("glMultiTexCoord2d %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord2d_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord2d_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord2d_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord2d_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexCoord2d_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexCoord2d_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexCoord2d_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexCoord2d_Idx) = get_ts();
        }


	

}