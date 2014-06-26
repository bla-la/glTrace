#include <glTraceCommon.h>
#include <generated.h>

#define glGenerateMipmapOES_wrp						\
    ((void  (*)(GLenum target                                        \
    ))GL_ENTRY_PTR(glGenerateMipmapOES_Idx))


GLAPI void  APIENTRY glGenerateMipmapOES(GLenum target)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGenerateMipmapOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glGenerateMipmapOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGenerateMipmapOES_wrp(target);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGenerateMipmapOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGenerateMipmapOES_Idx) ++;

        GL_ENTRY_LAST_TS(glGenerateMipmapOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGenerateMipmapOES_Idx),
				 GL_ENTRY_LAST_TS(glGenerateMipmapOES_Idx));


        if(last_diff > 1000000000){
            printf("glGenerateMipmapOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGenerateMipmapOES_Idx),
	             GL_ENTRY_CALL_TIME(glGenerateMipmapOES_Idx),
	             GL_ENTRY_CALL_TIME(glGenerateMipmapOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glGenerateMipmapOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGenerateMipmapOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGenerateMipmapOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGenerateMipmapOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGenerateMipmapOES_Idx) = get_ts();
        }


	

}