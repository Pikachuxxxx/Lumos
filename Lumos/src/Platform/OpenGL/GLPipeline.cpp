#include "lmpch.h"
#include "GLPipeline.h"
#include "GLDescriptorSet.h"
#include "GLShader.h"

namespace Lumos
{
    namespace Graphics
    {
        GLPipeline::GLPipeline(const PipelineInfo &pipelineCI) : m_RenderPass(nullptr)
        {
            Init(pipelineCI);
        }

        GLPipeline::~GLPipeline()
        {
            delete m_DescriptorSet;
        }

        bool GLPipeline::Init(const PipelineInfo &pipelineCI)
        {
            DescriptorInfo info;
            info.pipeline = this;
            info.layoutIndex = 0;
            info.shader = pipelineCI.shader;
			m_DescriptorSet = lmnew GLDescriptorSet(info);
            m_TransparencyEnabled = pipelineCI.transparencyEnabled;

			m_Shader = info.shader;

            return true;
        }

        void GLPipeline::SetActive(Graphics::CommandBuffer* cmdBuffer)
        {
            if(m_TransparencyEnabled)
                glEnable(GL_BLEND);
            else
                glDisable(GL_BLEND);

            m_Shader->Bind();
        }

		void GLPipeline::MakeDefault()
		{
			CreateFunc = CreateFuncGL;
		}

		Pipeline* GLPipeline::CreateFuncGL(const PipelineInfo & pipelineCI)
		{
			return lmnew GLPipeline(pipelineCI);
		}
    }
}
