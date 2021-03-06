// **********************************************************************
//
// Copyright (c) 2003-2016 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************
//
// Ice version 3.6.3
//
// <auto-generated>
//
// Generated from file `naofollowball.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

(function(module, require, exports)
{
    var Ice = require("ice").Ice;
    var __M = Ice.__M;
    var jderobot = require("jderobot/common").jderobot;
    var Slice = Ice.Slice;

    /**
     * Interface to the Nao follow-ball
     **/
    jderobot.NaoFollowBall = Slice.defineObject(
        undefined,
        Ice.Object, undefined, 1,
        [
            "::Ice::Object",
            "::jderobot::NaoFollowBall"
        ],
        -1, undefined, undefined, false);

    jderobot.NaoFollowBallPrx = Slice.defineProxy(Ice.ObjectPrx, jderobot.NaoFollowBall.ice_staticId, undefined);

    Slice.defineOperations(jderobot.NaoFollowBall, jderobot.NaoFollowBallPrx,
    {
        "setParams": [, , , , , , [[3], [3], [3], [3], [3], [3]], , , , ],
        "setMinParams": [, , , , , , [[3], [3], [3]], , , , ],
        "setMaxParams": [, , , , , , [[3], [3], [3]], , , , ],
        "start": [, , , , , , , , , , ],
        "stop": [, , , , , , , , , , ]
    });
    exports.jderobot = jderobot;
}
(typeof(global) !== "undefined" && typeof(global.process) !== "undefined" ? module : undefined,
 typeof(global) !== "undefined" && typeof(global.process) !== "undefined" ? require : this.Ice.__require,
 typeof(global) !== "undefined" && typeof(global.process) !== "undefined" ? exports : this));
