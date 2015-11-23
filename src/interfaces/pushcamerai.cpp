/*
 *  Copyright (C) 1997-2015 JDE Developers Team
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see http://www.gnu.org/licenses/.
 *  Authors :
 *       Victor Arribas Raigadas <v.arribas.urjc@gmai.com>
 */

#include <quadrotor/interfaces/pushcamerai.h>

using namespace quadrotor::interfaces;
using namespace jderobot;


PushCameraI::PushCameraI ()
{}

PushCameraI::~PushCameraI ()
{}

void
PushCameraI::onCameraSensorBoostrap(const cv::Mat img, const gazebo::sensors::CameraSensorPtr /*camerasensor*/){
    imageDescription = new ImageDescription();
    imageDescription->format = "RGB8";// colorspaces::ImageRGB8::FORMAT_RGB8->name();
    imageDescription->height = img.rows;
    imageDescription->width  = img.cols;
    imageDescription->size = img.rows*img.cols*3;

    //cameraDescription = new CameraDescription();
    //gazebo::rendering::CameraPtr cam = camerasensor->GetCamera();

    imageData = new ImageData();
    imageData->description = imageDescription;
    imageData->pixelData.resize(imageDescription->size);
    memcpy(imageData->pixelData.data(), img.data, imageData->pixelData.size());
}

void
PushCameraI::onCameraSensorUpdate(const cv::Mat img){
    memcpy(imageData->pixelData.data(), img.data, imageData->pixelData.size());
}
