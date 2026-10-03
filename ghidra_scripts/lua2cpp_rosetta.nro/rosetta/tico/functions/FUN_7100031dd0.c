
void FUN_7100031dd0(L2CValue *param_1,void *param_2,L2CValue *param_3,L2CValue *param_4,
                   L2CValue *param_5)

{
  uint uVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  L2CValue *pLVar4;
  undefined8 uVar5;
  undefined auStack224 [32];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  uVar1 = lib::L2CValue::as_integer(param_3);
  uVar5 = app::lua_bind::GroundModule__get_touch_normal_impl
                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar1);
  lib::L2CValue::L2CValue(aLStack144,(float)uVar5);
  lib::L2CValue::L2CValue(aLStack128,(float)((ulong)uVar5 >> 0x20));
  lib::L2CValue::L2CValue(aLStack80,aLStack144);
  lib::L2CValue::L2CValue(aLStack96,aLStack128);
  pLVar4 = aLStack96;
  lua2cpp::L2CFighterBase::Vector2__create(param_2,(L2CValue)0xb0,SUB81(pLVar4,0));
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack144);
  pLVar2 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x18cdc1683);
  lib::L2CValue::L2CValue(aLStack96,pLVar2);
  pLVar2 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x1fbdb2615);
  lib::L2CValue::L2CValue(aLStack160,pLVar2);
  pLVar2 = aLStack160;
  lib::L2CAgent::math_atan((L2CAgent *)aLStack96,pLVar2,pLVar4);
  lib::L2CAgent::math_deg((L2CAgent *)auStack224,pLVar2);
  lib::L2CValue::operator*((L2CValue *)(auStack224 + 0x10),param_5);
  lib::L2CValue::L2CValue(aLStack80,-1.0);
  lib::L2CValue::operator*(aLStack192,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack224 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)auStack224);
  lib::L2CValue::L2CValue(aLStack80,0.5);
  lib::L2CValue::operator+(param_4,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  uVar3 = lib::L2CValue::operator<=(aLStack176,aLStack192);
  lib::L2CValue::~L2CValue(aLStack192);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(param_1,true);
  }
  else {
    lib::L2CValue::L2CValue(param_1,false);
  }
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

