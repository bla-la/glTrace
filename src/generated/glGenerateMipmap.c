#include <glTraceCommon.h>
#include <generated.h>

#define glGenerateMipmap_wrp						\
    ((void  (*)(GLenum target                                        \
    ))GL_ENTRY_PTR(glGenerateMipmap_Idx))


GLAPI void  APIENTRY glGenerateMipmap(GLenum target)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGenerateMipmap_Idx))
	{
            GL_ENTRY_PTR(glGenerateMipmap_Idx) = dlsym(RTLD_NEXT,"glGenerateMipmap");
            if(!GL_ENTRY_PTR(glGenerateMipmap_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGenerateMipmap_Idx))
    	{
            GL_ENTRY_PREV_TS(glGenerateMipmap_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGenerateMipmap_wrp(target);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGenerateMipmap_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGenerateMipmap_Idx) ++;

        GL_ENTRY_LAST_TS(glGenerateMipmap_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGenerateMipmap_Idx),
				 GL_ENTRY_LAST_TS(glGenerateMipmap_Idx));
        if(last_diff > 1000000000){
            printf("glGenerateMipmap %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGenerateMipmap_Idx),
	             GL_ENTRY_CALL_TIME(glGenerateMipmap_Idx),
	             GL_ENTRY_CALL_TIME(glGenerateMipmap_Idx) /
	             GL_ENTRY_CALL_COUNT(glGenerateMipmap_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGenerateMipmap_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGenerateMipmap_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGenerateMipmap_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGenerateMipmap_Idx) = get_ts();
        }


	

}