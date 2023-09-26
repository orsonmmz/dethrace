#version 140
precision mediump float;
precision mediump usampler2D;

in vec2 v_tex_coord;

uniform usampler2D u_pixels;
uniform sampler2D u_palette;

out vec4 out_frag_color;

void main(void) {
  uint palette_index = texture(u_pixels, v_tex_coord.xy).r;
  vec4 texel = texelFetch(u_palette, ivec2(palette_index, 0), 0);
  out_frag_color = vec4(texel.bgra);
}
