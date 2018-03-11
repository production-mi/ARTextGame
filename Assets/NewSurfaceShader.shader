// Upgrade NOTE: replaced 'mul(UNITY_MATRIX_MVP,*)' with 'UnityObjectToClipPos(*)'

Shader "Custom/AlphaDependingDistance"
{
    Properties
    {
        _MainTex ("Albedo (RGB)", 2D) = "white" {}
        _Radius ("Radius", Range(1, 1000)) = 1
        _EmissionMap ("Emission Map", 2D) = "black" {}
		[HDR] _EmissionColor ("Emission Color", Color) = (0,0,0)
    }
    SubShader
    {
        Tags {"Queue"="Transparent" "RenderType"="Transparent" }

        Blend SrcAlpha OneMinusSrcAlpha

        Pass
        {
            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            //#pragma surface surf Standard fullforwardshadows alphatest:_Cutoff
            #include "UnityCG.cginc"

            struct v2f {
                float4 pos : SV_POSITION;
                float2 uv : TEXCOORD0;
                float4 worldPos : TEXCOORD1;
            };

            sampler2D _MainTex;
            sampler2D _EmissionMap;
            float4 _MainTex_ST;
            half4 _EmissionColor;

            v2f vert(appdata_base v) {
                v2f o;
                o.pos = UnityObjectToClipPos(v.vertex);
                o.uv = TRANSFORM_TEX(v.texcoord, _MainTex);
                o.worldPos = mul(unity_ObjectToWorld, v.vertex);
                return o;
            }

            float _Radius;

            fixed4 frag(v2f i) : SV_Target {
                fixed4 col = tex2D(_MainTex, i.uv);
                fixed4 emi = tex2D(_EmissionMap, i.uv);
                float dist = distance(i.worldPos, _WorldSpaceCameraPos);
                col.a = col.a * (1 - saturate(dist / _Radius));
                col.rgb += emi.rgb * _EmissionColor ;
                return col;
            }

            ENDCG
        }
    }
}
