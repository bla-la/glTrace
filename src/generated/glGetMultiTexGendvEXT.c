#include <glTraceCommon.h>
#include <generated.h>

#define glGetMultiTexGendvEXT_wrp						\
    ((void  (*)(GLenum texunit,GLenum coord,GLenum pname,GLdouble *params                                        \
    ))GL_ENTRY_PTR(glGetMultiTexGendvEXT_Idx))


GLAPI void  APIENTRY glGetMultiTexGendvEXT(GLenum texunit,GLenum coord,GLenum pname,GLdouble *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetMultiTexGendvEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetMultiTexGendvEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetMultiTexGendvEXT_wrp(texunit,coord,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetMultiTexGendvEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetMultiTexGendvEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetMultiTexGendvEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetMultiTexGendvEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetMultiTexGendvEXT_Idx));


        if(last_diff > 1000000000){
            printf("glGetMultiTexGendvEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetMultiTexGendvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetMultiTexGendvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetMultiTexGendvEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetMultiTexGendvEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetMultiTexGendvEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetMultiTexGendvEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetMultiTexGendvEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetMultiTexGendvEXT_Idx) = get_ts();
        }


	

}