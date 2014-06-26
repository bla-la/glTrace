#include <glTraceCommon.h>
#include <generated.h>

#define glExtGetBufferPointervQCOM_wrp						\
    ((void  (*)(GLenum target,void **params                                        \
    ))GL_ENTRY_PTR(glExtGetBufferPointervQCOM_Idx))


GLAPI void  APIENTRY glExtGetBufferPointervQCOM(GLenum target,void **params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glExtGetBufferPointervQCOM_Idx))
    	{
            GL_ENTRY_PREV_TS(glExtGetBufferPointervQCOM_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glExtGetBufferPointervQCOM_wrp(target,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glExtGetBufferPointervQCOM_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glExtGetBufferPointervQCOM_Idx) ++;

        GL_ENTRY_LAST_TS(glExtGetBufferPointervQCOM_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glExtGetBufferPointervQCOM_Idx),
				 GL_ENTRY_LAST_TS(glExtGetBufferPointervQCOM_Idx));


        if(last_diff > 1000000000){
            printf("glExtGetBufferPointervQCOM %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glExtGetBufferPointervQCOM_Idx),
	             GL_ENTRY_CALL_TIME(glExtGetBufferPointervQCOM_Idx),
	             GL_ENTRY_CALL_TIME(glExtGetBufferPointervQCOM_Idx) /
	             GL_ENTRY_CALL_COUNT(glExtGetBufferPointervQCOM_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glExtGetBufferPointervQCOM_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glExtGetBufferPointervQCOM_Idx) = 0;
             GL_ENTRY_CALL_TIME(glExtGetBufferPointervQCOM_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glExtGetBufferPointervQCOM_Idx) = get_ts();
        }


	

}