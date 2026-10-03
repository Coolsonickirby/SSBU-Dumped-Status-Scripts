
void FUN_7100240bb0(L2CValue *param_1,void *param_2,L2CValue *param_3,L2CValue *param_4,
                   L2CValue *param_5)

{
  uint uVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  L2CValue *pLVar4;
  undefined8 uVar5;
  undefined auStack240 [32];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  undefined auStack144 [32];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack144 + 0x10),0);
  lib::L2CValue::L2CValue((L2CValue *)auStack144,0);
  uVar1 = lib::L2CValue::as_integer(param_3);
  uVar5 = app::lua_bind::GroundModule__get_touch_normal_impl
                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar1);
  lib::L2CValue::L2CValue(aLStack192,(float)uVar5);
  lib::L2CValue::L2CValue(aLStack176,(float)((ulong)uVar5 >> 0x20));
  lib::L2CValue::L2CValue(aLStack80,aLStack192);
  lib::L2CValue::L2CValue(aLStack96,aLStack176);
  pLVar4 = aLStack96;
  lua2cpp::L2CFighterBase::Vector2__create(param_2,(L2CValue)0xb0,SUB81(pLVar4,0));
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack192);
  pLVar2 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x18cdc1683);
  lib::L2CValue::operator=((L2CValue *)auStack144,pLVar2);
  pLVar2 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x1fbdb2615);
  lib::L2CValue::operator=(aLStack112,pLVar2);
  pLVar2 = aLStack112;
  lib::L2CAgent::math_atan((L2CAgent *)auStack144,pLVar2,pLVar4);
  lib::L2CAgent::math_deg((L2CAgent *)auStack240,pLVar2);
  lib::L2CValue::operator*((L2CValue *)(auStack240 + 0x10),param_5);
  lib::L2CValue::L2CValue(aLStack80,-1.0);
  lib::L2CValue::operator*(aLStack208,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::operator=((L2CValue *)(auStack144 + 0x10),aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack240 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)auStack240);
  lib::L2CValue::L2CValue(aLStack80,0.5);
  lib::L2CValue::operator+(param_4,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  uVar3 = lib::L2CValue::operator<=((L2CValue *)(auStack144 + 0x10),aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(param_1,true);
  }
  else {
    lib::L2CValue::L2CValue(param_1,false);
  }
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue((L2CValue *)auStack144);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack144 + 0x10));
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

