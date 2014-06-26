#include <glTraceCommon.h>
#include <generated.h>

#define glDrawTextureNV_wrp						\
    ((void  (*)(GLuint texture,GLuint sampler,GLfloat x0,GLfloat y0,GLfloat x1,GLfloat y1,GLfloat z,GLfloat s0,GLfloat t0,GLfloat s1,GLfloat t1                                        \
    ))GL_ENTRY_PTR(glDrawTextureNV_Idx))


GLAPI void  APIENTRY glDrawTextureNV(GLuint texture,GLuint sampler,GLfloat x0,GLfloat y0,GLfloat x1,GLfloat y1,GLfloat z,GLfloat s0,GLfloat t0,GLfloat s1,GLfloat t1)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glDrawTextureNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glDrawTextureNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDrawTextureNV_wrp(texture,sampler,x0,y0,x1,y1,z,s0,t0,s1,t1);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDrawTextureNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDrawTextureNV_Idx) ++;

        GL_ENTRY_LAST_TS(glDrawTextureNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDrawTextureNV_Idx),
				 GL_ENTRY_LAST_TS(glDrawTextureNV_Idx));


        if(last_diff > 1000000000){
            printf("glDrawTextureNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDrawTextureNV_Idx),
	             GL_ENTRY_CALL_TIME(glDrawTextureNV_Idx),
	             GL_ENTRY_CALL_TIME(glDrawTextureNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glDrawTextureNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDrawTextureNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDrawTextureNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDrawTextureNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDrawTextureNV_Idx) = get_ts();
        }


	

}