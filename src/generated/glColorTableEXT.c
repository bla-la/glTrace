#include <glTraceCommon.h>
#include <generated.h>

#define glColorTableEXT_wrp						\
    ((void  (*)(GLenum target,GLenum internalFormat,GLsizei width,GLenum format,GLenum type,const void *table                                        \
    ))GL_ENTRY_PTR(glColorTableEXT_Idx))


GLAPI void  APIENTRY glColorTableEXT(GLenum target,GLenum internalFormat,GLsizei width,GLenum format,GLenum type,const void *table)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glColorTableEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glColorTableEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glColorTableEXT_wrp(target,internalFormat,width,format,type,table);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glColorTableEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glColorTableEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glColorTableEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glColorTableEXT_Idx),
				 GL_ENTRY_LAST_TS(glColorTableEXT_Idx));


        if(last_diff > 1000000000){
            printf("glColorTableEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glColorTableEXT_Idx),
	             GL_ENTRY_CALL_TIME(glColorTableEXT_Idx),
	             GL_ENTRY_CALL_TIME(glColorTableEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glColorTableEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glColorTableEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glColorTableEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glColorTableEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glColorTableEXT_Idx) = get_ts();
        }


	

}