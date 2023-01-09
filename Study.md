## BCE Loss


<math xmlns="http://www.w3.org/1998/Math/MathML" display="block">
  <mi>B</mi>
  <mi>C</mi>
  <mi>E</mi>
  <mo stretchy="false">(</mo>
  <mi>x</mi>
  <mo stretchy="false">)</mo>
  <mo>=</mo>
  <mo>&#x2212;<!-- − --></mo>
  <mfrac>
    <mn>1</mn>
    <mi>N</mi>
  </mfrac>
  <munderover>
    <mo>&#x2211;<!-- ∑ --></mo>
    <mrow class="MJX-TeXAtom-ORD">
      <mi>i</mi>
      <mo>=</mo>
      <mn>1</mn>
    </mrow>
    <mi>N</mi>
  </munderover>
  <msub>
    <mi>y</mi>
    <mi>i</mi>
  </msub>
  <mi>log</mi>
  <mo>&#x2061;<!-- ⁡ --></mo>
  <mrow class="MJX-TeXAtom-ORD">
    <mo maxsize="1.2em" minsize="1.2em">(</mo>
  </mrow>
  <mi>h</mi>
  <mo stretchy="false">(</mo>
  <msub>
    <mi>x</mi>
    <mi>i</mi>
  </msub>
  <mo>;</mo>
  <mi>&#x03B8;<!-- θ --></mi>
  <mo stretchy="false">)</mo>
  <mrow class="MJX-TeXAtom-ORD">
    <mo maxsize="1.2em" minsize="1.2em">)</mo>
  </mrow>
  <mo>+</mo>
  <mo stretchy="false">(</mo>
  <mn>1</mn>
  <mo>&#x2212;<!-- − --></mo>
  <msub>
    <mi>y</mi>
    <mi>i</mi>
  </msub>
  <mo stretchy="false">)</mo>
  <mi>log</mi>
  <mo>&#x2061;<!-- ⁡ --></mo>
  <mrow class="MJX-TeXAtom-ORD">
    <mo maxsize="1.2em" minsize="1.2em">(</mo>
  </mrow>
  <mn>1</mn>
  <mo>&#x2212;<!-- − --></mo>
  <mi>h</mi>
  <mo stretchy="false">(</mo>
  <msub>
    <mi>x</mi>
    <mi>i</mi>
  </msub>
  <mo>;</mo>
  <mi>&#x03B8;<!-- θ --></mi>
  <mo stretchy="false">)</mo>
  <mrow class="MJX-TeXAtom-ORD">
    <mo maxsize="1.2em" minsize="1.2em">)</mo>
  </mrow>
  <mo>.</mo>
</math>

Binary cross entropy Loss

두개의 표본에 관해서 표본들이 맞을 확률들을 이용해서 손실 계산

음 로그인 이유는 우리는 loss를 구할 때 오차가 크면 Loss가 크게 나와야한다 Cross Entropy의 경우 맞을 확률이 1이고 틀릴 확률은 0에 가까워지므로 값이 작으면 작을수록 큰 Loss값을 얻기 위해 음의 Log를 취하게 된다.