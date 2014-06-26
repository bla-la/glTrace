#include <glTraceCommon.h>
#include <generated.h>

#define glVertex4bvOES_wrp						\
    ((void  (*)(const GLbyte *coords                                        \
    ))GL_ENTRY_PTR(glVertex4bvOES_Idx))


GLAPI void  APIENTRY glVertex4bvOES(const GLbyte *coords)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVertex4bvOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertex4bvOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertex4bvOES_wrp(coords);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertex4bvOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertex4bvOES_Idx) ++;

        GL_ENTRY_LAST_TS(glVertex4bvOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertex4bvOES_Idx),
				 GL_ENTRY_LAST_TS(glVertex4bvOES_Idx));


        if(last_diff > 1000000000){
            printf("glVertex4bvOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertex4bvOES_Idx),
	             GL_ENTRY_CALL_TIME(glVertex4bvOES_Idx),
	             GL_ENTRY_CALL_TIME(glVertex4bvOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertex4bvOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertex4bvOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertex4bvOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertex4bvOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertex4bvOES_Idx) = get_ts();
        }


	

}