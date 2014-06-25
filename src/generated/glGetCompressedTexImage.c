#include <glTraceCommon.h>
#include <generated.h>

#define glGetCompressedTexImage_wrp						\
    ((void  (*)(GLenum target,GLint level,void *img                                        \
    ))GL_ENTRY_PTR(glGetCompressedTexImage_Idx))


GLAPI void  APIENTRY glGetCompressedTexImage(GLenum target,GLint level,void *img)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetCompressedTexImage_Idx))
	{
            GL_ENTRY_PTR(glGetCompressedTexImage_Idx) = dlsym(RTLD_NEXT,"glGetCompressedTexImage");
            if(!GL_ENTRY_PTR(glGetCompressedTexImage_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetCompressedTexImage_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetCompressedTexImage_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetCompressedTexImage_wrp(target,level,img);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetCompressedTexImage_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetCompressedTexImage_Idx) ++;

        GL_ENTRY_LAST_TS(glGetCompressedTexImage_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetCompressedTexImage_Idx),
				 GL_ENTRY_LAST_TS(glGetCompressedTexImage_Idx));
        if(last_diff > 1000000000){
            printf("glGetCompressedTexImage %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetCompressedTexImage_Idx),
	             GL_ENTRY_CALL_TIME(glGetCompressedTexImage_Idx),
	             GL_ENTRY_CALL_TIME(glGetCompressedTexImage_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetCompressedTexImage_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetCompressedTexImage_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetCompressedTexImage_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetCompressedTexImage_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetCompressedTexImage_Idx) = get_ts();
        }


	

}