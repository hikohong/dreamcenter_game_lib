//
//  Shader.fsh
//  dreamcenter_game_lib
//
//  Created by Hong Sheng-Yen on 11/8/23.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

varying lowp vec4 colorVarying;

void main()
{
    gl_FragColor = colorVarying;
}
