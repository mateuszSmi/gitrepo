function setup() {
  createCanvas(1000, 1000);
}

function draw() {
  // put drawing code here
  noFill();
  rect(100,100, 1000,1000);
  rect('blue');
  stroke('blue');
  strokeWeight(10);
  ellipse(200, 200, 150, 150);
  stroke('black');
  strokeWeight(10);
  ellipse(370, 200, 150, 150);
  stroke('red');
  strokeWeight(10);
  ellipse(540, 200, 150, 150);
  stroke('yellow');
  strokeWeight(10);
  ellipse(285, 280, 150, 150);
  stroke('green');
  strokeWeight(10);
  ellipse(455, 280, 150, 150);
}
