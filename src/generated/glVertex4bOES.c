#include <glTraceCommon.h>
#include <generated.h>

#define glVertex4bOES_wrp						\
    ((void  (*)(GLbyte x,GLbyte y,GLbyte z                                        \
    ))GL_ENTRY_PTR(glVertex4bOES_Idx))


GLAPI void  APIENTRY glVertex4bOES(GLbyte x,GLbyte y,GLbyte z)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVertex4bOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertex4bOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertex4bOES_wrp(x,y,z);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertex4bOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertex4bOES_Idx) ++;

        GL_ENTRY_LAST_TS(glVertex4bOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertex4bOES_Idx),
				 GL_ENTRY_LAST_TS(glVertex4bOES_Idx));


        if(last_diff > 1000000000){
            printf("glVertex4bOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertex4bOES_Idx),
	             GL_ENTRY_CALL_TIME(glVertex4bOES_Idx),
	             GL_ENTRY_CALL_TIME(glVertex4bOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertex4bOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertex4bOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertex4bOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertex4bOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertex4bOES_Idx) = get_ts();
        }


	

}