#pragma once
#include "ViconTrackingDLL.h"
#include <vector>

namespace Tracking
{
	struct TRACKINGDLL_API BoneStruct
	{
	public:
		std::string BoneName;
		double Rotation[9];
		double Translation[9];
		double Quaternion[4];
		double Euler[3];
		double AdjustR[3];
		bool mapping;
		BoneStruct()
		{
			BoneName = "";
			mapping = true;
			Quaternion[0] = Quaternion[1] = Quaternion[2] = Quaternion[3] = 0;
			Euler[0] = Euler[1] = Euler[2] = 0;
			Translation[0] = Translation[1] = Translation[2] = 0;
			AdjustR[0] = AdjustR[1] = AdjustR[2] = 0;

			for (int i = 0; i<9; i++)
			{
				Rotation[i] = 0;
			}
		}
		~BoneStruct(){};
	};

	class TRACKINGDLL_API ISkeletonTracking
	{
	public:
		virtual ~ISkeletonTracking(){}
		virtual bool Initialize(const std::string& server) = 0;
		virtual bool ConnectServer() = 0;
		virtual bool IsConnected() = 0;
        virtual void Disconnect() = 0;
		virtual void Update() = 0;
		virtual void GetBonesData(const std::string& subject, std::vector<BoneStruct>& arg) = 0;
		virtual std::string GetInfo() = 0;
	};

	class TRACKINGDLL_API SkeletonTrackingFactory
	{
	public:
		static ISkeletonTracking* create();
	};
}