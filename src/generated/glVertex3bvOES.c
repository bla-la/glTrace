#include <glTraceCommon.h>
#include <generated.h>

#define glVertex3bvOES_wrp						\
    ((void  (*)(const GLbyte *coords                                        \
    ))GL_ENTRY_PTR(glVertex3bvOES_Idx))


GLAPI void  APIENTRY glVertex3bvOES(const GLbyte *coords)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertex3bvOES_Idx))
	{
            GL_ENTRY_PTR(glVertex3bvOES_Idx) = dlsym(RTLD_NEXT,"glVertex3bvOES");
            if(!GL_ENTRY_PTR(glVertex3bvOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertex3bvOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertex3bvOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertex3bvOES_wrp(coords);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertex3bvOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertex3bvOES_Idx) ++;

        GL_ENTRY_LAST_TS(glVertex3bvOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertex3bvOES_Idx),
				 GL_ENTRY_LAST_TS(glVertex3bvOES_Idx));
        if(last_diff > 1000000000){
            printf("glVertex3bvOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertex3bvOES_Idx),
	             GL_ENTRY_CALL_TIME(glVertex3bvOES_Idx),
	             GL_ENTRY_CALL_TIME(glVertex3bvOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertex3bvOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertex3bvOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertex3bvOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertex3bvOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertex3bvOES_Idx) = get_ts();
        }


	

}