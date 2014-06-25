#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexCoord2bvOES_wrp						\
    ((void  (*)(GLenum texture,const GLbyte *coords                                        \
    ))GL_ENTRY_PTR(glMultiTexCoord2bvOES_Idx))


GLAPI void  APIENTRY glMultiTexCoord2bvOES(GLenum texture,const GLbyte *coords)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMultiTexCoord2bvOES_Idx))
	{
            GL_ENTRY_PTR(glMultiTexCoord2bvOES_Idx) = dlsym(RTLD_NEXT,"glMultiTexCoord2bvOES");
            if(!GL_ENTRY_PTR(glMultiTexCoord2bvOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMultiTexCoord2bvOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexCoord2bvOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexCoord2bvOES_wrp(texture,coords);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexCoord2bvOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexCoord2bvOES_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexCoord2bvOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexCoord2bvOES_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexCoord2bvOES_Idx));
        if(last_diff > 1000000000){
            printf("glMultiTexCoord2bvOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord2bvOES_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord2bvOES_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord2bvOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord2bvOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexCoord2bvOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexCoord2bvOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexCoord2bvOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexCoord2bvOES_Idx) = get_ts();
        }


	

}