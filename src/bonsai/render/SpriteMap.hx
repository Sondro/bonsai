package bonsai.render;

class SpriteMap {
	var image:kha.Image;
	var gridWidth:Int;
	var gridHeight:Int;
	public function new (image:kha.Image, gridWidth, gridHeight) {
		
		this.image = image;
		this.gridWidth = gridWidth;
		this.gridHeight = gridHeight;

		if (this.image.width % gridWidth != 0)
			trace("Warning: SpriteMap created where image width is not a multiple of gridWidth");
	}

	public function render (canvas:kha.graphics2.Graphics, x, y, index) {
		var sx = (index * this.gridWidth) % this.image.width;
		var sy = Math.floor(index / this.gridHeight) * this.gridHeight;
		canvas.drawSubImage(this.image, x, y, sx, sy, gridWidth, gridHeight); 
	}
}
