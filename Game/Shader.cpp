#include "pch.h"
#include "Shader.h"
#include "specificOpenGL/OpenGLShader.h"

namespace Game 
{
	Shader::Shader(const std::string& vertexFile, const std::string& fragmentFile)
	{

#ifdef GAME_OPENGL
		mImplementation = new OpenGLShader{ vertexFile, fragmentFile };
#else
		#Only_OpenGL_is_supported_for_now
#endif
	}

	void Shader::SetUniform3Ints(const std::string& uniformName, int val1, int val2, int val3)
	{
		mImplementation->SetUniform3Ints(uniformName, val1, val2, val3);
	}

	void Shader::SetUniform2Ints(const std::string& uniformName, int val1, int val2)
	{
		mImplementation->SetUniform2Ints(uniformName, val1, val2);
	}

	void Shader::Bind()
	{
		mImplementation->Bind();
	}


}
