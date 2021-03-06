//
//  GameLayer.h
//  pipes
//
//  Created by andrew morton on 12/23/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

// When you import this file, you import all the cocos2d classes
#import "cocos2d.h"
#import "Tile.h"

@interface GameLayer : CCLayer {
@private
    CCTMXTiledMap *map;
    CCTMXLayer *playLayer;
    CCTMXLayer *fillLayer;
    CCTMXLayer *infoLayer;

    uint nextTileGid;
    CCSprite *nextPiece;
    Tile *flowingInTile;
    Tile *flowingFromTile;
}

// returns a CCScene that contains the HelloWorldLayer as the only child
+(CCScene *) scene;
-(Class)classOfGid:(uint) gid;
-(void) pickNextPiece;
-(void) pumpNextTile;
-(void) endGame;
@end
