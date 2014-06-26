#include <glTraceCommon.h>
#include <generated.h>

#define glGetCompressedMultiTexImageEXT_wrp						\
    ((void  (*)(GLenum texunit,GLenum target,GLint lod,void *img                                        \
    ))GL_ENTRY_PTR(glGetCompressedMultiTexImageEXT_Idx))


GLAPI void  APIENTRY glGetCompressedMultiTexImageEXT(GLenum texunit,GLenum target,GLint lod,void *img)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetCompressedMultiTexImageEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetCompressedMultiTexImageEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetCompressedMultiTexImageEXT_wrp(texunit,target,lod,img);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetCompressedMultiTexImageEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetCompressedMultiTexImageEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetCompressedMultiTexImageEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetCompressedMultiTexImageEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetCompressedMultiTexImageEXT_Idx));


        if(last_diff > 1000000000){
            printf("glGetCompressedMultiTexImageEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetCompressedMultiTexImageEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetCompressedMultiTexImageEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetCompressedMultiTexImageEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetCompressedMultiTexImageEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetCompressedMultiTexImageEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetCompressedMultiTexImageEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetCompressedMultiTexImageEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetCompressedMultiTexImageEXT_Idx) = get_ts();
        }


	

}