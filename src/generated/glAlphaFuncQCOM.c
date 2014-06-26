#include <glTraceCommon.h>
#include <generated.h>

#define glAlphaFuncQCOM_wrp						\
    ((void  (*)(GLenum func,GLclampf ref                                        \
    ))GL_ENTRY_PTR(glAlphaFuncQCOM_Idx))


GLAPI void  APIENTRY glAlphaFuncQCOM(GLenum func,GLclampf ref)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glAlphaFuncQCOM_Idx))
    	{
            GL_ENTRY_PREV_TS(glAlphaFuncQCOM_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glAlphaFuncQCOM_wrp(func,ref);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glAlphaFuncQCOM_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glAlphaFuncQCOM_Idx) ++;

        GL_ENTRY_LAST_TS(glAlphaFuncQCOM_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glAlphaFuncQCOM_Idx),
				 GL_ENTRY_LAST_TS(glAlphaFuncQCOM_Idx));


        if(last_diff > 1000000000){
            printf("glAlphaFuncQCOM %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glAlphaFuncQCOM_Idx),
	             GL_ENTRY_CALL_TIME(glAlphaFuncQCOM_Idx),
	             GL_ENTRY_CALL_TIME(glAlphaFuncQCOM_Idx) /
	             GL_ENTRY_CALL_COUNT(glAlphaFuncQCOM_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glAlphaFuncQCOM_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glAlphaFuncQCOM_Idx) = 0;
             GL_ENTRY_CALL_TIME(glAlphaFuncQCOM_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glAlphaFuncQCOM_Idx) = get_ts();
        }


	

}