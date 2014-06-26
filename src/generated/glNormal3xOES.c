#include <glTraceCommon.h>
#include <generated.h>

#define glNormal3xOES_wrp						\
    ((void  (*)(GLfixed nx,GLfixed ny,GLfixed nz                                        \
    ))GL_ENTRY_PTR(glNormal3xOES_Idx))


GLAPI void  APIENTRY glNormal3xOES(GLfixed nx,GLfixed ny,GLfixed nz)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glNormal3xOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glNormal3xOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glNormal3xOES_wrp(nx,ny,nz);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glNormal3xOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glNormal3xOES_Idx) ++;

        GL_ENTRY_LAST_TS(glNormal3xOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glNormal3xOES_Idx),
				 GL_ENTRY_LAST_TS(glNormal3xOES_Idx));


        if(last_diff > 1000000000){
            printf("glNormal3xOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glNormal3xOES_Idx),
	             GL_ENTRY_CALL_TIME(glNormal3xOES_Idx),
	             GL_ENTRY_CALL_TIME(glNormal3xOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glNormal3xOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glNormal3xOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glNormal3xOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glNormal3xOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glNormal3xOES_Idx) = get_ts();
        }


	

}