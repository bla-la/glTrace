#include <glTraceCommon.h>
#include <generated.h>

#define glTexturePageCommitmentEXT_wrp						\
    ((void  (*)(GLuint texture,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLsizei width,GLsizei height,GLsizei depth,GLboolean resident                                        \
    ))GL_ENTRY_PTR(glTexturePageCommitmentEXT_Idx))


GLAPI void  APIENTRY glTexturePageCommitmentEXT(GLuint texture,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLsizei width,GLsizei height,GLsizei depth,GLboolean resident)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTexturePageCommitmentEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexturePageCommitmentEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexturePageCommitmentEXT_wrp(texture,level,xoffset,yoffset,zoffset,width,height,depth,resident);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexturePageCommitmentEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexturePageCommitmentEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glTexturePageCommitmentEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexturePageCommitmentEXT_Idx),
				 GL_ENTRY_LAST_TS(glTexturePageCommitmentEXT_Idx));


        if(last_diff > 1000000000){
            printf("glTexturePageCommitmentEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexturePageCommitmentEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTexturePageCommitmentEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTexturePageCommitmentEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexturePageCommitmentEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexturePageCommitmentEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexturePageCommitmentEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexturePageCommitmentEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexturePageCommitmentEXT_Idx) = get_ts();
        }


	

}