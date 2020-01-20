package bonsai.render;

typedef Animation = {
	var frames: Array<Int>;
}

class AnimatedSprite {
	var animations:Map<String, Animation>;
	var playing:String;
	var frame:Int;
	var spriteMap:SpriteMap;

	public function new (spriteMap:SpriteMap) {
		this.spriteMap = spriteMap;
		animations = new Map<String, Animation>();
	}
	public function registerAnimation (identifier:String, animation:Animation) {
		animations.set(identifier, animation);
	}
	public function play (identifier:String) {
		playing = identifier;
		frame = 0;
	}
	public function render (canvas:kha.graphics2.Graphics, x, y) {
		var currentAnimation = animations.get(playing);
		var currentFrame = currentAnimation.frames[frame];
		spriteMap.render(canvas, x, y, currentFrame);

	}
}
