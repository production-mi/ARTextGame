Shader "Unlit/ShowEffects"
{
	Properties
	{
		_MainTex ("Texture", 2D) = "Black" {}
		_Progress("Progress", Range(0.0, 1.0)) = 0.0
		_RimColor("RimColor", Color) = (1,1,1,1)
		_EdgeColor("EdgeColor", Color) = (1,1,1,1)
		_RimPower("RimPower", Range(0.0, 1.0)) = 0.0
	}

	SubShader
	{
		Tags { "Queue"="Transparent" "RenderType"="Transparent"  }
		Blend SrcAlpha OneMinusSrcAlpha
		LOD 100

		Pass
		{
			CGPROGRAM
			#pragma vertex vert
			#pragma fragment frag

			#include "UnityCG.cginc"

			struct appdata
			{
				float4 vertex : POSITION;
				float3 normal : NORMAL;
				float2 uv : TEXCOORD0;
			};

			struct v2f
			{
				float2 uv : TEXCOORD0;
				float4 vertex : SV_POSITION;
				float4 worldVertex : TEXCOORD1;
				float3 viewDir : TEXCOORD2;
				float3 worldNormal : NORMAL;
			};

			sampler2D _MainTex;
			float4 _MainTex_ST;
			float  _Progress;
			float4 _RimColor;
			float4 _EdgeColor;
			float  _RimPower;

			float random(float2 myVector)
				{
					return frac(sin(dot(myVector, float2(12.9898, 78.233))) * 43758.5453);
				}

			v2f vert (appdata v)
			{
				v2f o;
				o.vertex = UnityObjectToClipPos(v.vertex);
				o.uv = TRANSFORM_TEX(v.uv, _MainTex);
				o.worldNormal = UnityObjectToWorldNormal(v.normal);
				o.worldVertex = mul(unity_ObjectToWorld, v.vertex);
				o.viewDir = normalize(UnityWorldSpaceViewDir(o.worldVertex.xyz));
				return o;
			}

			fixed4 frag (v2f i) : SV_Target
			{

			float test = 0.0;
			float scan = 0.0;
			float edge = 0.0;

			half rim = 1.0-saturate(dot(i.viewDir, i.worldNormal));
			fixed4 rimColor = _RimColor * pow (rim, _RimPower);

			test = step(frac((i.uv.y * 80 + _Time.z * 5)),  0.3) * 0.25;
			scan = step(frac(i.uv.y), _Progress) * 0.4;

			edge = step(frac(i.uv.y), (_Progress + 0.05)) * 0.3;
			fixed4 edgeColor = _EdgeColor * pow(edge, 1);


				fixed4 col = tex2D(_MainTex, i.uv) + rimColor ;
				col.a = col.a * scan + edge - test + (scan * 0.25);
				return col;
			}
			ENDCG
		}
	}
}
