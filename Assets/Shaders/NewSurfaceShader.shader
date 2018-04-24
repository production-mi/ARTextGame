Shader "Unlit/Effects2"
{
	Properties
	    {
			    _MainTex ("Texture", 2D) = "white" {}
					_TintColor("TintColor", Color) = (1,1,1,1)
	        _Density ("Density", Range(2,50)) = 30
					_Opacity("Opacity", Range(0.0, 60.0)) = 1.0
	    }
	    SubShader
	    {
					Tags {  "Queue"="Transparent" "RenderType"="Transparent"}
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
									float2 uv2 : TEXCOORD1;
	                float4 vertex : SV_POSITION;
	            };

							sampler2D _MainTex;
	            float  _Density;
							float4 _TintColor;
							float _Opacity;

	            v2f vert (float4 pos : POSITION, float4 uv : TEXCOORD0)
	            {
	                v2f o;
	                o.vertex = UnityObjectToClipPos(pos);
									uv.x = uv.x;
									uv.y = uv.y;
	                o.uv = uv * _Density;
									o.uv2 = uv;
	                return o;
	            }

							//Make Noise
							float random(float2 myVector)
							{
								return frac(sin(dot(myVector, float2(12.9898, 78.233))) * 43758.5453);
							}


	            fixed4 frag (v2f i) : SV_Target
	            {
									fixed4 col = tex2D(_MainTex, i.uv2);
	                float2 c = i.uv;
									c = floor(c) / 0.1;
									float4  final = (1,1,1,1);
									final = final * col * _TintColor;



									for(float i = 0.0; i < _Opacity; i++)
									{
									  float noise = random(c / (((_Opacity/ 0.2) * 0.2) ));
										final.a =  clamp(final.a +  noise, 0.0, 1.0);
									}
									return final;

							}
	          ENDCG
	        }
	    }
}
