#include <glTraceCommon.h>
#include <generated.h>

#define glNormal3s_wrp						\
    ((void  (*)(GLshort nx,GLshort ny,GLshort nz                                        \
    ))GL_ENTRY_PTR(glNormal3s_Idx))


GLAPI void  APIENTRY glNormal3s(GLshort nx,GLshort ny,GLshort nz)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glNormal3s_Idx))
    	{
            GL_ENTRY_PREV_TS(glNormal3s_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glNormal3s_wrp(nx,ny,nz);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glNormal3s_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glNormal3s_Idx) ++;

        GL_ENTRY_LAST_TS(glNormal3s_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glNormal3s_Idx),
				 GL_ENTRY_LAST_TS(glNormal3s_Idx));


        if(last_diff > 1000000000){
            printf("glNormal3s %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glNormal3s_Idx),
	             GL_ENTRY_CALL_TIME(glNormal3s_Idx),
	             GL_ENTRY_CALL_TIME(glNormal3s_Idx) /
	             GL_ENTRY_CALL_COUNT(glNormal3s_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glNormal3s_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glNormal3s_Idx) = 0;
             GL_ENTRY_CALL_TIME(glNormal3s_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glNormal3s_Idx) = get_ts();
        }


	

}