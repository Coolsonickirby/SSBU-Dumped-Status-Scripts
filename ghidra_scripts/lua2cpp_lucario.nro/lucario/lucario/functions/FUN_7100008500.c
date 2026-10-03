
void FUN_7100008500(L2CValue *param_1,void *param_2,L2CAgent *param_3,L2CValue *param_4)

{
  L2CValue *pLVar1;
  L2CValue *this;
  L2CAgent *this_00;
  ulong uVar2;
  L2CValue *pLVar3;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  lua2cpp::L2CFighterBase::Vector2__create(param_2,(L2CValue)0x90,(L2CValue)0x80);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  pLVar1 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x18cdc1683);
  pLVar3 = (L2CValue *)0x1fbdb2615;
  this = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x1fbdb2615);
  lib::L2CAgent::math_cos(param_3,pLVar3);
  lib::L2CAgent::math_sin(param_3,pLVar3);
  lib::L2CValue::operator=(pLVar1,aLStack80);
  lib::L2CValue::operator=(this,aLStack144);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack80);
  pLVar1 = (L2CValue *)0x1fbdb2615;
  this_00 = (L2CAgent *)lib::L2CValue::operator[](aLStack96,0x1fbdb2615);
  lib::L2CAgent::math_abs(this_00,pLVar1);
  lib::L2CValue::L2CValue(aLStack80,0.01);
  uVar2 = lib::L2CValue::operator<=(aLStack144,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack144);
  if ((uVar2 & 1) != 0) {
    pLVar1 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    lib::L2CValue::operator=(pLVar1,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  lib::L2CValue::operator*(aLStack96,param_4);
  lib::L2CValue::operator=(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  pLVar1 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x18cdc1683);
  lib::L2CValue::L2CValue(param_1,pLVar1);
  pLVar1 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x1fbdb2615);
  lib::L2CValue::L2CValue(param_1 + 0x10,pLVar1);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

