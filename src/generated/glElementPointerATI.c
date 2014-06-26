#include <glTraceCommon.h>
#include <generated.h>

#define glElementPointerATI_wrp						\
    ((void  (*)(GLenum type,const void *pointer                                        \
    ))GL_ENTRY_PTR(glElementPointerATI_Idx))


GLAPI void  APIENTRY glElementPointerATI(GLenum type,const void *pointer)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glElementPointerATI_Idx))
    	{
            GL_ENTRY_PREV_TS(glElementPointerATI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glElementPointerATI_wrp(type,pointer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glElementPointerATI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glElementPointerATI_Idx) ++;

        GL_ENTRY_LAST_TS(glElementPointerATI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glElementPointerATI_Idx),
				 GL_ENTRY_LAST_TS(glElementPointerATI_Idx));


        if(last_diff > 1000000000){
            printf("glElementPointerATI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glElementPointerATI_Idx),
	             GL_ENTRY_CALL_TIME(glElementPointerATI_Idx),
	             GL_ENTRY_CALL_TIME(glElementPointerATI_Idx) /
	             GL_ENTRY_CALL_COUNT(glElementPointerATI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glElementPointerATI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glElementPointerATI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glElementPointerATI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glElementPointerATI_Idx) = get_ts();
        }


	

}