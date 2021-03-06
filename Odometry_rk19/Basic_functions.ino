float dist(float x1,float y1,float x2,float y2)
{
  return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}

float angle(float x1,float y1,float x2,float y2)
{
  int tolerance=50000;
  if(abs(x2-x1)<tolerance)
  return atan2((y2-y1),(x2-x1));
  else
  return pi/2;
}

void ScaleWheels(float maximum)
{
  
  float maxR=pWheel[0]->rpm;
  for(int i=0;i<3;++i)
  {
    if(pWheel[i]->rpm>maxR)
    maxR=pWheel[i]->rpm;
  }
  if(maxR>maximum)
  for(int i=0;i<3;++i)
  {
    pWheel[i]->rpm*=maximum/maxR;
  }
}

