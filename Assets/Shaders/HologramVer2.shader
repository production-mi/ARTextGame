Shader "Unlit/HologramVer2"
{
	Properties
	{
		_MainTex ("Texture", 2D) = "white" {}
		_TintColor("Tint Color", Color) = (1,1,1,1)
		_Transparency("Transparency", Range(0.0,1.0)) = 0.25
		_CutoutThresh("Cutout Threshhold", Range(0.0, 0.5)) = 0.2
		_Distance("Distance", Float) = 1
		_Amplitude("Amplitude", Float) = 1
		_Speed("Speed", Float) = 1
		_Amount("Amount", Range(0.0,1.0)) = 1
		_ScanTiling("Scan Tiling", Range(0.01, 800.0)) = 0.05
		_ScanSpeed("Scan Speed", Range(-10.0, 10.0)) = 1.0
		_GlitchSpeed("Glitch Speed", Range(0, 50)) = 1.0
		_GlitchIntensity("Glitch Intensity", Float) = 0
		_GlowTiling("Glow Tiling", Range(0.01, 100.0)) = 0.05
		_GlowSpeed ("Glow Speed", Range(-10.0, 10.0)) = 1.0
		_RimColor("Rim Color", Color) = (1,1,1,1)
		_RimPower("Rim Power", Range(0.1, 1.0)) = 5.0

		_DisolveTexture("Disolve Texture", 2D) = "white" {}
		_DisolveY("Disolve Height", Float) = 0
		_DisolveSize("Disolve Intensity", Float) = 2
		_StartingY("Starting point of disolve effect", Float) = -10
	}

	SubShader
	{
		Tags { "Queue" = "Transparent" "RenderType"="Transparent" }
		LOD 100

		//ZWrite Off
		Blend SrcAlpha OneMinusSrcAlpha

		Pass
		{
			CGPROGRAM
			#pragma vertex vert
			#pragma fragment frag


			#include "UnityCG.cginc"

			struct appdata
			{
				float4 vertex : POSITION;
				float3 normal :NORMAL;
				float2 uv : TEXCOORD0;
			};

			struct v2f
			{
			  float4 vertex : SV_POSITION;
				float2 uv : TEXCOORD0;
				float2 uv2 : TEXCOORD4;
				float4 worldVertex : TEXCOORD1;
				float3 viewDir : TEXCOORD2;
				float3 worldNormal : NORMAL;

				float3 worldPos :TEXCOORD3;

			};

			sampler2D _MainTex;
			float4 _MainTex_ST;
			float4 _DisolveTexture_ST;
			float4 _TintColor;
			float4 _RimColor;
			float _RimPower;
			float _Transparency;
			float _CutoutThresh;
			float _Distance;
			float _Amplitude;
			float _Speed;
			float _Amount;
			float _ScanTiling;
			float _ScanSpeed;
			float _GlowTiling;
			float _GlowSpeed;
			float _GlitchSpeed;
			float _GlitchIntensity;

			sampler2D _DisolveTexture;
			float _DisolveY;
			float _DisolveSize;
			float _StartingY;



			v2f vert (appdata v)
			{
				v2f o;
				v.vertex.x += sin(_Time.y * _Speed + v.vertex.y * _Amplitude) * _Distance * _Amount;
				v.vertex.x += _GlitchIntensity * (step(0.5, sin(_Time.y * 8.0 + v.vertex.y * 10.0)) * step(0.99, sin(_Time.y * _GlitchSpeed * 0.5)));
				o.vertex = UnityObjectToClipPos(v.vertex);
				o.uv = TRANSFORM_TEX(v.uv, _MainTex);
				o.uv2 = TRANSFORM_TEX(v.uv, _DisolveTexture);

				o.worldPos = mul(unity_ObjectToWorld, v.vertex).xyz;


				o.worldVertex = mul(unity_ObjectToWorld, v.vertex);
				o.worldNormal = UnityObjectToWorldNormal(v.normal);
				o.viewDir = normalize(UnityWorldSpaceViewDir(o.worldVertex.xyz));
				return o;
			}

			fixed4 frag (v2f i) : SV_Target
			{

				// sample the texture
				fixed4 col = tex2D(_MainTex, i.uv) * _TintColor;


			  // ScanLines
				float scan = 0.0;
				scan = step(frac(i.worldVertex.z * _ScanTiling + _Time.y * _ScanSpeed), 0.5) * 0.65;


				float transition = _DisolveY - i.worldPos.z;
				clip(_StartingY + (transition + (tex2D(_DisolveTexture, i.uv2)) * _DisolveSize ));

				col.a = (_Transparency - scan) + 0.1;

				// Glow
				//float glow = 0.0;
				//glow = frac(i.worldVertex.y * _GlowTiling - _Time.x * _GlowSpeed);

				half rim = 1.0 - saturate(dot(i.viewDir, i.worldNormal));
				fixed4 rimColor = _RimColor * pow(rim, _RimPower);

				col = tex2D(_MainTex, i.uv) * _TintColor + (scan*0.5) + rimColor;
				return col;
			}
			ENDCG
		}
	}
}
