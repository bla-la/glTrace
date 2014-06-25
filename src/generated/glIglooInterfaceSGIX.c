#include <glTraceCommon.h>
#include <generated.h>

#define glIglooInterfaceSGIX_wrp						\
    ((void  (*)(GLenum pname,const void *params                                        \
    ))GL_ENTRY_PTR(glIglooInterfaceSGIX_Idx))


GLAPI void  APIENTRY glIglooInterfaceSGIX(GLenum pname,const void *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glIglooInterfaceSGIX_Idx))
	{
            GL_ENTRY_PTR(glIglooInterfaceSGIX_Idx) = dlsym(RTLD_NEXT,"glIglooInterfaceSGIX");
            if(!GL_ENTRY_PTR(glIglooInterfaceSGIX_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glIglooInterfaceSGIX_Idx))
    	{
            GL_ENTRY_PREV_TS(glIglooInterfaceSGIX_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glIglooInterfaceSGIX_wrp(pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glIglooInterfaceSGIX_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glIglooInterfaceSGIX_Idx) ++;

        GL_ENTRY_LAST_TS(glIglooInterfaceSGIX_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glIglooInterfaceSGIX_Idx),
				 GL_ENTRY_LAST_TS(glIglooInterfaceSGIX_Idx));
        if(last_diff > 1000000000){
            printf("glIglooInterfaceSGIX %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glIglooInterfaceSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glIglooInterfaceSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glIglooInterfaceSGIX_Idx) /
	             GL_ENTRY_CALL_COUNT(glIglooInterfaceSGIX_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glIglooInterfaceSGIX_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glIglooInterfaceSGIX_Idx) = 0;
             GL_ENTRY_CALL_TIME(glIglooInterfaceSGIX_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glIglooInterfaceSGIX_Idx) = get_ts();
        }


	

}