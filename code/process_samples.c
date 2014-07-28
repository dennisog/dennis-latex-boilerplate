for (i=0;i<(int)nframes;i++) {
  x=in[i];
  //update the circular buffer
  for (j=nyquist-1;j>=0;j--){
    buffer[j] = buffer[j-1];
  }
  buffer[0] = x;
  nSamples++;

  /* A new FFT will be calculated every (bufferSize/2)-th Sample.
   * This creates a nice overlap, because the Window functions
   * pinch off at the ends.
   */

  if (nSamples == bufferSize/2){
    for (z=0;z<bufferSize;z++){
      currentFrame[z] = buffer[z];
    }
    getMagnitude(currentFrame, result, fftSize);
    nSamples = 0;
}
