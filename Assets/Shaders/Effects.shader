Shader "Unlit/Effects"
{
	Properties
	    {
	        _Density ("Density", Range(2,50)) = 30
					_Noise ("Noise", Range(0.0,1.0)) = 0.01
					_TintColor("TintColor", Color) = (1,1,1,1)
					_Brightness("Brightness", Range(0.0, 5.0)) = 0.01
	    }
	    SubShader
	    {
					Tags { "Queue" = "Transparent" "RenderType"="Transparent" }
					LOD  100
					Blend SrcAlpha OneMinusSrcAlpha

	        Pass
	        {
	            CGPROGRAM
	            #pragma vertex vert
	            #pragma fragment frag
	            #include "UnityCG.cginc"

	            struct v2f
	            {
	                float2 uv : TEXCOORD0;
	                float4 vertex : SV_POSITION;
	            };

	            float  _Density;
							float4 _TintColor;
							float2 _Noise;
							float _Brightness;

	            v2f vert (float4 pos : POSITION, float4 uv : TEXCOORD0)
	            {
	                v2f o;
	                o.vertex = UnityObjectToClipPos(pos);
									uv.x = uv.x;
									uv.y = uv.y;
	                o.uv = uv * _Density;
	                return o;
	            }

							//Make Noise
							float random(float2 myVector)
							{
								return frac(sin(dot(myVector, float2(12.9898, 78.233))) * 43758.5453);
							}


	            fixed4 frag (v2f i) : SV_Target
	            {
	                float2 c = i.uv;
	                c = floor(c) / 5;
	                float checker = frac(c.x + c.y) * _Brightness;
									float noise = random(c / ((_Time.x/10 * 0.03)));
	                float alpha = checker * _TintColor * noise;
									float4  final = _TintColor;
									final.a = alpha;
									return final;

							}
	          ENDCG
	        }
	    }
}
